
@interface MCMCommandGetCodeSignMapping : MCMCommand <MCMParametersWithIdentifier> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)identifier;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;

@end
