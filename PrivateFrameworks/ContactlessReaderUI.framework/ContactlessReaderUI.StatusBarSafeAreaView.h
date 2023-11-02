
@interface ContactlessReaderUI.StatusBarSafeAreaView : UIViewController <_UIViewBoundingPathChangeObserver> {
    void boundingRectRequiresUpdate;
    void corner;
    void cornerRadii;
    void idealSize;
    void maxAllowedSize;
    void safeRect;
}

- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;

@end
