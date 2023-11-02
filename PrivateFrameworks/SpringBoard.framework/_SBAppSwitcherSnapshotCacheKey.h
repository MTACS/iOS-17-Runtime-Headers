
@interface _SBAppSwitcherSnapshotCacheKey : NSObject <NSCopying> {
    SBAppLayout * _appLayout;
    SBDisplayItem * _displayItem;
    unsigned long long  _hash;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) SBDisplayItem *displayItem;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayItem;
- (unsigned long long)hash;
- (id)initWithDisplayItem:(id)arg1 inAppLayout:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
