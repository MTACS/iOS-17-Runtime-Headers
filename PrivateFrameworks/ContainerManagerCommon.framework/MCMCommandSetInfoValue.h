
@interface MCMCommandSetInfoValue : MCMCommand <MCMParametersWithKeyValue> {
    MCMConcreteContainerIdentity * _concreteContainerIdentity;
    NSString * _key;
    id  _value;
}

@property (nonatomic, readonly) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) id value;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)concreteContainerIdentity;
- (void)execute;
- (id)initWithKey:(id)arg1 value:(id)arg2 containerIdentity:(id)arg3 context:(id)arg4 resultPromise:(id)arg5;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (id)key;
- (bool)preflightClientAllowed;
- (id)value;

@end
