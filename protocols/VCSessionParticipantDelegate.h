
@protocol VCSessionParticipantDelegate <VCServerDelegate>

@required

- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeActualNetworkBitrateForStreamGroupID:(unsigned int)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeMediaPriority:(unsigned char)arg2 description:(NSString *)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didDetectError:(NSError *)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didRequestVideoRedundancy:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 mediaMixingDidChangeForMediaType:(unsigned int)arg2 mixingMediaType:(unsigned int)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 mediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3 didSucceed:(bool)arg4 error:(NSError *)arg5;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 oneToOneModeDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 reactionDidStart:(NSString *)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteMediaStateDidChange:(unsigned int)arg2 forMediaType:(unsigned int)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteScreenEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoPausedDidChange:(bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 streamGroupID:(unsigned int)arg3 firType:(int)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 screenEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoEnabled:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoPaused:(bool)arg2 didSucceed:(bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipantDidChangeReceivingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeSendingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidMediaDecryptionTimeOutForMKMRecovery:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidRemoteMediaStallTimeout:(VCSessionParticipant *)arg1 duration:(double)arg2;
- (void)vcSessionParticipantDidStopReacting:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantFetchStreamGroupState:(VCSessionParticipant *)arg1;

@end
