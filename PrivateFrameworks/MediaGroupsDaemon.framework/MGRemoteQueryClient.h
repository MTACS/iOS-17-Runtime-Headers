
@interface MGRemoteQueryClient : NSObject {
    <MGRemoteQueryClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSError * _error;
    unsigned long long  _expectedPayloadSize;
    NSObject<MGRemoteQueryClientHandlerProtocol> * _handler;
    bool  _invalidated;
    NSMutableData * _payload;
    bool  _processedResult;
    unsigned long long  _protocolVersion;
    NSHTTPURLResponse * _response;
    MGRemoteQueryClientTarget * _target;
    NSURLSessionDataTask * _task;
}

@property (nonatomic, readonly) <MGRemoteQueryClientDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long expectedPayloadSize;
@property (nonatomic, readonly) NSObject<MGRemoteQueryClientHandlerProtocol> *handler;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSMutableData *payload;
@property (nonatomic) bool processedResult;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic, retain) NSHTTPURLResponse *response;
@property (nonatomic, readonly) MGRemoteQueryClientTarget *target;
@property (nonatomic, readonly) NSURLSessionDataTask *task;

+ (id)clientWithHandler:(id)arg1 target:(id)arg2 dispatchQueue:(id)arg3 delegate:(id)arg4 usingSession:(id)arg5;

- (void).cxx_destruct;
- (void)_handleError:(id)arg1;
- (id)_initWithHandler:(id)arg1 target:(id)arg2 dispatchQueue:(id)arg3 delegate:(id)arg4 session:(id)arg5;
- (void)_invalidate;
- (void)_invalidated;
- (void)_prepareConnection:(id)arg1;
- (id)_prepareRequest:(id)arg1;
- (id)_prepareURL;
- (void)_responseAppend:(id)arg1;
- (void)_responseComplete;
- (void)_responseStart:(id)arg1;
- (bool)_responseValidate:(id)arg1;
- (void)completeWithError:(id)arg1;
- (void)consumeData:(id)arg1;
- (void)consumeResponse:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dispatchQueue;
- (id)error;
- (unsigned long long)expectedPayloadSize;
- (id)handler;
- (bool)invalidated;
- (id)payload;
- (bool)processedResult;
- (unsigned long long)protocolVersion;
- (id)query;
- (id)response;
- (void)setError:(id)arg1;
- (void)setExpectedPayloadSize:(unsigned long long)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setProcessedResult:(bool)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setResponse:(id)arg1;
- (id)target;
- (id)task;

@end
