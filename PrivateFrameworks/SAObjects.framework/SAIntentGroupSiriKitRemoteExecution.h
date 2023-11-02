
@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *executionDeviceAssistantId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *invocationDeviceAssistantId;
@property (nonatomic, copy) NSString *personalDomainAuthenticationMode;
@property (nonatomic, copy) NSString *runLocation;
@property (readonly) Class superclass;

+ (id)siriKitRemoteExecution;
+ (id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)executionDeviceAssistantId;
- (id)groupIdentifier;
- (id)invocationDeviceAssistantId;
- (id)personalDomainAuthenticationMode;
- (id)runLocation;
- (void)setExecutionDeviceAssistantId:(id)arg1;
- (void)setInvocationDeviceAssistantId:(id)arg1;
- (void)setPersonalDomainAuthenticationMode:(id)arg1;
- (void)setRunLocation:(id)arg1;

@end
