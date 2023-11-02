
@interface WKFullscreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    bool  _animatingIn;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _animatingView;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> { 
        void *m_ptr; 
    }  _context;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _finalAnimatingViewTransform;
    double  _finalBackgroundAlpha;
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalMaskViewBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _finalMaskViewCenter;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialAnimatingViewTransform;
    double  _initialBackgroundAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialMaskViewBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialMaskViewCenter;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _maskView;
    UIViewController * _viewController;
}

@property (getter=isAnimatingIn, nonatomic) bool animatingIn;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) <UIViewControllerContextTransitioning> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createViewsForTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)configureInitialAndFinalStatesForTransition:(id)arg1;
- (id)context;
- (void)dealloc;
- (void)end:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (bool)isAnimatingIn;
- (void)setAnimatingIn:(bool)arg1;
- (void)setFinalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewController:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateWithProgress:(double)arg1;
- (void)updateWithProgress:(double)arg1 scale:(double)arg2 translation:(struct CGSize { double x1; double x2; })arg3 anchor:(struct CGPoint { double x1; double x2; })arg4;
- (void)updateWithProgress:(double)arg1 translation:(struct CGSize { double x1; double x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (id)viewController;

@end
