
@protocol GCNamedProfile <NSObject>

@required

- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (GCMotion *)_motion;
- (id)initWithController:(GCController *)arg1;
- (NSString *)name;
- (NSString *)productCategory;
- (void)setController:(GCController *)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)set_motion:(GCMotion *)arg1;
- (id /* block */)valueChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, GCControllerElement *, void*, id, SEL

@optional

- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (unsigned int)sampleRate;
- (void)setButton:(GCControllerButtonInput *)arg1 pressed:(bool)arg2;
- (void)setButton:(GCControllerButtonInput *)arg1 value:(double)arg2;
- (void)setDpad:(GCControllerDirectionPad *)arg1 x:(double)arg2 y:(double)arg3;

@end
