
@interface SBHintInteractor : NSObject <SBViewControllerInteractiveTransitioning, UIInteractionProgressObserver> {
    struct { 
        struct { 
            double value; 
            bool inclusive; 
        } start; 
        struct { 
            double value; 
            bool inclusive; 
        } end; 
    }  _hintInterval;
    UIInteractionProgress * _interactionProgress;
    <SBViewControllerContextTransitioning> * _transitionContext;
}

@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIInteractionProgress *interactionProgress;
@property (nonatomic, readonly) double maxHintProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_updateInteractionPercentComplete:(double)arg1;
- (void)cancelTransition;
- (void)finishInteractiveTransition;
- (id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (double)maxHintProgress;
- (void)startInteractiveTransition:(id)arg1;
- (bool)supportsRestarting;
- (void)updateTransition:(double)arg1;

@end
