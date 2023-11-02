
@protocol _INPBSetSeatSettingsInCarIntent <NSObject>

@required

- (int)StringAsRelativeLevelSetting:(NSString *)arg1;
- (int)StringAsSeat:(NSString *)arg1;
- (_INPBDataString *)carName;
- (bool)enableCooling;
- (bool)enableHeating;
- (bool)enableMassage;
- (bool)hasCarName;
- (bool)hasEnableCooling;
- (bool)hasEnableHeating;
- (bool)hasEnableMassage;
- (bool)hasIntentMetadata;
- (bool)hasLevel;
- (bool)hasRelativeLevelSetting;
- (bool)hasSeat;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBInteger *)level;
- (int)relativeLevelSetting;
- (NSString *)relativeLevelSettingAsString:(int)arg1;
- (int)seat;
- (NSString *)seatAsString:(int)arg1;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setEnableCooling:(bool)arg1;
- (void)setEnableHeating:(bool)arg1;
- (void)setEnableMassage:(bool)arg1;
- (void)setHasEnableCooling:(bool)arg1;
- (void)setHasEnableHeating:(bool)arg1;
- (void)setHasEnableMassage:(bool)arg1;
- (void)setHasRelativeLevelSetting:(bool)arg1;
- (void)setHasSeat:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLevel:(_INPBInteger *)arg1;
- (void)setRelativeLevelSetting:(int)arg1;
- (void)setSeat:(int)arg1;

@end
