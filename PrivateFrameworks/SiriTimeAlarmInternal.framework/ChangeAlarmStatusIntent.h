
@interface ChangeAlarmStatusIntent : INIntent

@property (nonatomic, retain) AlarmSearch *alarmSearch;
@property (nonatomic, copy) NSArray *alarms;
@property (nonatomic, retain) NSNumber *handleSilently;
@property (nonatomic) long long operation;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
