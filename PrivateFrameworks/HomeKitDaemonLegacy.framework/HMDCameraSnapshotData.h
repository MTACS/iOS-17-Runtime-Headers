
@interface HMDCameraSnapshotData : HMFObject {
    NSData * _snapshotData;
    HMFOSTransaction * _snapshotDataTrasaction;
    HMDVideoResolution * _videoResolution;
}

@property (readonly) NSData *snapshotData;
@property (readonly) HMFOSTransaction *snapshotDataTrasaction;
@property (readonly) HMDVideoResolution *videoResolution;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3;
- (id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2;
- (id)snapshotData;
- (id)snapshotDataTrasaction;
- (id)videoResolution;

@end
