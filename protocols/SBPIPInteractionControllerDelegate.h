
@protocol SBPIPInteractionControllerDelegate <NSObject>

@required

- (void)interactionController:(SBPIPInteractionController *)arg1 didSettleOnStashState:(bool)arg2;
- (void)interactionController:(SBPIPInteractionController *)arg1 didUpdateStashProgress:(double)arg2;
- (void)interactionController:(SBPIPInteractionController *)arg1 wantsStashTabHidden:(bool)arg2 left:(bool)arg3;
- (void)interactionControllerDidBeginSizeChange:(SBPIPInteractionController *)arg1 behavior:(int)arg2;
- (void)interactionControllerDidEndAllInteractions:(SBPIPInteractionController *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)interactionControllerDidEndSizeChange:(SBPIPInteractionController *)arg1;
- (void)setNeedsLayoutForInteractionController:(void *)arg1 traits:(void *)arg2 withReason:(void *)arg3 behavior:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: SBPIPInteractionController *, unsigned long long, unsigned long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*

@optional

- (void)interactionControllerDidBeginEdgeResizing:(SBPIPInteractionController *)arg1;
- (void)interactionControllerDidBeginInteraction:(SBPIPInteractionController *)arg1 forGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)interactionControllerDidEndEdgeResizing:(SBPIPInteractionController *)arg1;
- (void)interactionControllerDidUpdateEdgeInsets:(SBPIPInteractionController *)arg1;
- (void)interactionControllerPanGestureDidEnd:(SBPIPInteractionController *)arg1;

@end
