
@interface DIDropInSessionManager : NSObject <DISessionStatusDelegate, DIXPCManagerCheckInObserver> {
    DIDropInSession * _activeSession;
    DIXPCConnectionManager * _connectionManager;
    <DIDropInSessionManagerDelegate> * _delegate;
    DIDropInSession * _incomingPendingSession;
}

@property (nonatomic, retain) DIDropInSession *activeSession;
@property (nonatomic, readonly) DIXPCConnectionManager *connectionManager;
@property (nonatomic) <DIDropInSessionManagerDelegate> *delegate;
@property (nonatomic, copy) DIDropInSession *incomingPendingSession;

- (void).cxx_destruct;
- (id)activeSession;
- (id)connectionManager;
- (id)delegate;
- (void)didAddSession:(id)arg1;
- (void)didRemoveSession:(id)arg1;
- (void)didUpdateSession:(id)arg1;
- (id)incomingPendingSession;
- (id)initWithConnectionManager:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateUplinkMuteStatus:(bool)arg2;
- (void)setActiveSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncomingPendingSession:(id)arg1;
- (void)xpcManagerDidPerformDaemonCheckIn:(id)arg1;

@end
