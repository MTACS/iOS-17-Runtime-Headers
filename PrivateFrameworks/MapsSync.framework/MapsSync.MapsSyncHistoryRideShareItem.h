
@interface MapsSync.MapsSyncHistoryRideShareItem : MapsSync.MapsSyncHistoryItem {
    void _endWaypoint;
    void _startWaypoint;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)description;
- (id)endWaypoint;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)arg1;
- (id)startWaypoint;

@end
