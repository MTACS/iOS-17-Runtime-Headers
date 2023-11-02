
@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject <BSDescriptionProviding> {
    SBAppLayout * _appLayout;
    SBDisplayItem * _displayItem;
    bool  _loadFullSizeSnapshot;
    unsigned long long  _sequenceID;
    XBApplicationSnapshot * _snapshot;
}

@property (nonatomic, retain) SBAppLayout *appLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBDisplayItem *displayItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadFullSizeSnapshot;
@property (nonatomic, readonly) unsigned long long sequenceID;
@property (nonatomic, retain) XBApplicationSnapshot *snapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appLayout;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItem;
- (id)initWithSequenceID:(unsigned long long)arg1;
- (bool)loadFullSizeSnapshot;
- (unsigned long long)sequenceID;
- (void)setAppLayout:(id)arg1;
- (void)setDisplayItem:(id)arg1;
- (void)setLoadFullSizeSnapshot:(bool)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
