
@interface GCKeyboardAndMouseEmulatedController : GCController {
    NSDictionary * _buttons;
    bool  _captureAwaitingMouseUp;
    _Atomic bool  _dirtyPointer;
    int  _emulatedControllerMapping;
    bool  _immediateLeftThumbstickMode;
    float  _keyboardFalloffValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPointerLocation;
    NSArray * _leftThumbstickSensitivity;
    LeftThumbstickState * _leftThumbstickState;
    NSObject<OS_dispatch_source> * _leftThumbstickTimer;
    bool  _mainWindowIsKey;
    NSDictionary * _mapping;
    NSObject<OS_dispatch_source> * _mouseIdleTimer;
    float  _mouseReleaseTime;
    unsigned long long  _mouseSensitivity;
    float  _mouseSensitivityHigh;
    float  _mouseSensitivityLow;
    bool  _mouseThumbstick;
    bool  _mouseThumbstickEnabled;
    bool  _pointerHidden;
    bool  _restorePointerLocation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rightThumbstickLock;
    NSObject<OS_dispatch_queue> * _timerQueue;
    float  keyboardRampValue;
}

@property (nonatomic) bool captureAwaitingMouseUp;
@property (nonatomic) int emulatedControllerMapping;
@property (nonatomic) unsigned long long mouseSensitivity;
@property (nonatomic) bool mouseThumbstickEnabled;
@property (nonatomic) bool pointerHidden;

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (bool)captureAwaitingMouseUp;
- (id)elementForInput:(long long)arg1;
- (int)emulatedControllerMapping;
- (long long)eventInputForName:(id)arg1;
- (float)findDeltaFor:(float)arg1;
- (id)identifier;
- (id)initEmulatedControllerWithMapping:(int)arg1;
- (void)insertMappingForInput:(long long)arg1 withKey:(id)arg2 withKeyboard:(id)arg3 toDictionary:(id)arg4;
- (unsigned long long)mouseSensitivity;
- (bool)mouseThumbstickEnabled;
- (id)nameForEventInput:(long long)arg1;
- (void)notifyButtonIfNeeded:(id)arg1 pressed:(bool)arg2 onQueue:(id)arg3;
- (void)notifyElementChangedOnQueue:(id)arg1 queue:(id)arg2;
- (bool)pointerHidden;
- (id)productCategory;
- (id)readButtonsInfoFromLocalFiles;
- (id)readConfigFromLocalFiles;
- (id)readLeftThumbstickSensitivityFromLocalFiles;
- (void)remapControlsWith:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)renameButtonForInput:(long long)arg1 withKey:(id)arg2;
- (void)setCaptureAwaitingMouseUp:(bool)arg1;
- (void)setEmulatedControllerMapping:(int)arg1;
- (void)setMouseSensitivity:(unsigned long long)arg1;
- (void)setMouseThumbstickEnabled:(bool)arg1;
- (void)setPointerHidden:(bool)arg1;
- (void)setupButtons;
- (void)setupConfig;
- (void)setupLeftThumbstickSensitivity;
- (void)startKeyboardEventsListening;
- (void)startLeftThumbstickTimer;
- (void)startMouseIdleTimer;
- (id)tryReadPropertiesFromLocalFiles;
- (void)updateWithKeyKey:(long long)arg1 down:(bool)arg2;
- (id)vendorName;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidResignKey:(id)arg1;

@end
