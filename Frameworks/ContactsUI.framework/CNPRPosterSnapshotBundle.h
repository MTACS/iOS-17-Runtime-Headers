
@interface CNPRPosterSnapshotBundle : NSObject {
    PRPosterSnapshotBundle * _wrappedSnapshotBundle;
}

@property (nonatomic, readonly) PRPosterSnapshotBundle *wrappedSnapshotBundle;

- (void).cxx_destruct;
- (id)initWithWrappedBundle:(id)arg1;
- (id)snapshotForLevelSet:(id)arg1;
- (id)wrappedSnapshotBundle;

@end
