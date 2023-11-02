
@protocol _INPBPlayVoicemailIntent <NSObject>

@required

- (NSString *)callRecordIdentifier;
- (bool)hasCallRecordIdentifier;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setCallRecordIdentifier:(NSString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
