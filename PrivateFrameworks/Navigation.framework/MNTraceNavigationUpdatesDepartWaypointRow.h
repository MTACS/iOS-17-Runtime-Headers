
@interface MNTraceNavigationUpdatesDepartWaypointRow : MNTraceNavigationUpdatesRow {
    unsigned long long  _legIndex;
    unsigned long long  _reason;
    GEOComposedWaypoint * _waypoint;
}

@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, retain) GEOComposedWaypoint *waypoint;

- (void).cxx_destruct;
- (unsigned long long)legIndex;
- (long long)navigationUpdateType;
- (unsigned long long)reason;
- (void)setLegIndex:(unsigned long long)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setWaypoint:(id)arg1;
- (id)waypoint;

@end
