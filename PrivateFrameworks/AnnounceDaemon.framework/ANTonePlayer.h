
@interface ANTonePlayer : NSObject {
    AVAudioSession * _audioSession;
    NSUUID * _endpointUUID;
    id /* block */  _handler;
    NSObject<OS_os_log> * _log;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    unsigned int  _proxyAudioSessionID;
    bool  _usingProxyAudioSession;
}

@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic, readonly) NSUUID *endpointUUID;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic) unsigned int proxyAudioSessionID;
@property (nonatomic) bool usingProxyAudioSession;

- (void).cxx_destruct;
- (bool)_activateAudioSessionForPlayer:(id)arg1 error:(id*)arg2;
- (void)_callHandler:(id)arg1;
- (void)_deactivateAudioSession;
- (void)_deregisterForNotificationsWithAudioSession:(id)arg1;
- (void)_handleFailure;
- (void)_handlePlayerItemFailedToPlayToEnd:(id)arg1;
- (void)_handlePlayerItemPlayedToEnd:(id)arg1;
- (void)_playFileURL:(id)arg1;
- (void)_playSystemSoundWithFileURL:(id)arg1;
- (void)_registerForNotificationsWithAudioSession:(id)arg1;
- (id)audioSession;
- (void)audioSessionInterruptionHandler:(id)arg1;
- (void)dealloc;
- (id)endpointUUID;
- (id /* block */)handler;
- (id)initWithAudioSessionID:(unsigned int)arg1 endpointUUID:(id)arg2;
- (id)log;
- (void)playFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)player;
- (id)playerItem;
- (void)playerRateChangedHandler:(id)arg1;
- (unsigned int)proxyAudioSessionID;
- (void)setAudioSession:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setProxyAudioSessionID:(unsigned int)arg1;
- (void)setUsingProxyAudioSession:(bool)arg1;
- (void)stop;
- (bool)usingProxyAudioSession;

@end
