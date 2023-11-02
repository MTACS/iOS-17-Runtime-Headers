
@interface LNRuntimeAssertionsTakingConnectionOperation : LNInterfaceConnectionOperation <LNRuntimeAssertionsTaking> {
    CLInUseAssertion * _locationAssertion;
    NSSet * _runtimeAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLInUseAssertion *locationAssertion;
@property (nonatomic, retain) NSSet *runtimeAssertions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireRuntimeAssertions;
- (id)initWithIdentifier:(id)arg1 connectionInterface:(id)arg2 systemProtocols:(id)arg3 priority:(long long)arg4 queue:(id)arg5 activity:(id /* block */)arg6;
- (void)invalidateRuntimeAssertions;
- (id)locationAssertion;
- (id)runtimeAssertions;
- (void)setLocationAssertion:(id)arg1;
- (void)setRuntimeAssertions:(id)arg1;

@end
