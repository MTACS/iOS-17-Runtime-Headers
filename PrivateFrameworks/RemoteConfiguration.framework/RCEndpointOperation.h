
@interface RCEndpointOperation : RCOperation {
    NSDictionary * _changeTagsByRequestKey;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _configurationCompletionHandler;
    NSDictionary * _configurationResourcesByRequestKey;
    RCConfigurationSettings * _configurationSettings;
    NSURL * _endpointURL;
    id /* block */  _networkEventHandler;
}

@property (nonatomic, retain) NSDictionary *changeTagsByRequestKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ configurationCompletionHandler;
@property (nonatomic, retain) NSDictionary *configurationResourcesByRequestKey;
@property (nonatomic, retain) RCConfigurationSettings *configurationSettings;
@property (nonatomic, retain) NSURL *endpointURL;
@property (nonatomic, copy) id /* block */ networkEventHandler;

- (void).cxx_destruct;
- (void)_fetchConfigurationWithSettings:(id)arg1;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id)changeTagsByRequestKey;
- (id)completionQueue;
- (id /* block */)configurationCompletionHandler;
- (id)configurationResourcesByRequestKey;
- (id)configurationSettings;
- (id)endpointURL;
- (unsigned long long)maxRetries;
- (id /* block */)networkEventHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)requestDataForSettings:(id)arg1;
- (void)resetForRetry;
- (void)setChangeTagsByRequestKey:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfigurationCompletionHandler:(id /* block */)arg1;
- (void)setConfigurationResourcesByRequestKey:(id)arg1;
- (void)setConfigurationSettings:(id)arg1;
- (void)setEndpointURL:(id)arg1;
- (void)setNetworkEventHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
