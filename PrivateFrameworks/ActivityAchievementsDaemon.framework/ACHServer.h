
@interface ACHServer : NSObject <ACHServerInterface, _HKXPCExportable> {
    <ACHAchievementStoring> * _achievementStore;
    NSObject<ACHAwardingScheduler> * _awardingScheduler;
    HDXPCClient * _client;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    ACHMobileAssetProvider * _mobileAssetProvider;
    ACHMonthlyChallengeTemplateSource * _monthlyChallengeTemplateSource;
    HDProfile * _profile;
    ACHTemplateSourceScheduler * _templateSourceScheduler;
    ACHTemplateStore * _templateStore;
}

@property (nonatomic, retain) <ACHAchievementStoring> *achievementStore;
@property (nonatomic, retain) NSObject<ACHAwardingScheduler> *awardingScheduler;
@property (nonatomic, retain) HDXPCClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACHMobileAssetProvider *mobileAssetProvider;
@property (nonatomic, retain) ACHMonthlyChallengeTemplateSource *monthlyChallengeTemplateSource;
@property (nonatomic, retain) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, retain) ACHTemplateSourceScheduler *templateSourceScheduler;
@property (nonatomic, retain) ACHTemplateStore *templateStore;

+ (id)serverWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 mobileAssetProvider:(id)arg6 templateSourceScheduler:(id)arg7 monthlyChallengeTemplateSource:(id)arg8 error:(id*)arg9;
+ (id)serverWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 awardingScheduler:(id)arg3 achievementStore:(id)arg4 mobileAssetProvider:(id)arg5 templateSourceScheduler:(id)arg6 monthlyChallengeTemplateSource:(id)arg7;

- (void).cxx_destruct;
- (id)achievementStore;
- (id)awardingScheduler;
- (id)client;
- (void)connectionInvalidated;
- (id)earnedInstanceStore;
- (id)exportedInterface;
- (id)initWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 mobileAssetProvider:(id)arg6 templateSourceScheduler:(id)arg7 monthlyChallengeTemplateSource:(id)arg8;
- (id)mobileAssetProvider;
- (id)monthlyChallengeTemplateSource;
- (id)profile;
- (id)remoteInterface;
- (void)remote_addEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addTemplate:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_availableMobileAssetsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_forceAwardingSchedulerWithCompletion:(id /* block */)arg1;
- (void)remote_monthlyChallengeForDate:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)remote_removeAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)remote_removeEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeTemplate:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_runMonthlyChallengesWithCompletion:(id /* block */)arg1;
- (void)remote_setActivityChallengeAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_templateForMonthlyChallengeType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setAchievementStore:(id)arg1;
- (void)setAwardingScheduler:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setMobileAssetProvider:(id)arg1;
- (void)setMonthlyChallengeTemplateSource:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setTemplateSourceScheduler:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (id)templateSourceScheduler;
- (id)templateStore;

@end
