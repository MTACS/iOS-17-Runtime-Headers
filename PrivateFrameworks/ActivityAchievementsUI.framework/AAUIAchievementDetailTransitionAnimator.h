
@interface AAUIAchievementDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id /* block */  _completionBlock;
    UIView * _conversionView;
    <AnimatorDetailViewController> * _detailViewController;
    id /* block */  _didFinishAnimationBlock;
    id /* block */  _didStartAnimationBlock;
    id /* block */  _dismissBlock;
    struct CGPoint { 
        double x; 
        double y; 
    }  _finalBadgeCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _finalBadgeFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _finalBadgeTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _finalPresentingVCTransform;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialBadgeCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBadgeFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialBadgeTransform;
    bool  _isWatch;
    id /* block */  _presentBlock;
    UIViewController * _presentingViewController;
    NSString * _presentingViewControllerWeeTitle;
    bool  _reduceMotion;
    bool  _shouldAdjustForInset;
    bool  _shouldDismissGracefullyForTextSizeChange;
    bool  _shouldPlayFlipInAnimation;
    id /* block */  _willStartAnimationBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) UIView *conversionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <AnimatorDetailViewController> *detailViewController;
@property (nonatomic, copy) id /* block */ didFinishAnimationBlock;
@property (nonatomic, copy) id /* block */ didStartAnimationBlock;
@property (nonatomic, copy) id /* block */ dismissBlock;
@property (nonatomic) struct CGPoint { double x1; double x2; } finalBadgeCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalBadgeFrame;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } finalBadgeTransform;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } finalPresentingVCTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialBadgeCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialBadgeFrame;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } initialBadgeTransform;
@property (nonatomic) bool isWatch;
@property (nonatomic, copy) id /* block */ presentBlock;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) NSString *presentingViewControllerWeeTitle;
@property (nonatomic) bool reduceMotion;
@property (nonatomic) bool shouldAdjustForInset;
@property (nonatomic) bool shouldDismissGracefullyForTextSizeChange;
@property (nonatomic) bool shouldPlayFlipInAnimation;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ willStartAnimationBlock;

- (void).cxx_destruct;
- (void)animateDismissalWithContext:(id)arg1;
- (void)animatePresentationWithContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id /* block */)completionBlock;
- (id)conversionView;
- (id)detailViewController;
- (id /* block */)didFinishAnimationBlock;
- (id /* block */)didStartAnimationBlock;
- (id /* block */)dismissBlock;
- (struct CGPoint { double x1; double x2; })finalBadgeCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalBadgeFrame;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })finalBadgeTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })finalPresentingVCTransform;
- (id)initWithPresentingViewController:(id)arg1 detailViewController:(id)arg2 shouldPlayFlipInAnimation:(bool)arg3 initialBadgeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 conversionView:(id)arg5 didStartAnimationBlock:(id /* block */)arg6 didFinishAnimationBlock:(id /* block */)arg7;
- (id)initWithPresentingViewController:(id)arg1 detailViewController:(id)arg2 shouldPlayFlipInAnimation:(bool)arg3 initialBadgeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 conversionView:(id)arg5 presentAlongsideBlock:(id /* block */)arg6 dismissAlongsideBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (id)initWithPresentingViewController:(id)arg1 detailViewController:(id)arg2 shouldPlayFlipInAnimation:(bool)arg3 initialBadgeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 conversionView:(id)arg5 willStartAnimationBlock:(id /* block */)arg6 presentAlongsideBlock:(id /* block */)arg7 dismissAlongsideBlock:(id /* block */)arg8 completionBlock:(id /* block */)arg9;
- (struct CGPoint { double x1; double x2; })initialBadgeCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialBadgeFrame;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })initialBadgeTransform;
- (bool)isPresentingWithContext:(id)arg1;
- (bool)isWatch;
- (void)prepareForAnimationsWithContext:(id)arg1;
- (id /* block */)presentBlock;
- (id)presentingViewController;
- (id)presentingViewControllerWeeTitle;
- (bool)reduceMotion;
- (void)reducedMotionAnimateDismissalWithContext:(id)arg1;
- (void)reducedMotionAnimatePresentationWithContext:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConversionView:(id)arg1;
- (void)setDetailViewController:(id)arg1;
- (void)setDidFinishAnimationBlock:(id /* block */)arg1;
- (void)setDidStartAnimationBlock:(id /* block */)arg1;
- (void)setDismissBlock:(id /* block */)arg1;
- (void)setFinalBadgeCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFinalBadgeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFinalBadgeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setFinalPresentingVCTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setInitialBadgeCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialBadgeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialBadgeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setIsWatch:(bool)arg1;
- (void)setPresentBlock:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPresentingViewControllerWeeTitle:(id)arg1;
- (void)setReduceMotion:(bool)arg1;
- (void)setShouldAdjustForInset:(bool)arg1;
- (void)setShouldDismissGracefullyForTextSizeChange:(bool)arg1;
- (void)setShouldPlayFlipInAnimation:(bool)arg1;
- (void)setWillStartAnimationBlock:(id /* block */)arg1;
- (bool)shouldAdjustForInset;
- (bool)shouldDismissGracefullyForTextSizeChange;
- (bool)shouldPlayFlipInAnimation;
- (void)textSizeDidChange:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id /* block */)willStartAnimationBlock;

@end
