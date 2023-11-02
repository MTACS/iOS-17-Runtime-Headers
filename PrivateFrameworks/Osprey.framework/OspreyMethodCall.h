
@interface OspreyMethodCall : NSObject {
    <OspreyRPC> * _channel;
    id /* block */  _defaultRequestBuilder;
    id /* block */  _deserializeResponse;
    NSString * _methodName;
    id /* block */  _serializeRequest;
}

- (void).cxx_destruct;
- (id)callWithMessageReceived:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)callWithRequestBuilder:(id /* block */)arg1 messageReceived:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)initWithMethodName:(id)arg1 channel:(id)arg2 serializeRequest:(id /* block */)arg3 deserializeResponse:(id /* block */)arg4 defaultRequestBuilder:(id /* block */)arg5;

@end
