
@protocol _INPBReservationAction <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasType;
- (bool)hasUserActivity;
- (bool)hasValidDuration;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUserActivity:(_INPBUserActivity *)arg1;
- (void)setValidDuration:(_INPBDateTimeRange *)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (_INPBUserActivity *)userActivity;
- (_INPBDateTimeRange *)validDuration;

@end
