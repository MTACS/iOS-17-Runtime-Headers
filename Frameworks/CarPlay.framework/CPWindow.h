
@interface CPWindow : UIWindow {
    NSLayoutConstraint * _bottomConstraint;
    NSLayoutConstraint * _leftConstraint;
    UILayoutGuide * _mapButtonSafeAreaLayoutGuide;
    NSLayoutConstraint * _rightConstraint;
    CPTemplateApplicationScene * _templateApplicationScene;
    NSLayoutConstraint * _topConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *leftConstraint;
@property (nonatomic, readonly) UILayoutGuide *mapButtonSafeAreaLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *rightConstraint;
@property (nonatomic) CPTemplateApplicationScene *templateApplicationScene;
@property (nonatomic, retain) NSLayoutConstraint *topConstraint;
@property (nonatomic) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (id)bottomConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 templateScene:(id)arg2;
- (id)leftConstraint;
- (id)mapButtonSafeAreaLayoutGuide;
- (id)rightConstraint;
- (void)setBottomConstraint:(id)arg1;
- (void)setLeftConstraint:(id)arg1;
- (void)setRightConstraint:(id)arg1;
- (void)setTemplateApplicationScene:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (id)templateApplicationScene;
- (id)topConstraint;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
