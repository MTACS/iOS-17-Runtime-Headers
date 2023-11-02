
@interface VCSessionManager : NSObject <VCSessionDelegate> {
    bool  _screenAndCameraMixingEnabled;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    NSMutableDictionary * _sessions;
    bool  _sharingEnabled;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool screenAndCameraMixingEnabled;
@property (nonatomic, readonly) NSMutableDictionary *sessions;
@property (nonatomic) bool sharingEnabled;
@property (readonly) Class superclass;

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (id)sharedInstance;

- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (id)participantConfigFromXPCDictionary:(id)arg1;
- (void)registerBlocksForService;
- (void)releaseSession:(id)arg1;
- (bool)screenAndCameraMixingEnabled;
- (id)sessionForStreamToken:(unsigned int)arg1;
- (id)sessionForUUID:(id)arg1;
- (id)sessions;
- (void)setScreenAndCameraMixingEnabled:(bool)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (bool)sharingEnabled;
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;
- (void)vcSession:(id)arg1 downlinkRateAdaptationDidChangeWithInfo:(id)arg2;
- (void)vcSession:(id)arg1 oneToOneModeEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 participantDidStopReacting:(id)arg2;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(bool)arg3 didSucceed:(bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(id)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 mediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4 didSucceed:(bool)arg5 error:(id)arg6;
- (void)vcSession:(id)arg1 participantID:(id)arg2 mixingDidChangeForMediaType:(unsigned int)arg3 mixingMediaType:(unsigned int)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 reactionDidStart:(id)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteMediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteScreenEnabledDidChange:(bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(bool)arg3;
- (void)vcSession:(id)arg1 participantID:(id)arg2 screenEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(bool)arg3 didSucceed:(bool)arg4 error:(id)arg5;
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(bool)arg3 error:(id)arg4;
- (void)vcSession:(id)arg1 uplinkRateAdaptationDidChangeWithInfo:(id)arg2;
- (void)vcSessionShouldReconnect:(id)arg1;

@end
