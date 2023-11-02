
@protocol SBPIPControllerAdapter <NSObject>

@required

- (long long)contentTypeForPIPController:(SBPIPController *)arg1;
- (bool)isPresentingPictureInPictureForPIPController:(SBPIPController *)arg1 applicationBundleIdentifier:(NSString *)arg2;
- (bool)isStartingStoppingOrCancellingPictureInPictureForPIPController:(SBPIPController *)arg1;
- (bool)isStoppingOrCancellingPictureForPIPController:(SBPIPController *)arg1 applicationWithBundleIdentifier:(NSString *)arg2 scenePersistenceIdentifier:(NSString *)arg3;
- (void)setPIPController:(SBPIPController<SBPIPControllerAdapterContextProviding> *)arg1;
- (bool)shouldStartPictureInPictureForPIPController:(SBPIPController *)arg1 applicationWithProcessIdentifierEnteringBackground:(int)arg2 scenePersistenceIdentifier:(NSString *)arg3;
- (long long)tetheringModeForScenePersistenceIdentifier:(NSString *)arg1;

@optional

- (void)pipController:(SBPIPController *)arg1 didAddContainerViewController:(SBPIPContainerViewController *)arg2;
- (void)pipController:(SBPIPController *)arg1 didCancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg2 scenePersistenceIdentifier:(NSString *)arg3;
- (void)pipController:(void *)arg1 didStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(void *)arg2 scenePersistenceIdentifier:(void *)arg3 animated:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: SBPIPController *, int, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)pipController:(SBPIPController *)arg1 didUpdateEnhancedWindowingModeEnabled:(bool)arg2 windowScene:(SBWindowScene *)arg3;
- (<SBViewMorphAnimatorDataSource> *)pipController:(SBPIPController *)arg1 morphAnimatorDataSourceForMorphAnimatorController:(SBPIPMorphAnimatorController *)arg2;
- (bool)pipController:(SBPIPController *)arg1 willBeginPIPInterruptionForAssertion:(SBPIPInterruptionAssertion *)arg2;
- (void)pipController:(SBPIPController *)arg1 willEndPIPInterruptionForAssertion:(SBPIPInterruptionAssertion *)arg2;
- (void)pipController:(SBPIPController *)arg1 willRemoveContainerViewController:(SBPIPContainerViewController *)arg2;
- (void)pipController:(SBPIPController *)arg1 willRestorePictureInPictureForTestForApplicationWithBundleIdentifier:(NSString *)arg2;
- (void)pipController:(SBPIPController *)arg1 willStartPictureInPictureTestActionForApplicationWithBundleIdentifier:(NSString *)arg2;
- (bool)preventStashAssertionsForPIPController:(SBPIPController *)arg1;
- (void)windowLevelDidChangeForPIPController:(SBPIPController *)arg1;
- (void)windowVisibilityDidChangeForPIPController:(SBPIPController *)arg1;

@end
