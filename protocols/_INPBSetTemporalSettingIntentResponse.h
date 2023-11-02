
@protocol _INPBSetTemporalSettingIntentResponse <NSObject>

@required

- (NSString *)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasOldValue;
- (bool)hasUpdatedValue;
- (_INPBDateTimeRange *)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setOldValue:(_INPBDateTimeRange *)arg1;
- (void)setUpdatedValue:(_INPBDateTimeRange *)arg1;
- (_INPBDateTimeRange *)updatedValue;

@end
