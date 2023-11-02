
@interface SBAppSwitcherSnapshotCacheEntry : NSObject {
    SBAppLayout * _appLayout;
    SBDisplayItem * _displayItem;
    bool  _fromFullSizeSnapshotRequest;
    bool  _needsUpdate;
    XBApplicationSnapshot * _snapshot;
    UIImage * _snapshotImage;
}

@property (nonatomic, retain) SBAppLayout *appLayout;
@property (nonatomic, retain) SBDisplayItem *displayItem;
@property (nonatomic) bool fromFullSizeSnapshotRequest;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, readonly) long long role;
@property (nonatomic, retain) XBApplicationSnapshot *snapshot;
@property (nonatomic, retain) UIImage *snapshotImage;

- (void).cxx_destruct;
- (bool)_matchesAppLayout:(id)arg1 displayItem:(id)arg2;
- (id)appLayout;
- (id)description;
- (id)displayItem;
- (bool)fromFullSizeSnapshotRequest;
- (bool)needsUpdate;
- (long long)role;
- (void)setAppLayout:(id)arg1;
- (void)setDisplayItem:(id)arg1;
- (void)setFromFullSizeSnapshotRequest:(bool)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSnapshotImage:(id)arg1;
- (id)snapshot;
- (id)snapshotImage;

@end
