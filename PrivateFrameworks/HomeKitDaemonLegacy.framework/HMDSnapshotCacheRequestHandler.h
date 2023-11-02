
@interface HMDSnapshotCacheRequestHandler : HMFObject <HMDSnapshotRequestHandlerProtocol, HMFLogging, HMFTimerDelegate> {
    NSString * _logIdentifier;
    NSMutableDictionary * _snapshotCacheMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addSnapshotFileToCache:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 logID:(id)arg2;
- (bool)isSnapshotPresentForCharacteristicEventUUID:(id)arg1;
- (id)logIdentifier;
- (void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setSnapshotFileToCache:(id)arg1 snapshotCharacteristicEventUUID:(id)arg2;
- (void)timerDidFire:(id)arg1;

@end
