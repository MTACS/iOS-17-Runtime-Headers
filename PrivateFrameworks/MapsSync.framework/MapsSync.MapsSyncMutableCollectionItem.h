
@interface MapsSync.MapsSyncMutableCollectionItem : MapsSync.MapsSyncMutableBaseItem {
    void _proxyCollectionItem;
}

@property (nonatomic, copy) NSSet *collections;

- (void).cxx_destruct;
- (id)collections;
- (id)initWithProxyObject:(id)arg1;
- (void)setCollections:(id)arg1;

@end
