
@interface DMCRFMBRestoreDelegate : NSObject <MBManagerDelegate> {
    <DMCRFSnapshotSourceDelegate> * _delegate;
    <DMCRFSnapshotSource> * _snapshotSource;
}

@property (nonatomic) <DMCRFSnapshotSourceDelegate> *delegate;
@property (nonatomic) <DMCRFSnapshotSource> *snapshotSource;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 source:(id)arg2;
- (void)managerDidFinishRestore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnapshotSource:(id)arg1;
- (id)snapshotSource;

@end
