
@interface HMDSnapshotCompletionTimer : HMFTimer {
    HMDSnapshotSession * _snapshotSession;
}

@property (nonatomic, readonly) HMDSnapshotSession *snapshotSession;

- (void).cxx_destruct;
- (id)initWithSnapshotSession:(id)arg1 timer:(double)arg2;
- (id)snapshotSession;

@end
