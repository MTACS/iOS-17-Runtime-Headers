
@interface MCMCommandOpenPrimordialDataContainer : MCMCommand {
    MCMContainerIdentity * _containerIdentity;
    MCMError * _error;
    bool  _extension;
    bool  _testMode;
}

@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) MCMError *error;
@property (nonatomic, readonly) bool extension;
@property (nonatomic, readonly) bool testMode;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)containerIdentity;
- (id)error;
- (void)execute;
- (bool)extension;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (bool)testMode;

@end
