
@interface NWSSnapshotter : NSObject {
    unsigned long long  _kernelSourceRef;
    NWSSnapshotSource * _snapshotSource;
}

@property unsigned long long kernelSourceRef;
@property (retain) NWSSnapshotSource *snapshotSource;

- (void).cxx_destruct;
- (unsigned long long)kernelSourceRef;
- (void)setKernelSourceRef:(unsigned long long)arg1;
- (void)setSnapshotSource:(id)arg1;
- (id)snapshot;
- (id)snapshotSource;

@end
