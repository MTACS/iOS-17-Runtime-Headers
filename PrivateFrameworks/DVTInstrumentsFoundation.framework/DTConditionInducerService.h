
@interface DTConditionInducerService : DTXService <DTConditionInducerServiceAPI, DTConditionInducerSupportUpdatesProtocol> {
    NSXPCConnection * _connectionToService;
}

@property (retain) NSXPCConnection *connectionToService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_disconnectServiceConnection;
- (void)_requestAvailableConditionInducersWithCompletion:(id /* block */)arg1;
- (void)_requestDisableActiveConditionInducerWithCompletion:(id /* block */)arg1;
- (void)_requestDisableConditionInducerWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestEnableConditionInducerWithIdentifier:(id)arg1 profileIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)activeConditionsDidStop;
- (void)activeConditionsWillStop;
- (id)availableConditionInducers;
- (id)connectionToService;
- (void)dealloc;
- (id)disableActiveCondition;
- (id)disableConditionWithIdentifier:(id)arg1;
- (id)enableConditionWithIdentifier:(id)arg1 profileIdentifier:(id)arg2;
- (id)initWithChannel:(id)arg1;
- (void)setConnectionToService:(id)arg1;

@end
