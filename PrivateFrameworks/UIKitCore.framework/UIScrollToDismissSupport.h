
@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {
    BSSimpleAssertion * _interfaceAutorotationDisabledAssertion;
    UIScrollView * _scrollViewForTransition;
    UIInputViewSetNotificationInfo * _scrollViewNotificationInfo;
    bool  _scrollViewShowsHorizontalScrollIndicator;
    bool  _scrollViewTransitionFinishing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewTransitionPreviousPoint;
}

- (void).cxx_destruct;
- (id)_infoForMatchMove;
- (void)_updateKeyboardLayoutGuideForScrollTransitionWithSize:(struct CGSize { double x1; double x2; })arg1 hostFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })addPaddingToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (id)cancelNotificationsForMode:(unsigned long long)arg1;
- (void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2;
- (void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)finishScrollViewTransition;
- (void)finishScrollViewTransitionForController:(id)arg1;
- (void)hideScrollViewHorizontalScrollIndicator:(bool)arg1;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)setInterfaceAutorotationDisabled:(bool)arg1 forController:(id)arg2;
- (void)updateScrollViewContentInsetBottom:(double)arg1;

@end
