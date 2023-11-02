
@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *reason;

+ (id)siriKitClearContext;
+ (id)siriKitClearContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitClearContextWithReason:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithReason:(id)arg1;
- (bool)mutatingCommand;
- (id)reason;
- (bool)requiresResponse;
- (void)setReason:(id)arg1;

@end
