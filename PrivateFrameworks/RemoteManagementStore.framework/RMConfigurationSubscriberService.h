
@interface RMConfigurationSubscriberService : RMConfigurationSubscriberClient <RMConfigurationSubscriberXPCService> {
    NSArray * _configurationTypes;
    bool  _hasServiceEntitlement;
    NSArray * _statusKeys;
}

@property (nonatomic, readonly) NSArray *configurationTypes;
@property (nonatomic, readonly) bool hasServiceEntitlement;
@property (nonatomic, readonly) NSArray *statusKeys;

+ (id)newConfigurationSubscriberServiceWithXPCConnection:(id)arg1;

- (void).cxx_destruct;
- (id)configurationTypes;
- (void)fetchThenApplyConfigurationsWithScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchThenUpdateConfigurationUIsWithScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasServiceEntitlement;
- (id)initWithXPCConnection:(id)arg1;
- (void)publishStatusKeys:(id)arg1 storeIdentifier:(id)arg2 scope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)statusKeys;

@end
