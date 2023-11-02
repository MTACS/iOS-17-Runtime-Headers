
@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endingNewBackButtonFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endingNewTitleViewFrame;
    double  _titleTransitionAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleTransitionDistance;
}

- (void)_animateBackgroundView;
- (void)_animateContentView;
- (void)_animateLargeTitleView;
- (void)_animateScaleTransition;
- (void)_animateSearchBar;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;
- (void)_prepareBackgroundView;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_prepareScaleTransition;
- (void)_prepareSearchBar;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (int)transition;
- (id)viewUsingEaseInCurve;

@end
