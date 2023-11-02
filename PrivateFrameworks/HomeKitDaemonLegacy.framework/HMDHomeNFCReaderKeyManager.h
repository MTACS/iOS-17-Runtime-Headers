
@interface HMDHomeNFCReaderKeyManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDHomeWalletKeyAccessoryManager * _accessoryManager;
    NAFuture * _createKeychainItemFuture;
    <HMDHomeWalletDataSource> * _dataSource;
    HMDHome * _home;
    NSMutableSet * _keyIdentifiersAlreadyUpdated;
    <HAPSystemKeychainStore> * _keychainStore;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHomeWalletKeyAccessoryManager *accessoryManager;
@property (retain) NAFuture *createKeychainItemFuture;
@property (readonly) <HMDHomeWalletDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (retain) NSMutableSet *keyIdentifiersAlreadyUpdated;
@property (readonly) <HAPSystemKeychainStore> *keychainStore;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMDDevice *primaryResidentDevice;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryManager;
- (void)configureWithHome:(id)arg1;
- (id)createKeychainItemFuture;
- (id)createNFCReaderKeyModelWithHome:(id)arg1 nfcReaderKey:(id)arg2;
- (void)createReaderKeyKeychainItemForHome:(id)arg1 flow:(id)arg2 completion:(id /* block */)arg3;
- (id)dataSource;
- (void)deleteKeychainItemForNFCReaderKeyWithFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteKeychainItemForNFCReaderKey_flow:(id)arg1;
- (void)fetchOrCreateReaderKeyWithRequiresPrivateKey:(bool)arg1 flow:(id)arg2 completion:(id /* block */)arg3;
- (void)handleCreateKeychainItemForReaderKeyMessage:(id)arg1;
- (void)handleDeleteKeychainItemForNFCReaderKey:(id)arg1;
- (void)handleFetchOrCreateReaderKeyMessage:(id)arg1;
- (void)handleHomeDidUpdateNFCReaderKeyNotification:(id)arg1;
- (void)handleHomeRemovedNotification:(id)arg1;
- (void)handleSystemKeychainStoreUpdatedNotification:(id)arg1;
- (id)home;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 keychainStore:(id)arg3 dataSource:(id)arg4;
- (id)keyIdentifiersAlreadyUpdated;
- (id)keychainStore;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)primaryResidentDevice;
- (id)readerKeyWithKeychainItemIdentifier:(id)arg1 error:(id*)arg2 flow:(id)arg3;
- (void)removeKeychainItemForReaderKey:(id)arg1 home:(id)arg2 flow:(id)arg3;
- (void)requestDevice:(id)arg1 toCreateKeychainItemForReaderKeyWithFlow:(id)arg2 completion:(id /* block */)arg3;
- (void)requestPrimaryResidentToFetchOrCreateReaderKeyWithFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)setCreateKeychainItemFuture:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setKeyIdentifiersAlreadyUpdated:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
