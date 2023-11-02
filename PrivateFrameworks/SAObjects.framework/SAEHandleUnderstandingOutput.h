
@interface SAEHandleUnderstandingOutput : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *policyActionList;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)policyActionList;
- (bool)requiresResponse;
- (void)setPolicyActionList:(id)arg1;

@end
