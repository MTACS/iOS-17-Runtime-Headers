
@protocol SBSystemNotesInteractionManagerDataSource <NSObject>

@required

- (SBPIPContentViewLayoutSettings *)currentContentViewLayoutSettingsForInteractionManager:(SBSystemNotesInteractionManager *)arg1;
- (long long)currentPresentationModeForInteractionManager:(SBSystemNotesInteractionManager *)arg1;
- (LSApplicationIdentity *)launchApplicationIdentityForInteractionManager:(SBSystemNotesInteractionManager *)arg1;
- (NSString *)launchBundleIDForInteractionManager:(SBSystemNotesInteractionManager *)arg1;
- (SBPIPContainerViewController *)presentedContainerViewControllerForInteractionManager:(SBSystemNotesInteractionManager *)arg1;
- (UIViewController *)presentedPIPContentViewControllerForInteractionManager:(SBSystemNotesInteractionManager *)arg1;

@end
