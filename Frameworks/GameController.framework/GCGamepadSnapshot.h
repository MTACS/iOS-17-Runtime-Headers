
@interface GCGamepadSnapshot : GCGamepad {
    NSData * snapshotData;
}

@property (copy) NSData *snapshotData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (void)setSnapshotData:(id)arg1;
- (id)snapshotData;

@end
