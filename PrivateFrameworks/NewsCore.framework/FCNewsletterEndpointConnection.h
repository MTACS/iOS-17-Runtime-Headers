
@interface FCNewsletterEndpointConnection : NSObject <FCCoreConfigurationObserving> {
    NSURL * _baseURL;
    <FCCoreConfigurationManager> * _configurationManager;
    FCEndpointConnection * _endpointConnection;
    FCAsyncSerialQueue * _serialQueue;
}

@property (retain) NSURL *baseURL;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCEndpointConnection *endpointConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCAsyncSerialQueue *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (id)configurationManager;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (void)deletePersonalizationVectorWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)endpointConnection;
- (void)getNewsletterSubscriptionWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)getWebTokenWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConfigurationManager:(id)arg1;
- (id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2;
- (void)newsletterSubscribeTo:(id)arg1 includeArray:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)serialQueue;
- (void)setBaseURL:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)submitPersonalizationVector:(id)arg1 withCallbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateBaseURL:(id)arg1;

@end
