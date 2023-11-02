
@interface IMSendEmergencyMessage : NSObject {
    IMDaemonController<IMDaemonProtocol> * _daemon;
}

@property (nonatomic, retain) IMDaemonController<IMDaemonProtocol> *daemon;

- (void).cxx_destruct;
- (id)daemon;
- (void)daemonConnectionLost;
- (void)daemonControllerDidDisconnect;
- (void)dealloc;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)locationUpdateSent;
- (void)sendEmergencyQuestionnaire:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setUpConnectionToDaemaon;

@end
