
@protocol REUISiriActionsPerformerDelegate <NSObject>

@required

- (void)siriActionsPerformer:(REUISiriActionsPerformer *)arg1 didFailWithError:(NSError *)arg2;
- (bool)siriActionsPerformer:(void *)arg1 wantsToDismissViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: REUISiriActionsPerformer *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)siriActionsPerformer:(REUISiriActionsPerformer *)arg1 wantsToPresentViewController:(UIViewController *)arg2;
- (void)siriActionsPerformerDidSucceed:(REUISiriActionsPerformer *)arg1;
- (UIImage *)siriActionsPerformerWantsAlertBackgroundImage:(REUISiriActionsPerformer *)arg1;
- (UIView *)siriActionsPerformerWantsBackgroundViewToBlur:(REUISiriActionsPerformer *)arg1;
- (void)siriActionsPerformerWantsToSuppressDismissal:(REUISiriActionsPerformer *)arg1;

@end
