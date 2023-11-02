
@interface HMDHomeOwnerCloudShareManager : NSObject <HMDCoreDataCloudChangeListener, HMFLogging> {
    HMDCoreDataCloudTransform * _cloudTransform;
    HMDHomeManager * _homeManager;
    id /* block */  _modelSelectionBlock;
    HMDCoreDataCloudShareService * _shareService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_allExistingSharesForHomeWithModelID:(id)arg1 error:(id*)arg2;
- (id)_canonicalShareFromSharesToSharedHomes:(id)arg1 shareMap:(id)arg2;
- (id)_createShareForHome:(id)arg1;
- (void)_deleteSharedHome:(id)arg1;
- (id)_existingShareForHomeWithModelID:(id)arg1 error:(id*)arg2;
- (id)_existingSharedHomesWithModelID:(id)arg1 error:(id*)arg2;
- (id)_removeShare:(id)arg1 usingShareService:(id)arg2 forHomeWithUUID:(id)arg3;
- (id)_shareForHome:(id)arg1;
- (id)acceptShareInvitation:(id)arg1;
- (id)auditAccessForUsers:(id)arg1 home:(id)arg2;
- (void)didDeleteModelWithID:(id)arg1 tombstone:(id)arg2 context:(id)arg3;
- (id)grantAccessForUser:(id)arg1 home:(id)arg2;
- (id)initWithContainer:(id)arg1 sharedStore:(id)arg2 privateStore:(id)arg3 moc:(id)arg4 cloudTransform:(id)arg5 homeManager:(id)arg6;
- (id)initWithShareService:(id)arg1 homeManager:(id)arg2 cloudTransform:(id)arg3 modelSelectionBlock:(id /* block */)arg4;
- (id)removeSharesForHome:(id)arg1;
- (id)revokeAccessForUser:(id)arg1 home:(id)arg2;

@end
