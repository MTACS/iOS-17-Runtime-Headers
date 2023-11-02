
@interface MapsSync.MapsSyncMutableHistoryCuratedCollection : MapsSync.MapsSyncMutableHistoryItem {
    void _proxy;
}

@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic) int resultProviderIdentifier;

- (void).cxx_destruct;
- (unsigned long long)curatedCollectionIdentifier;
- (id)initWithProxyObject:(id)arg1;
- (int)resultProviderIdentifier;
- (void)setCuratedCollectionIdentifier:(unsigned long long)arg1;
- (void)setResultProviderIdentifier:(int)arg1;

@end
