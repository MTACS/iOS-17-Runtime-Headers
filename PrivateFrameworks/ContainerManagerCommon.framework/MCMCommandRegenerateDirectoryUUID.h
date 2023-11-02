
@interface MCMCommandRegenerateDirectoryUUID : MCMCommand <MCMParametersWithConcreteContainer> {
    MCMConcreteContainerIdentity * _concreteContainerIdentity;
}

@property (nonatomic, readonly) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (id)concreteContainerIdentity;
- (void)execute;
- (id)initWithConcreteContainerIdentity:(id)arg1 context:(id)arg2 resultPromise:(id)arg3;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (id)regenerateDirectoryUUIDNoCacheUpdateWithMetadata:(id)arg1 error:(id*)arg2;

@end
