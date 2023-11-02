
@interface MRNotificationClient : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> * _customNotificationsQueue;
    NSOrderedSet * _errorNotifications;
    NSOrderedSet * _externalScreenNotifications;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSOrderedSet * _nowPlayingNotifications;
    NSOrderedSet * _originNotifications;
    bool  _receivesExternalScreenTypeChangedNotifications;
    bool  _receivesOriginChangedNotifications;
    bool  _receivesPlaybackErrorNotifications;
    bool  _receivesRoutesChangedNotifications;
    bool  _receivesSupportedCommandsNotifications;
    bool  _receivesVoiceInputRecordingStateNotifications;
    bool  _receivesVolumeControlNotifications;
    unsigned long long  _registeredNowPlayingObservers;
    NSOrderedSet * _routesChangedNotifications;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _subscribedWakingPlayerPaths;
    NSOrderedSet * _supportedCommandsNotifications;
    NSOrderedSet * _voiceInputNotifications;
    NSOrderedSet * _volumeControlNotifications;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) bool receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) bool receivesOriginChangedNotifications;
@property (nonatomic) bool receivesPlaybackErrorNotifications;
@property (nonatomic) bool receivesRoutesChangedNotifications;
@property (nonatomic) bool receivesSupportedCommandsNotifications;
@property (nonatomic) bool receivesVoiceInputRecordingStateNotifications;
@property (nonatomic) bool receivesVolumeControlNotifications;
@property (getter=isRegisteredForNowPlayingNotifications, nonatomic, readonly) bool registeredForNowPlayingNotifications;

+ (id)nowPlayingNotifications;

- (void).cxx_destruct;
- (bool)_postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3 withHandler:(id /* block */)arg4;
- (bool)_processAlwaysNeedsNowPlayingNotifications;
- (void)_syncWakingPlayerPathsWithReplyQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)debugDescription;
- (void)dispatchNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
- (id)init;
- (bool)isRegisteredForNowPlayingNotifications;
- (id)notificationQueue;
- (bool)postNotification:(id)arg1 userInfo:(id)arg2 object:(id)arg3;
- (bool)receivesExternalScreenTypeChangedNotifications;
- (bool)receivesOriginChangedNotifications;
- (bool)receivesPlaybackErrorNotifications;
- (bool)receivesRoutesChangedNotifications;
- (bool)receivesSupportedCommandsNotifications;
- (bool)receivesVoiceInputRecordingStateNotifications;
- (bool)receivesVolumeControlNotifications;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1;
- (void)registerForNowPlayingNotificationsWithQueue:(id)arg1 force:(bool)arg2;
- (void)registerForWakingNowPlayingNotificationsForPlayerPath:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)restoreNowPlayingClientState;
- (void)setReceivesExternalScreenTypeChangedNotifications:(bool)arg1;
- (void)setReceivesOriginChangedNotifications:(bool)arg1;
- (void)setReceivesPlaybackErrorNotifications:(bool)arg1;
- (void)setReceivesRoutesChangedNotifications:(bool)arg1;
- (void)setReceivesSupportedCommandsNotifications:(bool)arg1;
- (void)setReceivesVoiceInputRecordingStateNotifications:(bool)arg1;
- (void)setReceivesVolumeControlNotifications:(bool)arg1;
- (void)unregisterForNowPlayingNotifications;
- (void)unregisterForWakingNowPlayingNotificationsForPlayerPath:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;

@end
