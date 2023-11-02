
@interface HUHomeFeatureOnboardingUtilities : NSObject

+ (id)_checkIdentifyVoicePrerequisitesForHome:(id)arg1;
+ (bool)_checkIdentifyVoicePrerequisitesSimpleForHome:(id)arg1;
+ (id)_fetchSupportedMultiUserLanguagesSynchronously;
+ (void)_initializeSiriLanguageOptionsManagerIfNecessaryForHomePods:(id)arg1;
+ (bool)_userHasSaidYesToShowTVViewingProfilesIn:(id)arg1;
+ (id)analyzeHomeAssistantDevicesForSupportedVoiceRecognitionLanguages:(id)arg1 home:(id)arg2;
+ (id)atLeastOneHomePodHasLanguageSettingsForHomeFuture:(id)arg1;
+ (id)checkSiriForiCloudEnabledPromptingUser:(id)arg1;
+ (id)checkVoiceProfileAvailabiltyForLanguage:(id)arg1;
+ (id)createPersonalIdentityDeviceLanguageMismatchList:(id)arg1;
+ (id)fetchSupportedVoiceRecognitionLanguages;
+ (void)fetchSupportedVoiceRecognitionLanguagesWithCompletion:(id /* block */)arg1;
+ (id)groupedFeaturesForOnboardingFlowKeyPaths:(id)arg1;
+ (bool)hasUserSaidYesToVoiceIdentificationInResults:(id)arg1;
+ (unsigned long long)home:(id)arg1 checkForMultiUserDeviceUpgradeRequirements:(id)arg2;
+ (unsigned long long)home:(id)arg1 checkForOwnerUpgradeRequirementsFromResults:(id)arg2;
+ (id)home:(id)arg1 createMultiUserLanguageToHomePodsMapping:(id)arg2;
+ (bool)home:(id)arg1 hasSomeHomePodsOnSupportedVoiceRecognitionLanguages:(id)arg2;
+ (id)home:(id)arg1 onboardAllFeaturesFromPresentingViewController:(id)arg2 usageOptions:(id)arg3;
+ (id)home:(id)arg1 onboardFeaturesForKeyPaths:(id)arg2 presentingViewController:(id)arg3 usageOptions:(id)arg4;
+ (id)home:(id)arg1 onboardHomeHub2FromPresentingViewController:(id)arg2 devices:(id)arg3 usageOptions:(id)arg4;
+ (id)home:(id)arg1 onboardIdentifyVoiceFromPresentingViewController:(id)arg2 usageOptions:(id)arg3;
+ (id)home:(id)arg1 onboardPersonalRequestsFromPresentingViewController:(id)arg2;
+ (id)home:(id)arg1 processHomeFeatureOnboarderResults:(id)arg2;
+ (bool)home:(id)arg1 voiceRecognitionIsSupportedForCurrentUserOnMediaAccessory:(id)arg2 languageOption:(id)arg3;
+ (void)initialize;
+ (bool)isDeviceUsingASupportedVoiceRecognitionSiriLanguage:(id)arg1 shouldFallbackToBestSupportedLanguage:(bool)arg2;
+ (bool)isVoiceProfileAvailableOnThisDeviceForLanguage:(id)arg1;
+ (void)presentAlertConfirmingTurningOfVoiceRecognitionFrom:(id)arg1;
+ (void)presentAlertConfirmingTurningOffPersonalRequestsFrom:(id)arg1;
+ (id)processLanguageAndMediaProfileInfo:(id)arg1;

@end
