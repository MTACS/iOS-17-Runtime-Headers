
@interface SBSAElementSnapshotContextMutator : NSObject {
    SBSAElementSnapshotContext * _elementSnapshotContext;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic, readonly) SBSAElementSnapshotContext *elementSnapshotContext;
@property (nonatomic, copy) NSString *snapshotReason;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)description;
- (id)elementIdentifier;
- (id)elementSnapshotContext;
- (id)initWithElementSnapshotContext:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setElementIdentifier:(id)arg1;
- (void)setSnapshotReason:(id)arg1;
- (id)snapshotReason;

@end
