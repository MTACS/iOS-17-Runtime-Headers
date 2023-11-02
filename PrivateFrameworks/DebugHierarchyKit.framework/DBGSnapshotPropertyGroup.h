
@interface DBGSnapshotPropertyGroup : NSObject {
    DBGSnapshot * _snapshot;
}

@property DBGSnapshot *snapshot;

- (void).cxx_destruct;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
