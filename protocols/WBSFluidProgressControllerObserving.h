
@protocol WBSFluidProgressControllerObserving <NSObject>

@required

- (void)fluidProgressController:(WBSFluidProgressController *)arg1 setProgressToCurrentPosition:(WBSFluidProgressState *)arg2;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 startFluidProgressBar:(WBSFluidProgressState *)arg2 animateFillFade:(bool)arg3;
- (void)fluidProgressController:(void *)arg1 updateFluidProgressBar:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: WBSFluidProgressController *, WBSFluidProgressState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)fluidProgressControllerFinishProgressBar:(WBSFluidProgressController *)arg1 animateFillFade:(bool)arg2;

@optional

- (void)fluidProgressController:(WBSFluidProgressController *)arg1 suppressProgressAnimation:(bool)arg2 duringFluidProgressState:(WBSFluidProgressState *)arg3 animated:(bool)arg4;

@end
