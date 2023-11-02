
@protocol _INPBCreateAlarmIntentResponse <NSObject>

@required

- (int)StringAsSuccessCode:(NSString *)arg1;
- (_INPBAlarm *)createdAlarm;
- (bool)hasCreatedAlarm;
- (bool)hasSuccessCode;
- (void)setCreatedAlarm:(_INPBAlarm *)arg1;
- (void)setHasSuccessCode:(bool)arg1;
- (void)setSuccessCode:(int)arg1;
- (int)successCode;
- (NSString *)successCodeAsString:(int)arg1;

@end
