
@interface LACUILockView : UIView {
    CAShapeLayer * _body;
    UIColor * _color;
    LACUIPackagedView * _packagedView;
    CAShapeLayer * _shackle;
    long long  _state;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_setup;
- (id)color;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
