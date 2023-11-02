
@interface FCClientEndpointConnection : NSObject <FCCoreConfigurationObserving> {
    NSURL * _baseURL;
    <FCCoreConfigurationManager> * _configurationManager;
    FCEndpointConnection * _endpointConnection;
    FCAsyncSerialQueue * _serialQueue;
}

@property (nonatomic, retain) NSURL *baseURL;
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
- (id)endpointConnection;
- (id)initWithConfigurationManager:(id)arg1;
- (id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2;
- (void)reportConcern:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)reportConcernV2:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)serialQueue;
- (void)setBaseURL:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 countryCode:(id)arg5 languageCode:(id)arg6 callbackQueue:(id)arg7 completion:(id /* block */)arg8;
- (void)updateBaseURLWith:(id)arg1;

@end
