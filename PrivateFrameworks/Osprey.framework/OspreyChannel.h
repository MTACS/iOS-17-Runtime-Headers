
@interface OspreyChannel : NSObject <OspreyRPC> {
    OspreyGRPCChannel * _channel;
    NSString * _clientTraceId;
    NSURLSessionConfiguration * _configuration;
    id /* block */  _connectionMetricsHandler;
    OspreyConnectionPreferences * _connectionPreferences;
    OspreyChannelRequestOptions * _defaultRequestOptions;
    OspreyDeviceAuthentication * _deviceAuthenticator;
    bool  _enableDeviceAuthentication;
    OspreyPreferences * _preferences;
    NSObject<OS_dispatch_queue> * _queue;
    NSError * _signatureError;
    NSURL * _url;
    NSObject<OS_dispatch_group> * _validationGroup;
    bool  _waitingForSignature;
}

@property (nonatomic, copy) NSString *clientTraceId;
@property (nonatomic, copy) id /* block */ connectionMetricsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableDeviceAuthentication;
@property (nonatomic) bool forceHTTPv2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useAbsinthe;

- (void).cxx_destruct;
- (id)_buildRequestWithMethodName:(id)arg1 requestBuilder:(id /* block */)arg2;
- (void)_prepareChannelWithRequest:(id)arg1 continueWith:(id /* block */)arg2;
- (void)_prepareDeviceAuthenticationWithCompletion:(id /* block */)arg1;
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(id /* block */)arg2 streamingResponseHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)cancel;
- (id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(id /* block */)arg2 responseHandler:(id /* block */)arg3;
- (id)clientTraceId;
- (void)close;
- (id /* block */)connectionMetricsHandler;
- (void)dealloc;
- (bool)enableDeviceAuthentication;
- (bool)forceHTTPv2;
- (id /* block */)getConnectionMetricsHandler;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 useCache:(bool)arg3;
- (void)initializeAbsintheSessionWithCompletion:(id /* block */)arg1;
- (void)initializeDeviceAuthenticationSessionWithCompletion:(id /* block */)arg1;
- (void)ocp_setAssociatedHandle:(id)arg1;
- (void)performBidirectionalStreamingRequest:(id)arg1 handler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)preconnect;
- (void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(id /* block */)arg3 streamingResponseHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)setClientTraceId:(id)arg1;
- (void)setConnectionMetricsHandler:(id /* block */)arg1;
- (void)setEnableDeviceAuthentication:(bool)arg1;
- (void)setForceHTTPv2:(bool)arg1;
- (void)setUseAbsinthe:(bool)arg1;
- (void)setUseCompression:(bool)arg1;
- (void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(id /* block */)arg3 responseHandler:(id /* block */)arg4;
- (bool)useAbsinthe;

@end
