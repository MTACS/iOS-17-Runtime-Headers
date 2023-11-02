
@interface MUCardButton : UIView {
    UIButton * _actionButton;
    UIView * _backgroundView;
    bool  _blurBackground;
    bool  _drawBackground;
    UIColor * _foregroundColor;
    bool  _isHovering;
    NSString * _symbolName;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) bool blurBackground;
@property (nonatomic) bool drawBackground;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic, readonly) UIButton *underlyingButton;

- (void).cxx_destruct;
- (void)_setupButton;
- (void)_setupConstraints;
- (void)_setupDefaults;
- (void)_updateButtonAppearance;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)backgroundView;
- (bool)blurBackground;
- (bool)drawBackground;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)menu;
- (void)setBackgroundView:(id)arg1;
- (void)setBlurBackground:(bool)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDrawBackground:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;
- (id)underlyingButton;

@end
