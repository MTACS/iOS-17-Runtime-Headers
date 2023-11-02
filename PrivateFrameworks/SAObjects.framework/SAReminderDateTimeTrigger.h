
@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) SAReminderDateTimeTriggerOffset *offset;
@property (nonatomic, retain) SAReminderDateTimeTriggerOffset *relativeTimeOffset;
@property (nonatomic, copy) NSString *timeZoneId;

+ (id)dateTimeTrigger;
+ (id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)date;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)offset;
- (id)relativeTimeOffset;
- (void)setDate:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setRelativeTimeOffset:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;

@end
