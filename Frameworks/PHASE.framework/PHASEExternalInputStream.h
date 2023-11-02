
@interface PHASEExternalInputStream : PHASEExternalStream {
    PHASEExternalInputStreamDefinition * _definition;
    bool  _mute;
    id /* block */  _mutedSpeechActivityNotificationBlock;
    id /* block */  _receiverBlock;
}

@property (nonatomic, readonly) PHASEExternalInputStreamDefinition *definition;
@property (getter=isMuted, nonatomic) bool mute;

+ (id)new;
+ (void)streamWithEngine:(id)arg1 definition:(id)arg2 startsPaused:(bool)arg3 delegate:(id)arg4 receiverBlock:(id /* block */)arg5 callback:(id /* block */)arg6;
+ (void)streamWithEngine:(id)arg1 uuid:(id)arg2 definition:(id)arg3 startsPaused:(bool)arg4 delegate:(id)arg5 receiverBlock:(id /* block */)arg6 callback:(id /* block */)arg7;

- (void).cxx_destruct;
- (id)definition;
- (id)init;
- (id)initWithStreamGroupUUID:(id)arg1 streamUUID:(id)arg2 engine:(id)arg3 streamDefinition:(id)arg4 startsPaused:(bool)arg5 delegate:(id)arg6 receiverBlock:(id /* block */)arg7;
- (bool)isMuted;
- (bool)registerMutedSpeechActivityNotification:(id /* block */)arg1 outError:(id*)arg2;
- (void)setMute:(bool)arg1;
- (void)unregisterMutedSpeechActivityNotification;

@end
