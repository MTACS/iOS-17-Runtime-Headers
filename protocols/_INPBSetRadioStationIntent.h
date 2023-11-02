
@protocol _INPBSetRadioStationIntent <NSObject>

@required

- (int)StringAsRadioType:(NSString *)arg1;
- (_INPBString *)channel;
- (_INPBDouble *)frequency;
- (bool)hasChannel;
- (bool)hasFrequency;
- (bool)hasIntentMetadata;
- (bool)hasPresetNumber;
- (bool)hasRadioType;
- (bool)hasStationName;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBInteger *)presetNumber;
- (int)radioType;
- (NSString *)radioTypeAsString:(int)arg1;
- (void)setChannel:(_INPBString *)arg1;
- (void)setFrequency:(_INPBDouble *)arg1;
- (void)setHasRadioType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPresetNumber:(_INPBInteger *)arg1;
- (void)setRadioType:(int)arg1;
- (void)setStationName:(_INPBString *)arg1;
- (_INPBString *)stationName;

@end
