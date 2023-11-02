
@interface _UISheetAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerAnimatedTransitioning_Internal> {
    NSMutableArray * _allNoninteractiveAnimations;
    NSMutableArray * _allNoninteractiveCompletions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _attachmentPoint;
    id /* block */  _defaultSourceFrameProvider;
    UIView * _forwardView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _forwardViewFullFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _interactiveFrame;
    bool  _isInInitialLayout;
    bool  _isReversed;
    _UISheetPresentationMetrics * _metrics;
    UIViewPropertyAnimator * _propertyAnimator;
    bool  _scalesDownForwardView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceFrame;
    UIView * _sourceView;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, retain) NSMutableArray *allNoninteractiveAnimations;
@property (nonatomic, retain) NSMutableArray *allNoninteractiveCompletions;
@property (nonatomic) struct CGPoint { double x1; double x2; } attachmentPoint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ defaultSourceFrameProvider;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *forwardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } forwardViewFullFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } interactiveFrame;
@property (nonatomic, readonly) bool isForward;
@property (nonatomic) bool isInInitialLayout;
@property (nonatomic) bool isReversed;
@property (nonatomic, retain) _UISheetPresentationMetrics *metrics;
@property (nonatomic, copy) id /* block */ noninteractiveAnimations;
@property (nonatomic, copy) id /* block */ noninteractiveCompletion;
@property (nonatomic, retain) UIViewPropertyAnimator *propertyAnimator;
@property (nonatomic) bool scalesDownForwardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceFrame;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) <UIViewControllerContextTransitioning> *transitionContext;

- (void).cxx_destruct;
- (bool)_allowKeyboardToAnimateAlongside:(id)arg1;
- (void)addNoninteractiveAnimations:(id /* block */)arg1;
- (void)addNoninteractiveCompletion:(id /* block */)arg1;
- (id)allNoninteractiveAnimations;
- (id)allNoninteractiveCompletions;
- (void)animateTransition:(id)arg1;
- (struct CGPoint { double x1; double x2; })attachmentPoint;
- (id /* block */)defaultSourceFrameProvider;
- (id)forwardView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })forwardViewFullFrame;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveFrame;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (bool)isForward;
- (bool)isInInitialLayout;
- (bool)isReversed;
- (void)layoutTransitionViews;
- (id)metrics;
- (id /* block */)noninteractiveAnimations;
- (id /* block */)noninteractiveCompletion;
- (id)propertyAnimator;
- (void)runNoninteractiveAnimationsIfPossible;
- (bool)scalesDownForwardView;
- (void)setAllNoninteractiveAnimations:(id)arg1;
- (void)setAllNoninteractiveCompletions:(id)arg1;
- (void)setAttachmentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDefaultSourceFrameProvider:(id /* block */)arg1;
- (void)setForwardView:(id)arg1;
- (void)setForwardViewFullFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInteractiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsInInitialLayout:(bool)arg1;
- (void)setIsReversed:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setNoninteractiveAnimations:(id /* block */)arg1;
- (void)setNoninteractiveCompletion:(id /* block */)arg1;
- (void)setPropertyAnimator:(id)arg1;
- (void)setScalesDownForwardView:(bool)arg1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceFrame;
- (id)sourceView;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;

@end
