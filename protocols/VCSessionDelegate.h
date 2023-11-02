
@protocol VCSessionDelegate <NSObject, VCRateAdaptationDelegate>

@required

- (void)vcSession:(VCSession *)arg1 addParticipantWithID:(NSString *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)vcSession:(VCSession *)arg1 oneToOneModeEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 participantDidStopReacting:(NSString *)arg2;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 audioPaused:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(NSString *)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 didDetectError:(NSError *)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 mediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4 didSucceed:(bool)arg5 error:(NSError *)arg6;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 mixingDidChangeForMediaType:(unsigned int)arg3 mixingMediaType:(unsigned int)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 reactionDidStart:(NSString *)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioEnabledDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteAudioPausedDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteMediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteScreenEnabledDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoEnabledDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 remoteVideoPausedDidChange:(bool)arg3;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 screenEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoEnabled:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 participantID:(NSString *)arg2 videoPaused:(bool)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSession:(VCSession *)arg1 removeParticipantWithID:(NSString *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSession:(VCSession *)arg1 updateConfiguration:(NSDictionary *)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionShouldReconnect:(VCSession *)arg1;

@end
