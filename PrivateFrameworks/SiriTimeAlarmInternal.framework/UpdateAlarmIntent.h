
@interface UpdateAlarmIntent : INIntent

@property (nonatomic, retain) SiriAlarm *alarm;
@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic) long long operation;
@property (nonatomic, copy) NSString *proposedLabel;
@property (nonatomic, retain) NSNumber *proposedMeridiemSetByUser;
@property (nonatomic, copy) NSArray *proposedRecurrence;
@property (nonatomic, copy) NSDateComponents *proposedTime;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
