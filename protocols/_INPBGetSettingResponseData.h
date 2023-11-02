
@protocol _INPBGetSettingResponseData <NSObject>

@required

- (int)StringAsBinaryValue:(NSString *)arg1;
- (int)StringAsBoundedValue:(NSString *)arg1;
- (int)binaryValue;
- (NSString *)binaryValueAsString:(int)arg1;
- (int)boundedValue;
- (NSString *)boundedValueAsString:(int)arg1;
- (bool)hasBinaryValue;
- (bool)hasBoundedValue;
- (bool)hasLabeledValue;
- (bool)hasNumericValue;
- (bool)hasSettingMetadata;
- (NSString *)labeledValue;
- (_INPBNumericSettingValue *)numericValue;
- (void)setBinaryValue:(int)arg1;
- (void)setBoundedValue:(int)arg1;
- (void)setHasBinaryValue:(bool)arg1;
- (void)setHasBoundedValue:(bool)arg1;
- (void)setLabeledValue:(NSString *)arg1;
- (void)setNumericValue:(_INPBNumericSettingValue *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (_INPBSettingMetadata *)settingMetadata;

@end
