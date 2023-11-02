
@interface SBRequestFolderSnapshotsSwitcherEventResponse : SBSwitcherModifierEventResponse {
    bool  _snapshotRequested;
}

@property (getter=isSnapshotRequested, nonatomic) bool snapshotRequested;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSnapshotRequest:(bool)arg1;
- (bool)isSnapshotRequested;
- (void)setSnapshotRequested:(bool)arg1;
- (long long)type;

@end
