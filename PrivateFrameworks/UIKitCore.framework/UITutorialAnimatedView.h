
@interface UITutorialAnimatedView : UIView {
    long long  _appearance;
    CAPackage * _package;
    CALayer * _packageLayer;
}

@property (nonatomic) long long appearance;
@property (nonatomic, retain) CAPackage *package;

- (void).cxx_destruct;
- (void)_setPackage:(id)arg1;
- (long long)appearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (id)package;
- (void)setAppearance:(long long)arg1;
- (void)setPackage:(id)arg1;

@end
