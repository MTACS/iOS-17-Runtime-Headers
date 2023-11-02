
@protocol _INPBSupportedTrafficIncidentType <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasLocalizedDisplayString;
- (bool)hasType;
- (_INPBString *)localizedDisplayString;
- (void)setHasType:(bool)arg1;
- (void)setLocalizedDisplayString:(_INPBString *)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;

@end
