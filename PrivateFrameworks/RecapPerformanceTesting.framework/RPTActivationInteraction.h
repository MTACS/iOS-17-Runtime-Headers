
@interface RPTActivationInteraction : NSObject <RPTInteraction> {
    unsigned long long  _action;
    UIWindow * _window;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (unsigned long long)action;
- (struct CGPoint { double x1; double x2; })actionPoint;
- (id)initForAction:(unsigned long long)arg1 window:(id)arg2;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (id)reversedInteraction;
- (void)setAction:(unsigned long long)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
