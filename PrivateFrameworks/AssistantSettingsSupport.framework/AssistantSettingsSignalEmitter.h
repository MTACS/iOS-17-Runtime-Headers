
@interface AssistantSettingsSignalEmitter : NSObject

- (void)_emitDiscoverabilitySignalEventForIdentifier:(id)arg1;
- (void)emitCallHangUpEnabledSignal;
- (void)emitDidSelectVoiceSignal;

@end
