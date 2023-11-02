
@protocol SHSheetActivityPerformerPresentationInterface <NSObject>

@required

- (void)activityPerformCleanUpPresentation:(SHSheetActivityPerformer *)arg1;
- (void)activityPerformer:(void *)arg1 preparePresentationWithContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SHSheetActivityPerformer *, SHSheetActivityPresentationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (bool)activityPerformer:(SHSheetActivityPerformer *)arg1 presentPopoverContentViewController:(UIViewController *)arg2;
- (void)activityPerformer:(void *)arg1 presentViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SHSheetActivityPerformer *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)activityPerformer:(void *)arg1 startListeningForDismissalTransitionWithCompletion:(void *)arg2; // needs 2 arg types, found 6: SHSheetActivityPerformer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)activityPerformerCanPresent:(SHSheetActivityPerformer *)arg1;
- (void)activityPerformerStopListeningForDismissalTransition:(SHSheetActivityPerformer *)arg1;

@end
