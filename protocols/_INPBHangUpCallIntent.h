
@protocol _INPBHangUpCallIntent <NSObject>

@required

- (NSString *)callIdentifier;
- (bool)hasCallIdentifier;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setCallIdentifier:(NSString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
