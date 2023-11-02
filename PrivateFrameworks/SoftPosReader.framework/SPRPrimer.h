
@interface SPRPrimer : SPRObject {
    bool  _isProduction;
    SPRProvider * _provider;
    long long  _providerPredicate;
}

@property (readonly, copy) NSURL *attestationBackendURL;
@property (readonly, copy) NSDictionary *configuration;
@property (readonly, copy) NSURL *configuratorBackendURL;
@property (nonatomic, readonly) bool isProduction;
@property (readonly, copy) NSURL *monitoringBackendURL;
@property (getter=getProvider, readonly) SPRProvider *provider;
@property (readonly, copy) NSURL *storageURL;

+ (id)primerWithConfiguration:(id)arg1 error:(id*)arg2;
+ (id)shared;

- (void).cxx_destruct;
- (id)attestationBackendURL;
- (id)attestationManagerAndReturnError:(id*)arg1;
- (id)configuration;
- (id)configuratorBackendURL;
- (id)getProvider;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (bool)isProduction;
- (id)monitorManagerAndReturnError:(id*)arg1;
- (id)monitoringBackendURL;
- (void)onDisconnect;
- (id)persistenceFactoryAndReturnError:(id*)arg1;
- (id)providerAndReturnError:(id*)arg1;
- (id)secureChannelAndReturnError:(id*)arg1;
- (id)secureChannelWithName:(id)arg1 error:(id*)arg2;
- (id)storageURL;

@end
