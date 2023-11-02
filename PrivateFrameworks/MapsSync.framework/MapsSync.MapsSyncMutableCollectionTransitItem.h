
@interface MapsSync.MapsSyncMutableCollectionTransitItem : MapsSync.MapsSyncMutableCollectionItem {
    void _proxyCollectionTransitItem;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSData *transitLineStorageData;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (unsigned long long)muid;
- (void)setMuid:(unsigned long long)arg1;
- (void)setTransitLineStorageData:(id)arg1;
- (id)transitLineStorageData;

@end
