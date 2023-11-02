
@protocol _INPBPlayAudioMessageIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasMessageIdentifier;
- (_INPBIntentMetadata *)intentMetadata;
- (NSString *)messageIdentifier;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMessageIdentifier:(NSString *)arg1;

@end
