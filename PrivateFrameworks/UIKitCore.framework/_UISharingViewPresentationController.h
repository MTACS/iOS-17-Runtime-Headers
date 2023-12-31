
@interface _UISharingViewPresentationController : UIPopoverPresentationController {
    id /* block */  _dismissalHandler;
    bool  _suppressDismissalHandlerUnlessDimmingViewTapped;
}

@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic) bool suppressDismissalHandlerUnlessDimmingViewTapped;

- (void).cxx_destruct;
- (id /* block */)dismissalHandler;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)setSuppressDismissalHandlerUnlessDimmingViewTapped:(bool)arg1;
- (bool)suppressDismissalHandlerUnlessDimmingViewTapped;

@end
