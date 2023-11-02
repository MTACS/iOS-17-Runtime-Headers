
@interface CPUIModernButton : UIButton {
    NSUUID * _identifier;
    bool  _isTouchDown;
    bool  _prefersWhiteInDefaultState;
    bool  _shouldStaySelected;
}

@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) bool isTouchDown;
@property (nonatomic) bool prefersWhiteInDefaultState;
@property (nonatomic) bool shouldStaySelected;

- (void).cxx_destruct;
- (bool)_supportsFocus;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTouchDown;
- (void)layoutSubviews;
- (bool)prefersWhiteInDefaultState;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setIsTouchDown:(bool)arg1;
- (void)setPrefersWhiteInDefaultState:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldStaySelected:(bool)arg1;
- (bool)shouldStaySelected;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;

@end
