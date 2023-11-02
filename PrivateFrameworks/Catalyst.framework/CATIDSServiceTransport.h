
@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection * mConnection;
    bool  mDidDelegateInvalidation;
    bool  mIsActive;
    NSMutableArray * mReceiveQueue;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 receivedData:(id)arg2;
- (void)connectionClosed:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidateConnection;
- (id)name;
- (id)operationToSendMessage:(id)arg1;
- (void)resumeConnection;
- (void)serviceReceiveQueue;
- (void)suspendConnection;
- (void)tryReportingInvalidation;

@end
