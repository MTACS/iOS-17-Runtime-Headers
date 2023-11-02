
@interface HMDSnapshotCacheEntry : HMFObject {
    NSString * _snapshotCharacteristicEventUUID;
    HMDSnapshotFile * _snapshotFile;
    id /* block */  _snapshotRequestCompletion;
    HMFTimer * _timer;
}

@property (nonatomic, readonly) NSString *snapshotCharacteristicEventUUID;
@property (nonatomic, readonly) HMDSnapshotFile *snapshotFile;
@property (nonatomic, copy) id /* block */ snapshotRequestCompletion;
@property (nonatomic, readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSnapshotCharacteristicEventUUID:(id)arg1 snapshotFile:(id)arg2 timer:(id)arg3;
- (void)setSnapshotRequestCompletion:(id /* block */)arg1;
- (id)snapshotCharacteristicEventUUID;
- (id)snapshotFile;
- (id /* block */)snapshotRequestCompletion;
- (id)timer;

@end
