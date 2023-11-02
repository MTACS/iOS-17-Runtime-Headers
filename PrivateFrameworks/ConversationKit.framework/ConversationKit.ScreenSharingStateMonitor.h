
@interface ConversationKit.ScreenSharingStateMonitor : NSObject <CNKScreenSharingStateMonitorProtocol> {
    void call;
    void conversationController;
    void conversationControllerProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentlySharingParticipant;
    void isBroadcastingScreenSharing;
    void observations;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } currentlySharingParticipantContentsSize;
@property (nonatomic) bool isBroadcastingScreenSharing;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)call;
- (struct CGSize { double x1; double x2; })currentlySharingParticipantContentsSize;
- (id)init;
- (bool)isBroadcastingScreenSharing;
- (void)removeObserver:(id)arg1;
- (void)setCall:(id)arg1;
- (void)setIsBroadcastingScreenSharing:(bool)arg1;

@end
