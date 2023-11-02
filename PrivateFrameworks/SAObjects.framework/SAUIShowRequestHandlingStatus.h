
@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *asrStatus;
@property (nonatomic, copy) NSString *executionInputSystem;
@property (nonatomic, copy) NSString *requestHandlingStatus;

- (id)asrStatus;
- (id)encodedClassName;
- (id)executionInputSystem;
- (id)groupIdentifier;
- (id)requestHandlingStatus;
- (bool)requiresResponse;
- (void)setAsrStatus:(id)arg1;
- (void)setExecutionInputSystem:(id)arg1;
- (void)setRequestHandlingStatus:(id)arg1;

@end
