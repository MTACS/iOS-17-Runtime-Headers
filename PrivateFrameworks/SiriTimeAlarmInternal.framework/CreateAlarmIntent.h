
@interface CreateAlarmIntent : INIntent

@property (nonatomic, retain) NSNumber *isMeridianInferred;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSNumber *relativeOffsetInMinutes;
@property (nonatomic, copy) NSArray *repeatSchedule;
@property (nonatomic, copy) NSDateComponents *time;

+ (bool)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
