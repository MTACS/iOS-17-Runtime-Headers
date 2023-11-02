
@interface MCMCommandSetCodeSignMapping : MCMCommand <MCMParametersSetCodeSignMapping> {
    NSString * _identifier;
    id  _info;
    id  _options;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id info;
@property (nonatomic, readonly) id options;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)identifier;
- (id)info;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)options;
- (bool)preflightClientAllowed;

@end
