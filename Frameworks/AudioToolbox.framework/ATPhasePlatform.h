
@interface ATPhasePlatform : NSObject <PHASEPlatform> {
    id  _roomCongruenceInterface;
    struct unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> { 
        struct __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> { 
            struct ServerManager {} *__value_; 
        } __ptr_; 
    }  _serverManager;
    id  _sessionInterface;
    id  _tapInterface;
}

@property (nonatomic, readonly) unsigned int bufferFrameSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool running;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) <PHASESessionInterface> *sessionInterface;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PHASETapInterface> *tapInterface;
@property (nonatomic, readonly) OS_os_workgroup *workgroup;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateSession:(unsigned int)arg1 activate:(bool)arg2;
- (bool)applyVolumeOnAllSessions;
- (bool)applyVolumeOnSession:(unsigned int)arg1;
- (bool)applyVolumeOnVolumeCategory:(id)arg1 mode:(id)arg2 value:(float)arg3;
- (unsigned int)bufferFrameSize;
- (void)dealloc;
- (unsigned int)deviceLatencyInFramesForDirection:(unsigned char)arg1;
- (bool)enableIO:(bool)arg1 direction:(unsigned char)arg2;
- (int)fadeClientsInSession:(unsigned int)arg1 activating:(bool)arg2 fadeLevel:(float)arg3 fadeTime:(float)arg4;
- (id)init;
- (void*)lazyInitServerManager;
- (id)lazyInitSessionInterface;
- (int)muteAudioSessionBidirectional:(unsigned int)arg1 mute:(bool)arg2 fadeTime:(float)arg3;
- (int)muteSessionInput:(unsigned int)arg1 mute:(bool)arg2 fadeTime:(float)arg3;
- (unsigned int)numberOfStreamsForDirection:(unsigned char)arg1;
- (void)refreshInputMuteOnAllSessions:(float)arg1;
- (bool)registerIOBlock:(id /* block */)arg1;
- (bool)registerOverloadNotification:(id /* block */)arg1;
- (bool)registerRouteChangeNotification:(id /* block */)arg1;
- (void)registerTapInterface:(id)arg1;
- (bool)running;
- (double)sampleRate;
- (id)sessionInterface;
- (bool)start;
- (bool)stop;
- (id)streamInfoForIndex:(unsigned int)arg1 direction:(unsigned char)arg2;
- (id)tapInterface;
- (float)volumeScalarMappedToHWCurve:(float)arg1;
- (id)workgroup;

@end
