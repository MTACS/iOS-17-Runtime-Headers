
@interface MUFixedHeightAwareViewController : UIViewController {
    UIViewController * _childVC;
    NSLayoutConstraint * _heightConstraint;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_setupChildVC;
- (id)initWithViewController:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;

@end
