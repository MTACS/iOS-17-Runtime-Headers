
@interface MKLookAroundDismissAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalFrame;
    UIView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldUseSpringWithDampingAnimationStyle;
- (void)animateTransition:(id)arg1;
- (id)initWithSourceView:(id)arg1 finalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)transitionDuration:(id)arg1;

@end
