
@interface DBInCallWidgetAppIconButton : UIButton {
    NSString * _applicationBundleIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
