
@protocol INRunVoiceCommandIntentExport <NSObject, JSExport>

@required

- (INIntentExecutionResult *)executionResult;
- (id)init;
- (INVoiceCommandDeviceInformation *)originDevice;
- (NSString *)previousIntentIdentifier;
- (void)setExecutionResult:(INIntentExecutionResult *)arg1;
- (void)setOriginDevice:(INVoiceCommandDeviceInformation *)arg1;
- (void)setPreviousIntentIdentifier:(NSString *)arg1;
- (void)setVoiceCommand:(INSpeakableString *)arg1;
- (INSpeakableString *)voiceCommand;

@end
