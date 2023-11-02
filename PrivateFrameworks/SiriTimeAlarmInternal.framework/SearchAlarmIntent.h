
@interface SearchAlarmIntent : INIntent

@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic) long long alarmSearchType;
@property (nonatomic, copy) NSArray *alarms;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
