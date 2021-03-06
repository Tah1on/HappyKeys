# Macro Key : HappyKeys

Youtube instruction : [Click here](https://youtu.be/Y8Oh4aj96gU)

## materials

------------------------------------ Parts ---------------------------------

- All the parts information : [https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7](https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7)

------------------------------------ Instruction --------------------------

- 3D model file \(for 3d printer\) [https://www.thingiverse.com/thing:2777861](https://www.thingiverse.com/thing:2777861)
- Youtube https://youtu.be/Y8Oh4aj96gU
- Manual [https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7](https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7)
- Schematic [https://github.com/happythingsmaker/HappyKeys/blob/master/README.md](https://github.com/happythingsmaker/HappyKeys/blob/master/README.md)

------------------------------------ About Maker ---------------------------------

- Blog : [http://eunchan.me/](http://eunchan.me/)

---

# Instruction

## Preparing Materials

![](img/1.jpg)

### 1. 3D Printing using 3d Modeling file

* Download 3d model file from Thinggiverse
    * [https://www.thingiverse.com/thing:2777861](https://www.thingiverse.com/thing:2777861)
* Printing
    * \(Alternative: Buy from ETSY from the author\)

### 2. Buying some parts

- All the parts information : [https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7](https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7)

### 3. Preparing some tools

- All the parts information : [https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7](https://eunchan.me/MACRO-KEY-d90c387cbe4245aa813cb100cc48b5e7)


### 4. Assembling

1. Put a switch into upper case
    
    ![](img/2.jpg)

2. Put an Attiny85 board in the upper case
    
    ![](img/3.jpg)

3. Bend legs of switch toward the Attiny85 board
    
    ![](img/4.jpg)

4. Soldering
    
    ![](img/5.jpg)

5. Cover it
    
    ![](img/6.jpg)

6. Use your favorite keycap

    ![](img/7.jpg)
    
    ![](img/8.jpg)

## Programming

1. Download and Install Arduino IDE / Board setting

    * Follow this instruction
    * [http://digistump.com/wiki/digispark/tutorials/connecting](http://digistump.com/wiki/digispark/tutorials/connecting)

2. Download a library for USB keyboard, USB mouse, USB media control simultaneously

    * [https://learn.adafruit.com/trinket-usb-volume-knob/code](https://learn.adafruit.com/trinket-usb-volume-knob/code)

    > Because the library from Digispark is not enough to use. The main issue is we can’t send a keyboard signal and a mouse signal at the same time. Sending only keyboard or mouse signal is good enough for general situation. But sometimes, we need to use both keyboard and mouse together such as gaming situation.

    ![](img/9.jpg)

3. Unzip the file

4. Copy “TrinketHidCombo” folder into your arduino library folder
    
    ![](img/10.jpg)

5. Open your Arduino IDE, copy and paste here's code
    
    * [https://github.com/happythingsmaker/HappyKeys](https://github.com/happythingsmaker/HappyKeys)

6. Upload the program to your board by following this order

    - Unplug the board
    - Click upload button of Arduino IDE
    - Wait until “Running Digispark Uploader … “ shows
    - Plug your board
    - Done.

    > Notice : In order to upload program to Attiny85 board, you don’t need to select any port. Unplug your board.

## Tweak it as your need

1. Facebook / Instagram auto scroller

    ![](img/onekeyScroll.gif)

    Source Code : [https://github.com/happythingsmaker/HappyKeys/tree/master/HappyKeyFacebookScroll](https://github.com/happythingsmaker/HappyKeys/tree/master/HappyKeyFacebookScroll)


2. Emergency Switch

    ![](img/onekeyclose.gif)

    * MUTE and CLOSE a video player immediately just in case \(Emergency Exit\)

    > When I was young, I would play a game often. Every time my mother suddenly enter into my room, I had to close the game immediately, pretended to watching a “Educational Program”. Sometimes I failed. Back then, I wished I could make this switch

    [https://github.com/happythingsmaker/HappyKeys/tree/master/HappyKeyEmergencyExit](https://github.com/happythingsmaker/HappyKeys/tree/master/HappyKeyEmergencyExit)

3. Game macro example
    > My favorite game is starcraft. I am not good at macro control. For particular, manufacturing labor unit \(SCV, Prove or Drone\) or military unit such as tanks, marines. I made a macro key for this purpose. \(note: only for single play\)

    * [Produce labor unit](https://github.com/happythingsmaker/HappyKeys/blob/master/HappyKeyStarcraftLabor/HappyKeyStarcraftLabor.ino)
        
        ![](img/oneKeyProducingSVC.gif)


    * [Produce units from manufacture building](https://github.com/happythingsmaker/HappyKeys/tree/master/HappyKeyStarcraftManufacture)
        
        ![](img/oneKeyProducingTank2.gif)

    * [Typing “cheat keys”](https://github.com/happythingsmaker/HappyKeys/blob/master/HappyKeyStarcraftCheatkey/HappyKeyStarcraftCheatkey.ino)
        
        “Show me the money”, “black sheep wall”, etc …
        ![](img/oneKeyAutoCheatkey.gif)


4. Letter example
    * [Love letter](https://github.com/happythingsmaker/HappyKeys/blob/master/HappyKeyLoveLetter/HappyKeyLoveLetter.ino)
        
        ![](img/oneKeyLoveLetter.gif)


5. Shortcut key
    * [Arduino auto format \(Ctrl + T\)](https://github.com/happythingsmaker/HappyKeys/blob/master/HappyKeyAutoformat/HappyKeyAutoformat.ino)
    * [Save button \(Ctrl + S\)](https://github.com/happythingsmaker/HappyKeys/tree/master/HappyKeySavekey)
