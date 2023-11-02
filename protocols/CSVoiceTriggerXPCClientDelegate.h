
@protocol CSVoiceTriggerXPCClientDelegate <NSObject>

@required

- (void)voiceTriggerXPCClient:(CSVoiceTriggerXPCClient *)arg1 didDisconnect:(bool)arg2;

@end
