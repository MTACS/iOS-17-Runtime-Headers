
@interface SAAlarmSearch : SADomainCommand

@property (nonatomic, copy) NSNumber *enabled;
@property (nonatomic, copy) NSArray *frequency;
@property (nonatomic, copy) NSNumber *hour;
@property (nonatomic, copy) NSURL *identifier;
@property (nonatomic, copy) NSNumber *includesSleepAlarms;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *minute;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)enabled;
- (id)encodedClassName;
- (id)frequency;
- (id)groupIdentifier;
- (id)hour;
- (id)identifier;
- (id)includesSleepAlarms;
- (id)label;
- (id)minute;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setEnabled:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIncludesSleepAlarms:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;

@end
