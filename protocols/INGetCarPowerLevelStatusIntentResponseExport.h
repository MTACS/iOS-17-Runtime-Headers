
@protocol INGetCarPowerLevelStatusIntentResponseExport <NSObject, JSExport>

@required

- (NSString *)activeConnector;
- (NSString *)carIdentifier;
- (NSNumber *)chargePercentRemaining;
- (NSNumber *)charging;
- (NSDictionary *)chargingFormulaArguments;
- (long long)code;
- (NSDictionary *)consumptionFormulaArguments;
- (NSMeasurement *)currentBatteryCapacity;
- (NSDateComponents *)dateOfLastStateUpdate;
- (NSMeasurement *)distanceRemaining;
- (NSMeasurement *)distanceRemainingElectric;
- (NSMeasurement *)distanceRemainingFuel;
- (NSNumber *)fuelPercentRemaining;
- (NSMeasurement *)maximumBatteryCapacity;
- (NSMeasurement *)maximumDistance;
- (NSMeasurement *)maximumDistanceElectric;
- (NSMeasurement *)maximumDistanceFuel;
- (NSMeasurement *)minimumBatteryCapacity;
- (NSNumber *)minutesToFull;
- (void)setActiveConnector:(NSString *)arg1;
- (void)setCarIdentifier:(NSString *)arg1;
- (void)setChargePercentRemaining:(NSNumber *)arg1;
- (void)setCharging:(NSNumber *)arg1;
- (void)setChargingFormulaArguments:(NSDictionary *)arg1;
- (void)setConsumptionFormulaArguments:(NSDictionary *)arg1;
- (void)setCurrentBatteryCapacity:(NSMeasurement *)arg1;
- (void)setDateOfLastStateUpdate:(NSDateComponents *)arg1;
- (void)setDistanceRemaining:(NSMeasurement *)arg1;
- (void)setDistanceRemainingElectric:(NSMeasurement *)arg1;
- (void)setDistanceRemainingFuel:(NSMeasurement *)arg1;
- (void)setFuelPercentRemaining:(NSNumber *)arg1;
- (void)setMaximumBatteryCapacity:(NSMeasurement *)arg1;
- (void)setMaximumDistance:(NSMeasurement *)arg1;
- (void)setMaximumDistanceElectric:(NSMeasurement *)arg1;
- (void)setMaximumDistanceFuel:(NSMeasurement *)arg1;
- (void)setMinimumBatteryCapacity:(NSMeasurement *)arg1;
- (void)setMinutesToFull:(NSNumber *)arg1;

@end
