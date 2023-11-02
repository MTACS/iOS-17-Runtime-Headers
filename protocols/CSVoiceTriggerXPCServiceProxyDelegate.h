
@protocol CSVoiceTriggerXPCServiceProxyDelegate <NSObject>

@required

- (void)CSVoiceTriggerXPCServiceProxy:(CSVoiceTriggerXPCServiceProxy *)arg1 bypassPhraseSpotter:(bool)arg2;
- (void)CSVoiceTriggerXPCServiceProxy:(CSVoiceTriggerXPCServiceProxy *)arg1 bypassRaiseToSpeak:(bool)arg2;

@end
