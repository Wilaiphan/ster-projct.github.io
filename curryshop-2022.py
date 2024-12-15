from ast import Break 
from random import randint 

#หน้าหลัก 
def mainmenu(): 
    print('\n[หน้าหลัก]') 
    print('1 รายการสั่งอาหาร') 
    print('2 รายการสั่งขนมหวาน') 
    print('3 เกมส์ระหว่างรอคิว') 
    print('0 ออกจากโปรแกรม') 

#สั่งอาหาร 
def payfood() : 
    print('\n[รายการสั่งอาหาร]')  
    food = {" 1. แกงเทโพหมูสามชั้น":20, 
            " 2. แกงส้มชะอมกุ้ง":20, 
            " 3. พะแนงเนื้อ":20, 
            " 4. ใบเหลียงผัดไข่":10, 
            " 5. ผัดพริกแกง":10, 
            " 6. พะโล้":10, 
            " 7. กะหล่ำปลีผัดน้ำปลา":10, 
            " 8. แกงหนอไม้":10, 
            " 9. ไก่กระเทียม":10, 
            " 10. ห่อหมกปลากราย":10, 
            " 11. ทอดมันหมู":10, 
            " 12. ไข่ต้ม":5, 
            " 13. ไข่ดาว":5 , 
            " 14. ข้าวเปล่า":5  
            } 

    print(" 1. แกงเทโพหมูสามชั้น = ", food[" 1. แกงเทโพหมูสามชั้น"],"บาท") 
    print(" 2. แกงส้มชะอมกุ้ง = ", food[" 2. แกงส้มชะอมกุ้ง"],"บาท") 
    print(" 3. พะแนงเนื้อ = ", food[" 3. พะแนงเนื้อ"],"บาท") 
    print(" 4. ใบเหลียงผัดไข่ = ", food[" 4. ใบเหลียงผัดไข่"],"บาท") 
    print(" 5. ผัดพริกแกง = ", food[" 5. ผัดพริกแกง"],"บาท") 
    print(" 6. พะโล้ = ", food[" 6. พะโล้"],"บาท") 
    print(" 7. กะหล่ำปลีผัดน้ำปลา = ", food[" 7. กะหล่ำปลีผัดน้ำปลา"],"บาท") 
    print(" 8. แกงหนอไม้ = ", food[" 8. แกงหนอไม้"],"บาท") 
    print(" 9. ไก่กระเทียม = ", food[" 9. ไก่กระเทียม"],"บาท") 
    print(" 10. ห่อหมกปลากราย = ", food[" 10. ห่อหมกปลากราย"],"บาท") 
    print(" 11. ทอดมันหมู = ", food[" 11. ทอดมันหมู"],"บาท") 
    print(" 12. ไข่ต้ม = ", food[" 12. ไข่ต้ม"],"บาท") 
    print(" 13. ไข่ดาว = ", food[" 13. ไข่ดาว"],"บาท") 
    print(" 14. ข้าวเปล่า = ", food[" 14. ข้าวเปล่า"],"บาท") 
    print()

    order = "Y"  
    while order.upper() == "Y" : 
        try :
            total = 0  
            listf = 1 
            print("หากต้องการออกจาการสั่งอาหาร เลือกหมายเลข 0")
            while listf > 0 :  
                listf = int(input("เลือกเมนูที่ต้องการ : "))  
                if listf == 1 or listf == 2 or listf == 3 :  
                    total += 20  
                elif listf >= 3 and listf <= 11 :
                    total += 10
                elif listf == 12 or listf == 13 or listf == 14 :  
                    total += 5  
                elif listf == 0 :  
                    break  
                else :  
                    print("ขอโทษค่ะ ไม่มีเมนูอาหารที่คุณต้องการ")  
            print("ยอดรวมราคาอาหารทั้งหมด :",total, "บาท")
            cash = 0 
            while total > 0 :
                cash = int(input("เงินสด : "))
                if cash < total :
                    print("ยอดเงินไม่เพียงพอ กรุณากรอกใหม่อีกครั้ง")
                elif cash >= total :
                    change = cash - total
                    break
            print("เงินทอน", change , "บาท")
            order = input("เพิ่มรายการ(Y/N) : ")

        except ValueError :
            print("กรุณาใส่ตัวเลข")
        except TypeError :
            print("เกิดข้อผิดพลาด โปรดแจ้งเจ้าหน้าที่")   
            break
        except KeyboardInterrupt :
            print("ขอบคุณที่ใช้บริการ")

#สั่งขนมหวาน 
def paythdessert() : 
    print('\n[รายการสั่งขนมหวาน]') 
    food = {" 1. ข้าวเหนียวมะม่วง":45, 
            " 2. บัวลอยน้ำขิง":35, 
            " 3. ครองแครงมะพร้าวอ่อน":35, 
            " 4. กล้วยบวชชี":35, 
            " 5. ลอดช่องกะทิ":35, 
            " 6. ขนมถ้วย":25, 
            " 7. ขนมถั่วแปบ":25, 
            " 8. ขนมชั้นใบเตย":25, 
            " 9. หม้อแกง":25, 
            " 10. สาคูถั่วดำ":25, 
            } 

    print(" 1. ข้าวเหนียวมะม่วง = ", food[" 1. ข้าวเหนียวมะม่วง"],"บาท") 
    print(" 2. บัวลอยน้ำขิง = ", food[" 2. บัวลอยน้ำขิง"],"บาท") 
    print(" 3. ครองแครงมะพร้าวอ่อน = ", food[" 3. ครองแครงมะพร้าวอ่อน"],"บาท") 
    print(" 4. กล้วยบวชชี = ", food[" 4. กล้วยบวชชี"],"บาท") 
    print(" 5. ลอดช่องกะทิ = ", food[" 5. ลอดช่องกะทิ"],"บาท") 
    print(" 6. ขนมถ้วย = ", food[" 6. ขนมถ้วย"],"บาท") 
    print(" 7. ขนมถั่วแปบ = ", food[" 7. ขนมถั่วแปบ"],"บาท") 
    print(" 8. ขนมชั้นใบเตย = ", food[" 8. ขนมชั้นใบเตย"],"บาท") 
    print(" 9. หม้อแกง = ", food[" 9. หม้อแกง"],"บาท") 
    print(" 10. สาคูถั่วดำ = ", food[" 10. สาคูถั่วดำ"],"บาท")
    print()

    order = "Y"  
    while order.upper() == "Y" :  
        try :
            total = 0  
            listd = 1
            print("หากต้องการออกจาการสั่งขนมหวาน เลือกหมายเลข 0")
            while listd > 0 :  
                listd = int(input("เลือกเมนูที่ต้องการ : ")) 
                if listd == 1 :
                    total += 45 
                elif listd == 2 or listd == 3 : 
                    total += 35 
                elif listd == 4 or listd == 5 : 
                    total += 35 
                elif listd >= 6 and listd <= 10 : 
                    total += 25 
                elif listd == 0 :  
                    break  
                else :  
                    print("ขอโทษค่ะ ไม่มีเมนูขนมหวานที่คุณต้องการ")  
            print("ยอดรวมราคาขนมหวานทั้งหมด :",total, "บาท")
            cash = 0 
            while total > 0 :
                cash = int(input("เงินสด : "))
                if cash < total :
                    print("ยอดเงินไม่เพียงพอ กรุณากรอกใหม่อีกครั้ง")
                elif cash >= total :
                    change = cash - total
                    break
            print("เงินทอน", change , "บาท")
            order = input("เพิ่มรายการ(Y/N) : ") 

        except ValueError :
            print("กรุณาใส่ตัวเลข")
        except TypeError :
            print("เกิดข้อผิดพลาด โปรดแจ้งเจ้าหน้าที่")
            break
        except KeyboardInterrupt :
            print("ขอบคุณที่ใช้บริการ")

#เกมส์ 
def gamee(num) : 
    if num == 1 : 
        return 'ค้อน' 
    elif num == 2 : 
        return 'กรรไกร' 
    elif num == 3 : 
        return 'กระดาษ' 
 
def gamie() : 
    print('\n[เกมส์ระหว่างรออาหาร]') 
    print('1 = ',gamee(1)) 
    print('2 = ',gamee(2)) 
    print('3 = ',gamee(3)) 
    a=0 
    a=int(input("กรุณาใส่ตัวเลข : ")) 
    if a > 0 : 
        try :
            ran = randint( 1,3 ) 
            print('Computer',gamee(ran),'/','You',gamee(a)) 
            if ran == a : 
                print('เสมอ') 
            elif ran == 2 and a == 1 : 
                print('ยินดีด้วย คุณชนะ ') 
            elif ran == 1 and a == 2 : 
                print('เสียใจด้วย คุณแพ้') 
            elif ran == 3 and a == 2 : 
                print('ยินดีด้วย คุณชนะ') 
            elif ran == 2 and a == 3 : 
                print('เสียใจด้วย คุณแพ้')         
            elif ran == 1 and a == 3 : 
                print('ยินดีด้วย คุณชนะ')       
            elif ran == 3 or a == 1 : 
                print('เสียใจด้วย คุณแพ้')

        except ValueError :
            print("กรุณาใส่ตัวเลข")
        except TypeError :
            print("เกิดข้อผิดพลาด โปรดแจ้งเจ้าหน้าที่")
            Break
        except KeyboardInterrupt :
            print("ขอบคุณที่ใช้บริการ")                       
 

#ทักทาย 
def meet(name) : 
    print(f'++ ร้านข้าวขยี้ใจ ++\n ยินดีต้อนรับ คุณ {name} ')  
 

#ขอบคุณ 
def bye(name) : 
    print() 
    print(f"ขอบคุณ คุณ {name} ที่แวะมาอุดหนุนค่ะ\n") 
    print("-----ร้าน ข้าวขยี้ใจ-----") 
 

#ชื่อ 
youname = input("ชื่อลูกค้า : ")
print() 
meet(youname) 
 

#วนลูปรับค่า 
while True : 
    mainmenu() 
    do=int(input('เลือกเมนูที่ต้องการใช้งาน : ')) 
    if do == 0 : 
        bye(youname) 
        break 
    elif do == 1 : 
        payfood() 
    elif do == 2 : 
        paythdessert() 
    elif do == 3 : 
        gamie()