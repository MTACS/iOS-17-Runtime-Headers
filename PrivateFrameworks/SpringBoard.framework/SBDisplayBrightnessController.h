
@interface SBDisplayBrightnessController : NSObject <SBBrightnessRouteControlling, SBHIDValueModifyingButtonSetArbiterDelegate> {
    SBUIViewFloatSpringProperty * _brightnessProperty;
    struct BKSDisplayBrightnessTransaction { } * _brightnessTransaction;
    SBHIDValueModifyingButtonSetArbiter * _buttonArbiter;
    <SBBrightnessRouteCoordinating> * _coordinator;
}

@property (nonatomic, readonly) float brightnessLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)handlesKeyCommands;

- (void).cxx_destruct;
- (void)_beginBrightnessTransaction;
- (void)_completeBrightnessTransaction;
- (float)_effectiveCurrentTargetBrightness;
- (bool)_isBrightnessPropertyRunning;
- (void)_setBrightnessLevel:(float)arg1 animated:(bool)arg2;
- (float)brightnessLevel;
- (long long)brightnessRouteType;
- (void)buttonSetArbiter:(id)arg1 performActionForButtonPage:(unsigned short)arg2 usage:(unsigned short)arg3;
- (void)buttonSetArbiterDidReset:(id)arg1;
- (void)cancelBrightnessKeyPressEvent;
- (void)dealloc;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { }*)arg1;
- (id)initWithCoordinator:(id)arg1;
- (void)noteValueUpdatesDidEnd;
- (void)noteValueUpdatesWillBegin;
- (bool)setBrightnessLevel:(float)arg1 animated:(bool)arg2;

@end
