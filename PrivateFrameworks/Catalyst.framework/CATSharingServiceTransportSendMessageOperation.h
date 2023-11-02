
@interface CATSharingServiceTransportSendMessageOperation : CATOperation {
    <CATSharingConnection> * mConnection;
    CATMessage * mMessage;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)didSendMessageWithError:(id)arg1;
- (id)initWithConnection:(id)arg1 message:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)sendMessage;

@end
