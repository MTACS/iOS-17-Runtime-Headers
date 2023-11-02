
@protocol _INPBWellnessUnitType <NSObject>

@required

- (int)StringAsBloodGlucoseUnit:(NSString *)arg1;
- (int)StringAsBloodPressureUnit:(NSString *)arg1;
- (int)StringAsEnergyUnit:(NSString *)arg1;
- (int)StringAsHeartRateUnit:(NSString *)arg1;
- (int)StringAsLengthUnit:(NSString *)arg1;
- (int)StringAsMassUnit:(NSString *)arg1;
- (int)StringAsRespiratoryRateUnit:(NSString *)arg1;
- (int)StringAsTemperatureUnit:(NSString *)arg1;
- (int)StringAsTimeUnit:(NSString *)arg1;
- (int)StringAsVolumeUnit:(NSString *)arg1;
- (int)bloodGlucoseUnit;
- (NSString *)bloodGlucoseUnitAsString:(int)arg1;
- (int)bloodPressureUnit;
- (NSString *)bloodPressureUnitAsString:(int)arg1;
- (int)energyUnit;
- (NSString *)energyUnitAsString:(int)arg1;
- (bool)hasBloodGlucoseUnit;
- (bool)hasBloodPressureUnit;
- (bool)hasEnergyUnit;
- (bool)hasHeartRateUnit;
- (bool)hasLengthUnit;
- (bool)hasMassUnit;
- (bool)hasRespiratoryRateUnit;
- (bool)hasTemperatureUnit;
- (bool)hasTimeUnit;
- (bool)hasVolumeUnit;
- (int)heartRateUnit;
- (NSString *)heartRateUnitAsString:(int)arg1;
- (int)lengthUnit;
- (NSString *)lengthUnitAsString:(int)arg1;
- (int)massUnit;
- (NSString *)massUnitAsString:(int)arg1;
- (int)respiratoryRateUnit;
- (NSString *)respiratoryRateUnitAsString:(int)arg1;
- (void)setBloodGlucoseUnit:(int)arg1;
- (void)setBloodPressureUnit:(int)arg1;
- (void)setEnergyUnit:(int)arg1;
- (void)setHasBloodGlucoseUnit:(bool)arg1;
- (void)setHasBloodPressureUnit:(bool)arg1;
- (void)setHasEnergyUnit:(bool)arg1;
- (void)setHasHeartRateUnit:(bool)arg1;
- (void)setHasLengthUnit:(bool)arg1;
- (void)setHasMassUnit:(bool)arg1;
- (void)setHasRespiratoryRateUnit:(bool)arg1;
- (void)setHasTemperatureUnit:(bool)arg1;
- (void)setHasTimeUnit:(bool)arg1;
- (void)setHasVolumeUnit:(bool)arg1;
- (void)setHeartRateUnit:(int)arg1;
- (void)setLengthUnit:(int)arg1;
- (void)setMassUnit:(int)arg1;
- (void)setRespiratoryRateUnit:(int)arg1;
- (void)setTemperatureUnit:(int)arg1;
- (void)setTimeUnit:(int)arg1;
- (void)setVolumeUnit:(int)arg1;
- (int)temperatureUnit;
- (NSString *)temperatureUnitAsString:(int)arg1;
- (int)timeUnit;
- (NSString *)timeUnitAsString:(int)arg1;
- (int)volumeUnit;
- (NSString *)volumeUnitAsString:(int)arg1;

@end
