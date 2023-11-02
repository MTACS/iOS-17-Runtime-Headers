
@interface ADServer : ADSingleton <NSURLSessionDelegate> {
    int  _configurationExpirationTime;
    NSDictionary * _configurations;
    NSString * _resourceConnectProxyURL;
    NSURLSession * _session;
}

@property int configurationExpirationTime;
@property (retain) NSDictionary *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *resourceConnectProxyURL;
@property (retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)workQueue;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)buildConfigurationDictionary:(id)arg1;
- (int)configurationExpirationTime;
- (id)configurations;
- (id)deserializeMessage:(id)arg1 error:(id*)arg2;
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)init;
- (id)resourceConnectProxyURL;
- (void)restoreConfiguration;
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;
- (void)saveConfig;
- (void)saveProxyURL;
- (id)serializeMessage:(id)arg1;
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;
- (id)session;
- (void)setConfigurationExpirationTime:(int)arg1;
- (void)setConfigurations:(id)arg1;
- (void)setResourceConnectProxyURL:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)shouldRestoreConfiguration;

@end
