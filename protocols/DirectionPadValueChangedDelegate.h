
@protocol DirectionPadValueChangedDelegate <NSObject>

@required

- (GCControllerButtonInput *)centerButtonEvent:(GCControllerButtonInput *)arg1 pressed:(bool)arg2;
- (GCControllerDirectionPad *)dpad;
- (GCControllerDirectionPad *)dpadDirectionEvent:(GCControllerDirectionPad *)arg1 direction:(unsigned long long)arg2 pressed:(bool)arg3;

@end
