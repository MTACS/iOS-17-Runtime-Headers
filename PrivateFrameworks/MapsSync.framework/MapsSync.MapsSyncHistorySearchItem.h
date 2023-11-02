
@interface MapsSync.MapsSyncHistorySearchItem : MapsSync.MapsSyncHistoryItem {
    void _geoMapRegion;
    void _language;
    void _locationDisplay;
    void _query;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOMapRegion *geoMapRegion;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *locationDisplay;
@property (nonatomic, readonly) NSString *query;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)geoMapRegion;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)locationDisplay;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (id)query;
- (void)setPropertiesWithObject:(id)arg1;

@end
