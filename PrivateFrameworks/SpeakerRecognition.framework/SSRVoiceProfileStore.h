
@interface SSRVoiceProfileStore : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    SSRVoiceProfileStorePrefs * _storePrefs;
    NSMutableArray * _voiceProfileArray;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) SSRVoiceProfileStorePrefs *storePrefs;
@property (retain) NSMutableArray *voiceProfileArray;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_checkIfRetrainingRequiredForProfile:(id)arg1;
- (id)_deleteUserVoiceProfile:(id)arg1;
- (id)_enrolledVoiceProfiles;
- (id)_getTopScoringProfileIdFromScores:(id)arg1;
- (void)_loadVoiceProfiles;
- (void)_logVoiceProfileConfusionWithCleanup:(bool)arg1;
- (void)_retrainLiveOnOnboardedProfilesForLanguage:(id)arg1 withForceRetrain:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)_retrainVoiceProfile:(id)arg1 withContext:(id)arg2;
- (id)_retrainVoiceProfile:(id)arg1 withContext:(id)arg2 withUtterances:(id)arg3;
- (void)_saveTrainedUsers:(id)arg1;
- (void)_synchronizeSiriVoiceProfilesWithAssistant;
- (void)_updateTrainedUsersWithAction:(unsigned long long)arg1 UserVoiceProfile:(id)arg2;
- (void)addImplicitUtterance:(id)arg1 toVoiceProfile:(id)arg2 withAsset:(id)arg3 withTriggerSource:(id)arg4 withAudioInput:(id)arg5 withCompletion:(id /* block */)arg6;
- (void)addUserVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)checkIfVoiceProfile:(id)arg1 needsUpdatedWith:(id)arg2 withCategory:(unsigned long long)arg3;
- (bool)cleanupDuplicatedProfiles;
- (void)cleanupInvalidSiriProfilesFromPersonalDevicesForLanguage:(id)arg1 appDomain:(id)arg2;
- (void)cleanupVoiceProfileModelFilesForLocale:(id)arg1 withAsset:(id)arg2;
- (void)cleanupVoiceProfileStore:(id /* block */)arg1;
- (id)copyAudioFiles:(id)arg1 toProfile:(id)arg2 forModelType:(unsigned long long)arg3;
- (id)deleteUserVoiceProfile:(id)arg1;
- (bool)evaluateImplicitAdditionPolicyWithScores:(id)arg1 forProfile:(id)arg2 withImplicitThreshold:(float)arg3 withDeltaThreshold:(float)arg4;
- (id)initStore;
- (void)isImplicitTrainingRequiredToVoiceProfile:(id)arg1 withAsset:(id)arg2 completion:(id /* block */)arg3;
- (void)logVoiceProfileConfusionWithCleanup:(bool)arg1;
- (void)migrateVoiceProfilesIfNeededWithCompletionBlock:(id /* block */)arg1;
- (id)queue;
- (void)retrainVoiceProfile:(id)arg1 withContext:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setQueue:(id)arg1;
- (void)setStorePrefs:(id)arg1;
- (void)setVoiceProfileArray:(id)arg1;
- (id)storePrefs;
- (id)updateVoiceProfile:(id)arg1 withUserName:(id)arg2;
- (id)userVoiceProfileForVoiceProfileID:(id)arg1;
- (id)userVoiceProfilesForAppDomain:(id)arg1;
- (id)userVoiceProfilesForAppDomain:(id)arg1 forLocale:(id)arg2;
- (id)userVoiceProfilesForLocale:(id)arg1;
- (id)voiceProfileArray;

@end
