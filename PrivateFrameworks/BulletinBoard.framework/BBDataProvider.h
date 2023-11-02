
@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity * _identity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) BBDataProviderIdentity *identity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id /* block */)arg3;
- (bool)canClearAllBulletins;
- (bool)canClearBulletinsByDate;
- (bool)canPerformMigration;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)dataProviderDidLoad;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)description;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)identity;
- (bool)initialized;
- (void)invalidate;
- (bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (id)parentSectionIdentifier;
- (void)reloadIdentityWithCompletion:(id /* block */)arg1;
- (id)sectionBundlePath;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setIdentity:(id)arg1;
- (id)sortDescriptors;
- (id)sortKey;
- (void)startWatchdog;
- (bool)syncsBulletinDismissal;
- (id)universalSectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;

@end