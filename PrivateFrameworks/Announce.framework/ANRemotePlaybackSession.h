
@interface ANRemotePlaybackSession : NSObject <ANRemotePlaybackSessionServiceClientInterface, ANXPCManagerCheckInProvider, ANXPCManagerDelegate> {
    <ANRemotePlaybackSessionDelegate> * _delegate;
    ANRemotePlaybackSessionServiceClientInterfaceProxy * _delegateProxy;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    ANXPCManager * _xpcManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANRemotePlaybackSessionDelegate> *delegate;
@property (nonatomic, readonly) ANRemotePlaybackSessionServiceClientInterfaceProxy *delegateProxy;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ANXPCManager *xpcManager;

- (void).cxx_destruct;
- (void)_callHandler:(id)arg1;
- (void)checkInWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateProxy;
- (void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2;
- (void)didUpdateAnnouncements:(id)arg1 forGroupID:(id)arg2;
- (bool)endSession;
- (id /* block */)handler;
- (id)handlerQueue;
- (id)init;
- (void)invalidate;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)arg1;
- (void)managerDidInterruptConnection:(id)arg1;
- (void)managerDidInvalidateConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setPlaybackEndedForAnnouncement:(id)arg1;
- (void)setPlaybackStartedForAnnouncement:(id)arg1;
- (void)setPlaybackStoppedForAnnouncement:(id)arg1;
- (bool)startSessionForGroupID:(id)arg1 announcementsHandler:(id /* block */)arg2;
- (id)xpcManager;

@end
