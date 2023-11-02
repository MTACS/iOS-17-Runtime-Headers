
@interface DBStatusBarScreenResizeButton : DBStatusBarButton {
    unsigned long long  _transitionControlType;
}

@property (nonatomic) unsigned long long transitionControlType;

- (void)_updateBackgroundColor;
- (void)_updateImage;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionControlType:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)transitionControlType;

@end
