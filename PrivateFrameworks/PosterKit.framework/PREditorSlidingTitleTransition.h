
@interface PREditorSlidingTitleTransition : NSObject <PREditorTitleTransitioning> {
    UIViewController * _destinationTitleViewController;
    UIViewController * _sourceTitleViewController;
}

@property (nonatomic, retain) UIViewController *destinationTitleViewController;
@property (nonatomic, retain) UIViewController *sourceTitleViewController;

- (void).cxx_destruct;
- (id)animationKey;
- (void)cancelInteractiveTransition;
- (void)cleanUp;
- (id)destinationTitleViewController;
- (void)finishInteractiveTransition;
- (id)initWithSourceTitleViewController:(id)arg1 destinationTitleViewController:(id)arg2;
- (void)setDestinationTitleViewController:(id)arg1;
- (void)setSourceTitleViewController:(id)arg1;
- (id)sourceTitleViewController;
- (void)updateInteractiveTransition:(double)arg1;

@end
