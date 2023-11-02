
@interface MCMCommandSetDataProtection : MCMCommand <MCMParametersSetDataProtection> {
    MCMContainerIdentity * _containerIdentity;
    int  _dataProtectionClass;
    bool  _retryIfLocked;
    bool  _thirdParty;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) int dataProtectionClass;
@property (nonatomic, readonly) bool retryIfLocked;
@property (getter=isThirdParty, nonatomic, readonly) bool thirdParty;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)containerIdentity;
- (int)dataProtectionClass;
- (void)execute;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)isThirdParty;
- (bool)preflightClientAllowed;
- (bool)retryIfLocked;

@end
