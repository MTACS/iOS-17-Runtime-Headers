
@interface RCFallbackOperation : RCOperation {
    RCConfigurationResource * _cachedConfigurationResource;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _configurationCompletionHandler;
    RCConfigurationResource * _configurationResource;
    bool  _enableExtraLogs;
    unsigned long long  _environment;
    double  _fallbackTimeoutDuration;
    NSURL * _fallbackURL;
    id /* block */  _networkEventHandler;
    NSString * _requestKey;
    NSString * _userID;
}

@property (nonatomic, retain) RCConfigurationResource *cachedConfigurationResource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ configurationCompletionHandler;
@property (nonatomic, retain) RCConfigurationResource *configurationResource;
@property (nonatomic) bool enableExtraLogs;
@property (nonatomic) unsigned long long environment;
@property (nonatomic) double fallbackTimeoutDuration;
@property (nonatomic, retain) NSURL *fallbackURL;
@property (nonatomic, copy) id /* block */ networkEventHandler;
@property (nonatomic, retain) NSString *requestKey;
@property (nonatomic, retain) NSString *userID;

- (void).cxx_destruct;
- (void)_fetchConfigurationWithURL:(id)arg1 requestKey:(id)arg2 enableExtraLogs:(bool)arg3 fallbackTimeoutDuration:(double)arg4;
- (void)_parseFallbackResponse:(id)arg1 fallbackURL:(id)arg2 requestKey:(id)arg3 enableExtraLogs:(bool)arg4 maxAge:(id)arg5 etag:(id)arg6 lastModifiedString:(id)arg7 completion:(id /* block */)arg8;
- (id)cachedConfigurationResource;
- (id)completionQueue;
- (id /* block */)configurationCompletionHandler;
- (id)configurationResource;
- (bool)enableExtraLogs;
- (unsigned long long)environment;
- (double)fallbackTimeoutDuration;
- (id)fallbackURL;
- (id /* block */)networkEventHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)requestKey;
- (void)setCachedConfigurationResource:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfigurationCompletionHandler:(id /* block */)arg1;
- (void)setConfigurationResource:(id)arg1;
- (void)setEnableExtraLogs:(bool)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setFallbackTimeoutDuration:(double)arg1;
- (void)setFallbackURL:(id)arg1;
- (void)setNetworkEventHandler:(id /* block */)arg1;
- (void)setRequestKey:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;
- (bool)validateOperation;

@end
