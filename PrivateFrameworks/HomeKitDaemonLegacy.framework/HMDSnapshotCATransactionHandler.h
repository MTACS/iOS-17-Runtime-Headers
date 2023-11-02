
@interface HMDSnapshotCATransactionHandler : HMFObject <HMFLogging> {
    BSPortDeathWatcher * _backboardServicesWatcher;
    NSObject<OS_dispatch_queue> * _clientQueue;
    CAContext * _snapshotContext;
}

@property (nonatomic, retain) BSPortDeathWatcher *backboardServicesWatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAContext *snapshotContext;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)_backboardServicesRelaunched;
- (id)_createSlotWithFilePath:(id)arg1 snapshotCATransaction:(id)arg2;
- (void)_createSnapshotContext;
- (void)_deleteSlotWithIdentifier:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3;
- (id)backboardServicesWatcher;
- (void)clearSlotWithIdentifier:(id)arg1;
- (id)clientQueue;
- (id)createSlotWithFilePath:(id)arg1;
- (struct CGImage { }*)createSnapshotCGImageRef:(id)arg1;
- (void)deleteSlotWithIdentifier:(id)arg1 filePath:(id)arg2;
- (void)fillSlotWithIdentifier:(id)arg1 filePath:(id)arg2;
- (id)init;
- (void)setBackboardServicesWatcher:(id)arg1;
- (void)setSnapshotContext:(id)arg1;
- (id)snapshotContext;

@end
