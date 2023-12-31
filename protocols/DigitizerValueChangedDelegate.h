
@protocol DigitizerValueChangedDelegate <NSObject>

@required

- (void)digitizerTouchEvent:(GCControllerDirectionPad *)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(bool)arg5;
- (void)digitizerTouchUp:(GCControllerDirectionPad *)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(bool)arg3;
- (GCControllerDirectionPad *)dpad;

@end
