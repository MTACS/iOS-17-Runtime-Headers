
@interface PREditorTitleViewControllerCSTransitionWrapper : NSObject <PREditorTitleViewControllerTransitioning> {
    <CSProminentDisplayTransitioning> * _csTransitioning;
}

@property (nonatomic, retain) <CSProminentDisplayTransitioning> *csTransitioning;

- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (id)csTransitioning;
- (void)finishInteractiveTransition;
- (id)initWithCSTransitioning:(id)arg1;
- (void)setCsTransitioning:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1;

@end
