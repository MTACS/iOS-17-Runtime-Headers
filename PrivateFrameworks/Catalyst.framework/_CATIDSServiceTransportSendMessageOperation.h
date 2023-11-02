
@interface _CATIDSServiceTransportSendMessageOperation : CATOperation {
    CATIDSServiceConnection * mConnection;
    CATMessage * mMessage;
    CATIDSServiceTransport * mTransport;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)didSendDataWithError:(id)arg1;
- (id)initWithConnection:(id)arg1 message:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)sendData;

@end
