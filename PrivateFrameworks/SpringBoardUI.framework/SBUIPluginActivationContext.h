
@interface SBUIPluginActivationContext : NSObject {
    int  _activationEvent;
    UIScreen * _screen;
}

@property (nonatomic) int activationEvent;
@property (nonatomic, retain) UIScreen *screen;

- (void).cxx_destruct;
- (int)activationEvent;
- (id)screen;
- (void)setActivationEvent:(int)arg1;
- (void)setScreen:(id)arg1;

@end
