
@interface ASAchievementManager : NSObject <ASActivitySharingManagerReadyObserver, ASCompetitionAwardingSourceDataProvider, ASCompetitionTemplateSourceDataProvider, ASFriendListObserver> {
    ASCompetitionAwardingSource * _competitionAwardingSource;
    ASCompetitionTemplateSource * _competitionTemplateSource;
    ASFriendListManager * _friendListManager;
    bool  _isWatch;
    bool  _useNewAchievementsSystem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *friends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeUnusedTemplatesForFriendWithUUID:(id)arg1 templateStore:(id)arg2;
- (void)_requestAwardsUpdateIfNecessary;
- (void)activitySharingManagerReady:(id)arg1;
- (void)friendListDidLoadCompetitions;
- (void)friendListDidUpdate:(id)arg1;
- (id)friendWithUUID:(id)arg1;
- (id)friends;
- (id)initWithIsWatch:(bool)arg1;
- (void)removeAllTemplates;
- (void)removeAllUnusedTemplates;
- (void)removeUnusedTemplatesForFriendWithUUID:(id)arg1;
- (void)requestEarnedInstanceUpdate;
- (void)requestTemplateUpdate;

@end
