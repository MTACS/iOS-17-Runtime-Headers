
@interface NTKPigmentSyncReceiver : NSObject {
    NSObject<OS_dispatch_queue> * _privateQueue;
    bool  _receivedUpdates;
    NTKPigmentPersistentStorageController * _storageController;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) bool receivedUpdates;
@property (nonatomic, retain) NTKPigmentPersistentStorageController *storageController;

- (void).cxx_destruct;
- (void)finishSyncingForDeviceUUID:(id)arg1 success:(bool)arg2;
- (id)init;
- (id)privateQueue;
- (void)processSyncData:(id)arg1 domain:(id)arg2 deviceUUID:(id)arg3;
- (bool)receivedUpdates;
- (void)setPrivateQueue:(id)arg1;
- (void)setReceivedUpdates:(bool)arg1;
- (void)setStorageController:(id)arg1;
- (id)storageController;

@end
