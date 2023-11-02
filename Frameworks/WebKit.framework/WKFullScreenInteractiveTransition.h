
@interface WKFullScreenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchor;
    struct RetainPtr<WKFullscreenAnimationController> { 
        void *m_ptr; 
    }  _animator;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> { 
        void *m_ptr; 
    }  _context;
}

@property (nonatomic, readonly) WKFullscreenAnimationController *animator;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)animator;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)initWithAnimator:(id)arg1 anchor:(struct CGPoint { double x1; double x2; })arg2;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1 withScale:(double)arg2 andTranslation:(struct CGSize { double x1; double x2; })arg3;
- (void)updateInteractiveTransition:(double)arg1 withTranslation:(struct CGSize { double x1; double x2; })arg2;
- (bool)wantsInteractiveStart;

@end
