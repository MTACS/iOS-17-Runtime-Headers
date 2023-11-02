
@interface MapsSync.MapsSyncMutableHistoryEvDirectionsItem : MapsSync.MapsSyncMutableHistoryDirectionsItem {
    void _proxyHistory;
}

@property (nonatomic) double requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)arg1;
- (double)requiredCharge;
- (void)setRequiredCharge:(double)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (id)vehicleIdentifier;

@end
