
@interface FCAnalyticsEndpointConnection : NSObject {
    FCEndpointConnection * _endpointConnection;
    FCAsyncSerialQueue * _serialQueue;
}

@property (nonatomic, retain) FCEndpointConnection *endpointConnection;
@property (nonatomic, retain) FCAsyncSerialQueue *serialQueue;

- (void).cxx_destruct;
- (id)endpointConnection;
- (id)initWithEndpointConnection:(id)arg1;
- (id)serialQueue;
- (void)setEndpointConnection:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 completion:(id /* block */)arg4;
- (void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 priority:(float)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;

@end
