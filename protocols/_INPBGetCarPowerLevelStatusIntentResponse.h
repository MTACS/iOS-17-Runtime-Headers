
@protocol _INPBGetCarPowerLevelStatusIntentResponse <NSObject>

@required

- (int)StringAsActiveConnector:(NSString *)arg1;
- (int)activeConnector;
- (NSString *)activeConnectorAsString:(int)arg1;
- (NSString *)carIdentifier;
- (_INPBDouble *)chargePercentRemaining;
- (bool)charging;
- (_INPBJSONDictionary *)chargingFormulaArguments;
- (_INPBJSONDictionary *)consumptionFormulaArguments;
- (_INPBEnergy *)currentBatteryCapacity;
- (_INPBDateTime *)dateOfLastStateUpdate;
- (_INPBDistance *)distanceRemaining;
- (_INPBDistance *)distanceRemainingElectric;
- (_INPBDistance *)distanceRemainingFuel;
- (_INPBDouble *)fuelPercentRemaining;
- (bool)hasActiveConnector;
- (bool)hasCarIdentifier;
- (bool)hasChargePercentRemaining;
- (bool)hasCharging;
- (bool)hasChargingFormulaArguments;
- (bool)hasConsumptionFormulaArguments;
- (bool)hasCurrentBatteryCapacity;
- (bool)hasDateOfLastStateUpdate;
- (bool)hasDistanceRemaining;
- (bool)hasDistanceRemainingElectric;
- (bool)hasDistanceRemainingFuel;
- (bool)hasFuelPercentRemaining;
- (bool)hasMaximumBatteryCapacity;
- (bool)hasMaximumDistance;
- (bool)hasMaximumDistanceElectric;
- (bool)hasMaximumDistanceFuel;
- (bool)hasMinimumBatteryCapacity;
- (bool)hasMinutesToFull;
- (_INPBEnergy *)maximumBatteryCapacity;
- (_INPBDistance *)maximumDistance;
- (_INPBDistance *)maximumDistanceElectric;
- (_INPBDistance *)maximumDistanceFuel;
- (_INPBEnergy *)minimumBatteryCapacity;
- (_INPBInteger *)minutesToFull;
- (void)setActiveConnector:(int)arg1;
- (void)setCarIdentifier:(NSString *)arg1;
- (void)setChargePercentRemaining:(_INPBDouble *)arg1;
- (void)setCharging:(bool)arg1;
- (void)setChargingFormulaArguments:(_INPBJSONDictionary *)arg1;
- (void)setConsumptionFormulaArguments:(_INPBJSONDictionary *)arg1;
- (void)setCurrentBatteryCapacity:(_INPBEnergy *)arg1;
- (void)setDateOfLastStateUpdate:(_INPBDateTime *)arg1;
- (void)setDistanceRemaining:(_INPBDistance *)arg1;
- (void)setDistanceRemainingElectric:(_INPBDistance *)arg1;
- (void)setDistanceRemainingFuel:(_INPBDistance *)arg1;
- (void)setFuelPercentRemaining:(_INPBDouble *)arg1;
- (void)setHasActiveConnector:(bool)arg1;
- (void)setHasCharging:(bool)arg1;
- (void)setMaximumBatteryCapacity:(_INPBEnergy *)arg1;
- (void)setMaximumDistance:(_INPBDistance *)arg1;
- (void)setMaximumDistanceElectric:(_INPBDistance *)arg1;
- (void)setMaximumDistanceFuel:(_INPBDistance *)arg1;
- (void)setMinimumBatteryCapacity:(_INPBEnergy *)arg1;
- (void)setMinutesToFull:(_INPBInteger *)arg1;

@end
