
@interface BFFFinishSetupModalNavigationController : BFFNavigationController {
    bool  _isPad;
}

@property (nonatomic) bool isPad;

- (id)childViewControllerForStatusBarStyle;
- (bool)isModalInPresentation;
- (bool)isPad;
- (long long)modalPresentationStyle;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setIsPad:(bool)arg1;

@end
