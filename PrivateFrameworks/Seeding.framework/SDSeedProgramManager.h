
@interface SDSeedProgramManager : NSObject

+ (bool)_canEnrollInBetaSoftware;
+ (void)_clearAudience;
+ (void)_clearSeedCatalog;
+ (void)_createFeedbackAssistantSymlink;
+ (bool)_currentAudienceIsSeed;
+ (bool)_currentCatalogIsSeed;
+ (long long)_currentSeedProgramFromDisk;
+ (long long)_legacyCurrentSeedProgram;
+ (id)_loadSeedAudiencesFromPlist;
+ (id)_loadSeedCatalogsFromPlist;
+ (bool)_removeSeedEnrollmentCookie;
+ (long long)_seedProgramForString:(id)arg1;
+ (bool)_setAudienceForSeedProgram:(long long)arg1;
+ (bool)_setCatalogForSeedProgram:(long long)arg1;
+ (void)_setHelpFeedbackMenuEnabled:(bool)arg1;
+ (void)_setSeedOptOutUIDisabled:(bool)arg1;
+ (void)_setSeedProgramPref:(long long)arg1;
+ (bool)canFileFeedback;
+ (id)currentEnrollmentMetadata;
+ (long long)currentSeedProgram;
+ (long long)currentSeedProgramForDiskAtPath:(id)arg1;
+ (bool)enrollInSeedProgram:(long long)arg1;
+ (bool)enrollInSeedProgram:(long long)arg1 deletingSystemURL:(bool)arg2;
+ (void)enrollInSeedProgramNamed:(id)arg1 withAssetAudience:(id)arg2 completion:(id /* block */)arg3;
+ (bool)fixUpAssetAudience;
+ (bool)isEnrolledInSeedProgram;
+ (id)stringForSeedProgram:(long long)arg1;
+ (bool)unenrollFromSeedProgram;

@end
