
@interface HMPersonManager : NSObject <HFHomeKitObject, HMFMessageReceiver> {
    NSUUID * _UUID;
    _HMContext * _context;
    id /* block */  _fetchClientFactory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ fetchClientFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)UUID;
- (void)addObserver:(id)arg1;
- (void)addOrUpdateFaceCrops:(id)arg1 completion:(id /* block */)arg2;
- (void)addOrUpdateFaceprints:(id)arg1 completion:(id /* block */)arg2;
- (void)addOrUpdatePersons:(id)arg1 completion:(id /* block */)arg2;
- (void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 forSource:(long long)arg3 completion:(id /* block */)arg4;
- (void)configure;
- (id)context;
- (void)dealloc;
- (id)description;
- (void)disassociateFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)arg1;
- (void)fetchAllPersonsWithCompletion:(id /* block */)arg1;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)arg1;
- (id /* block */)fetchClientFactory;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (void)handleDidChangePersonDataMessage:(id)arg1;
- (id)initWithContext:(id)arg1 UUID:(id)arg2 notificationCenter:(id)arg3;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)observers;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)removePersonsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)setFetchClientFactory:(id /* block */)arg1;
- (void)subscribe;
- (void)unsubscribe;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2;
- (id)hf_faceCropsForPersonWithIdentifier:(id)arg1;
- (id)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:(id)arg1;
- (id)hf_linkFromPerson:(id)arg1 toPerson:(id)arg2 toPersonManagerUUID:(id)arg3;
- (id)hf_namePerson:(id)arg1 name:(id)arg2;
- (id)hf_personWithIdentifier:(id)arg1;
- (id)hf_reassociateFaceCropsFromPersonWithUUID:(id)arg1 toPersonWithUUID:(id)arg2 removePerson:(bool)arg3;
- (id)hf_removeFaceCropsWithUUIDs:(id)arg1;
- (id)hf_removePersonWithUUID:(id)arg1;
- (id)uniqueIdentifier;

@end
