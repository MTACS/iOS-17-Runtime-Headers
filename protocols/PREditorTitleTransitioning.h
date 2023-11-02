
@protocol PREditorTitleTransitioning <CSProminentDisplayTransitioning>

@required

- (void)cancelInteractiveTransition;
- (UIViewController *)destinationTitleViewController;
- (void)finishInteractiveTransition;
- (void)setDestinationTitleViewController:(UIViewController *)arg1;
- (void)setSourceTitleViewController:(UIViewController *)arg1;
- (UIViewController *)sourceTitleViewController;
- (void)updateInteractiveTransition:(double)arg1;

@end
