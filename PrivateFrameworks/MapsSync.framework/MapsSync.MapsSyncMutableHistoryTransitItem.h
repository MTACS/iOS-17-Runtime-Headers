
@interface MapsSync.MapsSyncMutableHistoryTransitItem : MapsSync.MapsSyncMutableHistoryItem {
    void _proxyHistory;
}

@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSData *transitLineItemStorageData;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (unsigned long long)muid;
- (void)setMuid:(unsigned long long)arg1;
- (void)setTransitLineItemStorageData:(id)arg1;
- (id)transitLineItemStorageData;

@end
