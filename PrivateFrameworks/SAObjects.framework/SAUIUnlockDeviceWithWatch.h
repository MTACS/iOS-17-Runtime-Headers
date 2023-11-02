
@interface SAUIUnlockDeviceWithWatch : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *failureCommands;
@property (nonatomic, copy) NSArray *successCommands;

- (id)encodedClassName;
- (id)failureCommands;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFailureCommands:(id)arg1;
- (void)setSuccessCommands:(id)arg1;
- (id)successCommands;

@end
