
@interface TeaUI.FullscreenTransitionCoverManager : _TtCs12_SwiftObject {
    void closure;
    void coverView;
    void dimmed;
    void transitioning;
}

- (void)didEndDimming;
- (void)didEndTransition;
- (void)didStartDimming;
- (void)didStartTransition;
- (void)willStartTransition;

@end
