
@protocol _INPBRunVoiceCommandIntent <NSObject>

@required

- (_INPBIntentExecutionResult *)executionResult;
- (bool)hasExecutionResult;
- (bool)hasIntentMetadata;
- (bool)hasOriginDevice;
- (bool)hasPreviousIntentIdentifier;
- (bool)hasVoiceCommand;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBVoiceCommandDeviceInformation *)originDevice;
- (NSString *)previousIntentIdentifier;
- (void)setExecutionResult:(_INPBIntentExecutionResult *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setOriginDevice:(_INPBVoiceCommandDeviceInformation *)arg1;
- (void)setPreviousIntentIdentifier:(NSString *)arg1;
- (void)setVoiceCommand:(_INPBDataString *)arg1;
- (_INPBDataString *)voiceCommand;

@end
