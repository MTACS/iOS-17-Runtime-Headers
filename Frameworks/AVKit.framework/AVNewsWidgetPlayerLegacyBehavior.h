
@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior {
    <AVPlayerViewControllerContentTransitioning_NewsOnly> * _legacyDelegate;
}

@property (nonatomic) <AVPlayerViewControllerContentTransitioning_NewsOnly> *legacyDelegate;

- (void).cxx_destruct;
- (void)didCancelContentTransition;
- (void)didCompleteContentTransition;
- (void)didUpdateContentTransitionProgress:(double)arg1;
- (id)legacyDelegate;
- (id)playerForContentTransitionType:(long long)arg1;
- (void)setLegacyDelegate:(id)arg1;
- (void)willBeginContentTransition;
- (void)willCancelContentTransition;
- (void)willCompleteContentTransition;

@end
