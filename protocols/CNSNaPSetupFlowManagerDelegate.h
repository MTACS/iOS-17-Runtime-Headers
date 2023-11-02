
@protocol CNSNaPSetupFlowManagerDelegate <NSObject>

@optional

- (void)avatarPosterEditorFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateContact:(CNMutableContact *)arg2 withVisualIdentity:(CNVisualIdentity *)arg3;
- (void)avatarPosterEditorFromFlowManagerDidCancel:(CNSNaPSetupFlowManager *)arg1;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateSharingState:(bool)arg2;
- (void)onboardingFromFlowManager:(CNSNaPSetupFlowManager *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;

@end
