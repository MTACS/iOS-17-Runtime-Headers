
@interface MapsSync.MapsSyncMutableFavoriteItem : MapsSync.MapsSyncMutableBaseItem {
    void _proxyFavorite;
}

@property (nonatomic, retain) MapsSyncManagedFavoriteItem *_proxyFavorite;
@property (nonatomic, copy) NSSet *contactHandles;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;

- (void).cxx_destruct;
- (id)_proxyFavorite;
- (id)addContactHandle:(id)arg1;
- (id)contactHandles;
- (id)customName;
- (bool)hidden;
- (id)initWithProxyObject:(id)arg1;
- (id)mapItemStorage;
- (id)moveAfterItem:(id)arg1;
- (id)moveBeforeItem:(id)arg1;
- (void)moveToBack;
- (void)moveToFront;
- (id)originatingAddressString;
- (id)removeContactHandle:(id)arg1;
- (void)setContactHandles:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setOriginatingAddressString:(id)arg1;
- (void)setShortcutIdentifier:(id)arg1;
- (void)setSource:(short)arg1;
- (void)setType:(short)arg1;
- (void)setVersion:(short)arg1;
- (void)set_proxyFavorite:(id)arg1;
- (id)shortcutIdentifier;
- (short)source;
- (short)type;
- (short)version;

@end
