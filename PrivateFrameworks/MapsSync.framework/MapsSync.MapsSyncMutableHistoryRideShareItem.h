
@interface MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSync.MapsSyncMutableHistoryItem {
    void _proxyHistory;
}

@property (nonatomic, retain) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, retain) GEOComposedWaypoint *startWaypoint;

- (void).cxx_destruct;
- (id)endWaypoint;
- (id)initWithProxyObject:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;

@end
