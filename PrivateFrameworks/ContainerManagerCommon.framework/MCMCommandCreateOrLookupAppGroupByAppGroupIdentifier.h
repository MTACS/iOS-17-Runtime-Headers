
@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier> {
    NSString * _appGroupIdentifier;
    MCMContainerIdentity * _containerIdentity;
    MCMError * _error;
    bool  _iOSStyleHandling;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) NSString *appGroupIdentifier;
@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) MCMError *error;
@property (nonatomic, readonly) bool iOSStyleHandling;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)_commonInit:(id)arg1;
- (id)appGroupIdentifier;
- (id)containerIdentity;
- (id)error;
- (void)execute;
- (bool)iOSStyleHandling;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)userIdentity;

@end
