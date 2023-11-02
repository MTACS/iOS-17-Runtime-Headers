
@interface HMDDataStreamBulkSendPendingSessionContext : NSObject {
    HMFTimer * _handleOpenRequestResponseTimer;
    HMFTimer * _sendCloseEventTimer;
    id /* block */  _sessionStartCallback;
}

@property (retain) HMFTimer *handleOpenRequestResponseTimer;
@property (retain) HMFTimer *sendCloseEventTimer;
@property (readonly) id /* block */ sessionStartCallback;
@property (readonly) bool shouldCloseSessionWithTimeoutReason;

- (void).cxx_destruct;
- (id)handleOpenRequestResponseTimer;
- (id)initWithSessionStartCallback:(id /* block */)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3;
- (id)sendCloseEventTimer;
- (id /* block */)sessionStartCallback;
- (void)setHandleOpenRequestResponseTimer:(id)arg1;
- (void)setSendCloseEventTimer:(id)arg1;
- (bool)shouldCloseSessionWithTimeoutReason;

@end
