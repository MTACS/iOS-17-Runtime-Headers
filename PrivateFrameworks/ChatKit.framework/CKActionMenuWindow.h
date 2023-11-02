
@interface CKActionMenuWindow : UIAutoRotatingWindow {
    CKActionMenuView * _actionMenuView;
    bool  _shouldDismissOnTap;
}

@property (nonatomic, retain) CKActionMenuView *actionMenuView;
@property (nonatomic) bool shouldDismissOnTap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canAffectStatusBarAppearance;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)actionMenuGestureRecognized:(id)arg1;
- (id)actionMenuView;
- (void)dismissActionMenuViewAnimated:(bool)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)presentActionMenuView:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 animated:(bool)arg4;
- (void)setActionMenuView:(id)arg1;
- (void)setShouldDismissOnTap:(bool)arg1;
- (bool)shouldDismissOnTap;

@end
