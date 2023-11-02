
@protocol AVCSessionParticipantDelegate <NSObject>

@optional

- (void)participant:(AVCSessionParticipant *)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 didReact:(NSString *)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 mediaPrioritiesDidChange:(NSDictionary *)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)participant:(AVCSessionParticipant *)arg1 mixingDidStartForMediaType:(unsigned int)arg2 mixingMediaType:(unsigned int)arg3;
- (void)participant:(AVCSessionParticipant *)arg1 mixingDidStopForMediaType:(unsigned int)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteAudioPausedDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;
- (void)participant:(AVCSessionParticipant *)arg1 remoteScreenEnabledDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 remoteVideoPausedDidChange:(bool)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 screenEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 spatialAudioSourceIDDidChange:(unsigned long long)arg2;
- (void)participant:(AVCSessionParticipant *)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participant:(AVCSessionParticipant *)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)participantDidStopReacting:(AVCSessionParticipant *)arg1;

@end
