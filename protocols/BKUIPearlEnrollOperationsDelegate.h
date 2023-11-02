
@protocol BKUIPearlEnrollOperationsDelegate <NSObject>

@required

- (void)_endEnrollFlowWithError:(NSError *)arg1;
- (void)_updateDebugLabel;
- (BKUIPearlEnrollAudioManager *)audioManager;
- (void)clearPendingStateWorkItems;
- (void)endEnrollFlowWithError:(NSError *)arg1;
- (void)enrollOperation:(BKEnrollPearlOperation *)arg1 finishedWithIdentity:(BKIdentity *)arg2 animateImmediately:(bool)arg3;
- (BKUIPearlEnrollView *)getEnrollview;
- (void)invalidateSubstateTimer;
- (void)pearlEnrollControllerCompleted;
- (double)percentOfPillsCompleted;
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (int)previousState;
- (void)refreshEscapeHatchForCurrentState;
- (void)removeGlassesUI;
- (void)setProgressString:(NSString *)arg1;
- (void)setState:(int)arg1 animated:(bool)arg2;
- (void)setState:(int)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)setStatus:(NSString *)arg1;
- (void)setSubstate:(int)arg1;
- (void)setSubstate:(int)arg1 animated:(bool)arg2 afterDelay:(double)arg3;
- (void)showMaskAndGlassesTutorialWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (int)state;
- (int)substate;
- (void)updateButtonsVisibility;
- (UIView *)view;

@end
