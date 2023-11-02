
@interface MapsSync.MapsSyncMutableHistorySearchItem : MapsSync.MapsSyncMutableHistoryItem {
    void _proxyHistory;
}

@property (nonatomic, retain) GEOMapRegion *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;

- (void).cxx_destruct;
- (id)geoMapRegion;
- (id)initWithProxyObject:(id)arg1;
- (id)language;
- (id)locationDisplay;
- (id)query;
- (void)setGeoMapRegion:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocationDisplay:(id)arg1;
- (void)setQuery:(id)arg1;

@end
