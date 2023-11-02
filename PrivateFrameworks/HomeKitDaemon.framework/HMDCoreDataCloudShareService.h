
@interface HMDCoreDataCloudShareService : NSObject <HMFLogging> {
    CKContainer * _ckContainer;
    NSPersistentCloudKitContainer * _container;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDManagedObjectContext * _managedObjectContext;
    NSPersistentStore * _privateStore;
    NSPersistentStore * _sharedStore;
}

@property (readonly) NSPersistentCloudKitContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDManagedObjectContext *managedObjectContext;
@property (readonly) NSPersistentStore *privateStore;
@property (readonly) NSPersistentStore *sharedStore;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_acceptShareInvitation:(id)arg1;
- (void)_acceptShareInvitationsFromMetadata:(id)arg1 intoPersistentStore:(id)arg2 completion:(id /* block */)arg3;
- (id)_addParticipant:(id)arg1 share:(id)arg2;
- (id)_auditUsersForRevokedAccessWithAccountHandles:(id)arg1 share:(id)arg2;
- (id)_fetchParticipantForAccountHandle:(id)arg1;
- (id)_fetchParticipantsForAccountHandles:(id)arg1;
- (id)_fetchShareMetadataForInvitation:(id)arg1;
- (void)_fetchShareMetadataForInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchShareWithRecordID:(id)arg1 completion:(id /* block */)arg2;
- (id)_grantAccessForUserWithAccountHandle:(id)arg1 share:(id)arg2;
- (id)_pushUpdatedShare:(id)arg1;
- (void)_pushUpdatedShare:(id)arg1 completion:(id /* block */)arg2;
- (id)_removeParticipant:(id)arg1 share:(id)arg2;
- (id)_revokeAccessForUserWithAccountHandle:(id)arg1 share:(id)arg2;
- (id)acceptShareInvitation:(id)arg1;
- (id)acceptShareInvitationsFromMetadata:(id)arg1 intoPersistentStore:(id)arg2;
- (id)auditUsersForRevokedAccessWithAccountHandles:(id)arg1 share:(id)arg2;
- (id)ckContainer;
- (id)container;
- (id)fetchShareWithRecordID:(id)arg1;
- (id)grantAccessForUserWithAccountHandle:(id)arg1 share:(id)arg2;
- (id)initWithContainer:(id)arg1 sharedStore:(id)arg2 privateStore:(id)arg3 moc:(id)arg4;
- (id)managedObjectContext;
- (id)privateStore;
- (id)revokeAccessForUserWithAccountHandle:(id)arg1 share:(id)arg2;
- (id)sharedStore;

@end
