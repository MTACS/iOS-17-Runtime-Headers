
@interface ScreenTimeSettingsUI.STIntroductionViewControllersFactory : NSObject

+ (bool)isOfTypeAppAndWebsiteActivityViewController:(id)arg1;
+ (bool)isOfTypeCommunicationSafetyViewController:(id)arg1;
+ (bool)isOfTypeDowntimeViewController:(id)arg1;
+ (bool)isOfTypePresetsViewController:(id)arg1;
+ (bool)isOfTypeWelcomeViewController:(id)arg1;
+ (id)makeIntroPresetsViewControllerWithIntroductionModel:(id)arg1 settingsPresetViewModel:(id)arg2 name:(id)arg3 updateExistingSettings:(bool)arg4 continueHandler:(id /* block */)arg5;
+ (id)makeIntroductionAppAndWebsiteActivityViewControllerWithIntroductionModel:(id)arg1 childName:(id)arg2 continueHandler:(id /* block */)arg3;
+ (id)makeIntroductionCommunicationSafetyViewControllerWithIntroductionModel:(id)arg1 childName:(id)arg2 continueHandler:(id /* block */)arg3;
+ (id)makeIntroductionDowntimeViewControllerWithIntroductionModel:(id)arg1 continueHandler:(id /* block */)arg2;
+ (id)makeIntroductionPasscodeViewControllerWithIntroductionModel:(id)arg1 askForRecoveryForAppleID:(bool)arg2 altDSID:(id)arg3 userURI:(id)arg4 isChildOrNotSignedIntoiCloud:(bool)arg5 continueHandler:(id /* block */)arg6;
+ (id)makeIntroductionWelcomeViewControllerWithChildName:(id)arg1 forceParentalControls:(bool)arg2 continueHandler:(id /* block */)arg3 endHandler:(id /* block */)arg4;

- (id)init;

@end
