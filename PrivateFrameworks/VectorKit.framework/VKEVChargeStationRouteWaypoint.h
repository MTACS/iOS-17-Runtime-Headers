
@interface VKEVChargeStationRouteWaypoint : VKRouteWaypointInfo {
    NSString * _chargeTimeText;
}

@property (nonatomic, readonly) GEOComposedRouteEVChargingStationInfo *chargeInfo;
@property (nonatomic, retain) NSString *chargeTimeText;

- (void).cxx_destruct;
- (id)chargeInfo;
- (id)chargeTimeText;
- (id)initWithWaypoint:(id)arg1 displayInfo:(id)arg2 legIndex:(unsigned long long)arg3 routeCoordinate:(struct { double x1; double x2; double x3; })arg4 adjacentRouteCoordinate:(struct { double x1; double x2; double x3; })arg5;
- (void)setChargeTimeText:(id)arg1;

@end
