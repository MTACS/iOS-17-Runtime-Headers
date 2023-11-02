
@protocol SBBrightnessRouteControlling <NSObject>

@required

+ (bool)handlesKeyCommands;

- (float)brightnessLevel;
- (long long)brightnessRouteType;
- (void)cancelBrightnessKeyPressEvent;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { }*)arg1;
- (void)noteValueUpdatesDidEnd;
- (void)noteValueUpdatesWillBegin;
- (bool)setBrightnessLevel:(float)arg1 animated:(bool)arg2;

@end
