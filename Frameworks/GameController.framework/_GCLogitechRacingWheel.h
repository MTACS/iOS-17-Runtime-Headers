
@interface _GCLogitechRacingWheel : GCRacingWheel <_GCGamepadEventSource> {
    struct __IOHIDDevice { } * _device;
    NSArray * _eventObservers;
    bool  _isOpen;
    int  _mode;
    NSObject<OS_dispatch_queue> * _queue;
    union { 
        struct LogitechWheelG920Report { 
            unsigned char reportID; 
            unsigned int dpad : 4; 
            unsigned int buttonA : 1; 
            unsigned int buttonB : 1; 
            unsigned int buttonX : 1; 
            unsigned int buttonY : 1; 
            unsigned int rightPaddle : 1; 
            unsigned int leftPaddle : 1; 
            unsigned int buttonMenu : 1; 
            unsigned int buttonView : 1; 
            unsigned int buttonRSB : 1; 
            unsigned int buttonLSB : 1; 
            unsigned int buttonLogo : 1; 
            unsigned int shifter : 7; 
            unsigned int unused : 2; 
            unsigned short wheel; 
            unsigned int pedalGas : 8; 
            unsigned int pedalBrake : 8; 
            unsigned int pedalClutch : 8; 
            unsigned int vendor1 : 1; 
            unsigned int vendor2 : 1; 
            unsigned int vendor3 : 1; 
            unsigned int unused2 : 5; 
        } g920; 
        struct LogitechWheelG29ClassicReport { 
            unsigned int dpad : 4; 
            unsigned int buttonX : 1; 
            unsigned int buttonSquare : 1; 
            unsigned int buttonCircle : 1; 
            unsigned int buttonTriangle : 1; 
            unsigned int rightPaddle : 1; 
            unsigned int leftPaddle : 1; 
            unsigned int buttonR2 : 1; 
            unsigned int buttonL2 : 1; 
            unsigned int buttonShare : 1; 
            unsigned int buttonOptions : 1; 
            unsigned int buttonR3 : 1; 
            unsigned int buttonL3 : 1; 
            unsigned int shifter : 7; 
            unsigned int buttonPlus : 1; 
            unsigned int buttonMinus : 1; 
            unsigned int dialRight : 1; 
            unsigned int dialLeft : 1; 
            unsigned int buttonReturn : 1; 
            unsigned int buttonLogo : 1; 
            unsigned int unused : 3; 
            unsigned short wheel; 
            unsigned int pedalGas : 8; 
            unsigned int pedalBrake : 8; 
            unsigned int pedalClutch : 8; 
            unsigned char vendor1[2]; 
            unsigned char vendor2; 
        } g29Classic; 
        unsigned char raw[64]; 
    }  _report;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)acquireDeviceWithError:(id*)arg1;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1;
- (bool)isAcquired;
- (id)observeGamepadEvents:(id /* block */)arg1;
- (void)relinquishDevice;

@end
