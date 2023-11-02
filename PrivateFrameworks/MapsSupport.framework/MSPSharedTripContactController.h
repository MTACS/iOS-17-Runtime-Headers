
@interface MSPSharedTripContactController : NSObject {
    NSOrderedSet * _activeContacts;
    NSOrderedSet * _activeHandles;
    <MSPSharedTripContactControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableSet * _pendingContacts;
    NSUUID * _sessionIdentifier;
    <MSPSharedTripXPCServer> * _sharedTripServer;
}

@property (nonatomic, readonly) NSOrderedSet *activeContactsValues;
@property (nonatomic, readonly) MSPSharingRestorationStorage *archivedSharingStorage;
@property (nonatomic) <MSPSharedTripContactControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_archivedSharingStorage;
- (bool)_contactIsActive:(id)arg1;
- (void)_didStartSharingWithContact:(id)arg1 withCapabilityType:(unsigned long long)arg2 error:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_notifyDelegateContactsChanged;
- (void)_reset;
- (void)_shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_stopAllSharingWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateActiveSharingHandles:(id)arg1;
- (id)activeContactsValues;
- (id)archivedSharingStorage;
- (bool)contactIsActive:(id)arg1;
- (id)delegate;
- (id)initWithSharedTripServer:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)shareWithContactValue:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)stopAllSharingWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingWithContactValue:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateActiveSharingHandles:(id)arg1;

@end
