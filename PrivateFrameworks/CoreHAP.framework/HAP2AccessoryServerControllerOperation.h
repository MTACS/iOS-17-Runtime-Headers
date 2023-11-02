
@interface HAP2AccessoryServerControllerOperation : HAP2AsynchronousOperation <HMFTimerDelegate> {
    bool  _attemptedSessionRefresh;
    HAP2AccessoryServerController * _controller;
    <HAP2AccessoryServerEncoding> * _encoding;
    <HAP2AccessoryServerTransportRequestEndpoint> * _endpoint;
    NSString * _mimeType;
    unsigned long long  _options;
    <HAP2EncodedRequest> * _request;
    <HAP2EncodedResponse> * _response;
    double  _timeout;
    HMFTimer * _timer;
    <HAP2AccessoryServerTransportCommon> * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_openTransport:(bool)arg1;
- (void)_parseResponseData:(id)arg1;
- (void)_sendRequest;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 request:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9;
- (void)main;
- (void)timerDidFire:(id)arg1;

@end
