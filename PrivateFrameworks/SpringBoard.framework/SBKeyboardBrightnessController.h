
@interface SBKeyboardBrightnessController : NSObject <SBBrightnessRouteControlling, SBHIDValueModifyingButtonSetArbiterDelegate> {
    SBHIDValueModifyingButtonSetArbiter * _buttonArbiter;
    <SBBrightnessRouteCoordinating> * _coordinator;
    KeyboardBrightnessClient * _keyboardBrightnessClient;
}

@property (nonatomic, readonly) float brightnessLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)handlesKeyCommands;

- (void).cxx_destruct;
- (float)_currentBrightness;
- (bool)_setBrightnessLevel:(float)arg1 animated:(bool)arg2;
- (float)brightnessLevel;
- (long long)brightnessRouteType;
- (void)buttonSetArbiter:(id)arg1 performActionForButtonPage:(unsigned short)arg2 usage:(unsigned short)arg3;
- (void)buttonSetArbiterDidReset:(id)arg1;
- (void)cancelBrightnessKeyPressEvent;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { }*)arg1;
- (id)initWithCoordinator:(id)arg1;
- (void)noteValueUpdatesDidEnd;
- (void)noteValueUpdatesWillBegin;
- (bool)setBrightnessLevel:(float)arg1 animated:(bool)arg2;

@end
