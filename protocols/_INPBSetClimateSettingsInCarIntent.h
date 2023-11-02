
@protocol _INPBSetClimateSettingsInCarIntent <NSObject>

@required

- (int)StringAsAirCirculationMode:(NSString *)arg1;
- (int)StringAsClimateZone:(NSString *)arg1;
- (int)StringAsRelativeFanSpeedSetting:(NSString *)arg1;
- (int)StringAsRelativeTemperatureSetting:(NSString *)arg1;
- (int)airCirculationMode;
- (NSString *)airCirculationModeAsString:(int)arg1;
- (_INPBDataString *)carName;
- (int)climateZone;
- (NSString *)climateZoneAsString:(int)arg1;
- (bool)enableAirConditioner;
- (bool)enableAutoMode;
- (bool)enableClimateControl;
- (bool)enableFan;
- (_INPBInteger *)fanSpeedIndex;
- (_INPBDouble *)fanSpeedPercentage;
- (bool)hasAirCirculationMode;
- (bool)hasCarName;
- (bool)hasClimateZone;
- (bool)hasEnableAirConditioner;
- (bool)hasEnableAutoMode;
- (bool)hasEnableClimateControl;
- (bool)hasEnableFan;
- (bool)hasFanSpeedIndex;
- (bool)hasFanSpeedPercentage;
- (bool)hasIntentMetadata;
- (bool)hasRelativeFanSpeedSetting;
- (bool)hasRelativeTemperatureSetting;
- (bool)hasTemperature;
- (_INPBIntentMetadata *)intentMetadata;
- (int)relativeFanSpeedSetting;
- (NSString *)relativeFanSpeedSettingAsString:(int)arg1;
- (int)relativeTemperatureSetting;
- (NSString *)relativeTemperatureSettingAsString:(int)arg1;
- (void)setAirCirculationMode:(int)arg1;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setClimateZone:(int)arg1;
- (void)setEnableAirConditioner:(bool)arg1;
- (void)setEnableAutoMode:(bool)arg1;
- (void)setEnableClimateControl:(bool)arg1;
- (void)setEnableFan:(bool)arg1;
- (void)setFanSpeedIndex:(_INPBInteger *)arg1;
- (void)setFanSpeedPercentage:(_INPBDouble *)arg1;
- (void)setHasAirCirculationMode:(bool)arg1;
- (void)setHasClimateZone:(bool)arg1;
- (void)setHasEnableAirConditioner:(bool)arg1;
- (void)setHasEnableAutoMode:(bool)arg1;
- (void)setHasEnableClimateControl:(bool)arg1;
- (void)setHasEnableFan:(bool)arg1;
- (void)setHasRelativeFanSpeedSetting:(bool)arg1;
- (void)setHasRelativeTemperatureSetting:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setRelativeFanSpeedSetting:(int)arg1;
- (void)setRelativeTemperatureSetting:(int)arg1;
- (void)setTemperature:(_INPBTemperature *)arg1;
- (_INPBTemperature *)temperature;

@end
