
@protocol _INPBSetDefrosterSettingsInCarIntent <NSObject>

@required

- (int)StringAsDefroster:(NSString *)arg1;
- (_INPBDataString *)carName;
- (int)defroster;
- (NSString *)defrosterAsString:(int)arg1;
- (bool)enable;
- (bool)hasCarName;
- (bool)hasDefroster;
- (bool)hasEnable;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setCarName:(_INPBDataString *)arg1;
- (void)setDefroster:(int)arg1;
- (void)setEnable:(bool)arg1;
- (void)setHasDefroster:(bool)arg1;
- (void)setHasEnable:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
