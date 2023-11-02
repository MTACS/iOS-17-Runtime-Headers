
@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate, ANXPCManagerCheckInProvider, ANXPCManagerDelegate> {
    <ANLocalPlaybackSessionDelegate> * _delegate;
    ANLocalPlaybackSessionInterfaceDelegateProxy * _delegateProxy;
    NSUUID * _endpointIdentifier;
    ANXPCManager * _xpcManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANLocalPlaybackSessionDelegate> *delegate;
@property (nonatomic, readonly) ANLocalPlaybackSessionInterfaceDelegateProxy *delegateProxy;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *endpointIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *lastPlayedAnnouncementInfo;
@property (nonatomic, readonly) unsigned long long playbackState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ANXPCManager *xpcManager;

+ (id)stringForPlaybackState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)announcementsStateUpdate:(unsigned long long)arg1;
- (void)announcementsWillStartPlaying:(unsigned long long)arg1;
- (void)checkInWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateProxy;
- (void)didReceiveAnnouncement:(id)arg1 forGroupID:(id)arg2;
- (id)endpointIdentifier;
- (id)init;
- (id)initWithEndpointIdentifier:(id)arg1;
- (void)invalidate;
- (id)lastPlayedAnnouncementInfo;
- (void)lastPlayedAnnouncementInfoWithCompletion:(id /* block */)arg1;
- (void)managerDidInterruptConnection:(id)arg1;
- (void)managerDidInvalidateConnection:(id)arg1;
- (void)nextAnnouncementWithCompletionHandler:(id /* block */)arg1;
- (void)playAnnouncements;
- (void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)playbackState;
- (void)previousAnnouncementWithCompletionHandler:(id /* block */)arg1;
- (void)sendPlaybackCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)stopPlayingAnnouncements;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)arg1;
- (id)xpcManager;

@end
