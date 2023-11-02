
@interface SwiftUI.UIKitNavigationController : UINavigationController {
    void backgroundHost;
    void isTransitioningToSize;
    void update;
}

+ (bool)_isFromSwiftUI;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
