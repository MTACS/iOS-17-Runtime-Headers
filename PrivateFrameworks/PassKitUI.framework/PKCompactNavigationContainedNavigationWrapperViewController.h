
@interface PKCompactNavigationContainedNavigationWrapperViewController : PKWrapperViewController {
    PKCompactNavigationContainerController * _parentViewController;
    bool  _useParentSafeAreaInsets;
}

@property (nonatomic) bool useParentSafeAreaInsets;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (id)initWithWrappedViewController:(id)arg1 parentViewController:(id)arg2;
- (id)initWithWrappedViewController:(id)arg1 type:(long long)arg2;
- (void)setUseParentSafeAreaInsets:(bool)arg1;
- (bool)useParentSafeAreaInsets;

@end
