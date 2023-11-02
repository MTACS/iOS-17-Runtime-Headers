
@interface MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSync.MapsSyncMutableHistoryItem {
    void _proxyHistory;
}

@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSUUID *supersededSearchId;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (id)mapItemStorage;
- (void)setMapItemStorage:(id)arg1;
- (void)setSupersededSearchId:(id)arg1;
- (id)supersededSearchId;

@end
