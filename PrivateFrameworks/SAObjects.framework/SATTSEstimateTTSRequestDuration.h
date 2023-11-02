
@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSArray *texts;

+ (id)estimateTTSRequestDuration;
+ (id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)locale;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setGender:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setTexts:(id)arg1;
- (id)texts;

@end
