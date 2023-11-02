
@interface HAP2AccessoryServerControllerTimedWriteOperation : HAP2AccessoryServerControllerOperation {
    <HAP2EncodedRequest> * _executeRequest;
}

@property (nonatomic, readonly) <HAP2EncodedRequest> *executeRequest;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_parseExecuteResponseData:(id)arg1;
- (void)_parsePrepareResponseData:(id)arg1;
- (void)_parseResponseData:(id)arg1;
- (void)_sendExecuteRequest;
- (void)_sendPrepareRequest;
- (void)_sendRequest;
- (id)executeRequest;
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 prepareRequest:(id)arg5 executeRequest:(id)arg6 endpoint:(id)arg7 mimeType:(id)arg8 timeout:(double)arg9 options:(unsigned long long)arg10;

@end
