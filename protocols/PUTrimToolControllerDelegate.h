
@protocol PUTrimToolControllerDelegate <NSObject>

@required

- (void)addCropToolGainMapIfNeeded;
- (NSString *)axDescriptionForFocusDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)didModifyAdjustmentWithLocalizedName:(NSString *)arg1;
- (PELivePortraitBehaviorController *)livePortraitBehaviorController;
- (void)removeCropToolGainMap;
- (void)removeFocusDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)trimToolController:(PUTrimToolController *)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimToolController:(PUTrimToolController *)arg1 didEndInteractivelyEditingElement:(long long)arg2;
- (void)trimToolControllerDidChange:(PUTrimToolController *)arg1 state:(unsigned long long)arg2;
- (void)willModifyAdjustment;

@end
