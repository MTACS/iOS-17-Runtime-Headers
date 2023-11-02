
@interface SARDRemoteExecutionContextUpdate : SABaseClientBoundCommand

@property (nonatomic, copy) NSData *executionContextUpdate;
@property (nonatomic, copy) NSString *remoteDeviceAssistantId;

- (id)encodedClassName;
- (id)executionContextUpdate;
- (id)groupIdentifier;
- (id)remoteDeviceAssistantId;
- (bool)requiresResponse;
- (void)setExecutionContextUpdate:(id)arg1;
- (void)setRemoteDeviceAssistantId:(id)arg1;

@end
