
@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *useCaseId;

+ (id)supportedIntentResponse;
+ (id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCommands:(id)arg1;
- (void)setUseCaseId:(id)arg1;
- (id)useCaseId;

@end
