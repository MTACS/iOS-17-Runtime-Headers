
@interface IMAssistantMessagePlayMessageSoundHandler : IMAssistantMessageQueryHandler <INPlayMessageSoundIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handlePlayMessageSound:(id)arg1 completion:(id /* block */)arg2;
- (id)playSendSoundForMessageGUID:(id)arg1;

@end
