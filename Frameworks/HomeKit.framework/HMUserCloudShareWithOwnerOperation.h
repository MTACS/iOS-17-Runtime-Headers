
@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging> {
    bool  _allowWriteAccess;
    id /* block */  _analyticsEventSender;
    id /* block */  _completion;
    CKContainer * _container;
    HMUser * _currentUser;
    NSObject<OS_os_log> * _logger;
    NSUUID * _operationID;
    HMUser * _ownerUser;
    CKShare * _share;
}

@property (nonatomic, readonly) bool allowWriteAccess;
@property (readonly) id /* block */ analyticsEventSender;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) HMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *operationID;
@property (nonatomic, readonly) HMUser *ownerUser;
@property (nonatomic, retain) CKShare *share;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)allowWriteAccess;
- (id /* block */)analyticsEventSender;
- (id /* block */)completion;
- (id)container;
- (id)currentUser;
- (void)fetchParticipantForLookupInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 allowWriteAccess:(bool)arg4 currentUser:(id)arg5;
- (id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 allowWriteAccess:(bool)arg4 currentUser:(id)arg5 analyticsEventSender:(id /* block */)arg6;
- (id)logIdentifier;
- (void)main;
- (id)operationID;
- (id)ownerUser;
- (void)removeOwnerAsParticipant:(id)arg1 completion:(id /* block */)arg2;
- (void)saveShareAndObtainSavedOwner:(id)arg1 completion:(id /* block */)arg2;
- (void)sendShareToOwner:(id)arg1 from:(id)arg2 savedOwnerAsParticipant:(id)arg3 share:(id)arg4 completion:(id /* block */)arg5;
- (void)setCompletion:(id /* block */)arg1;
- (void)setShare:(id)arg1;
- (id)share;

@end
