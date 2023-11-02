
@interface CLSUserDefaults : NSObject {
    CLSEndpointConnection * _endpointConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CLSEndpointConnection *endpointConnection;

+ (id)displayNameForDefaultName:(id)arg1;
+ (Class)endpointClass;
+ (id)sharedDefaults;

- (void).cxx_destruct;
- (id)endpointConnection;
- (void)getUserDefaultForDefaultNamed:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(id /* block */)arg3;
- (id)syncUtilityServer:(id /* block */)arg1;
- (bool)userDefaultForDefaultNamed:(id)arg1;
- (void)userDefaultsConfigurationDictionaryWithCompletion:(id /* block */)arg1;
- (id)utilityServer:(id /* block */)arg1;

@end
