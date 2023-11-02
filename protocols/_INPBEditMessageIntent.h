
@protocol _INPBEditMessageIntent <NSObject>

@required

- (NSString *)editedContent;
- (bool)hasEditedContent;
- (bool)hasIntentMetadata;
- (bool)hasMessageIdentifier;
- (_INPBIntentMetadata *)intentMetadata;
- (NSString *)messageIdentifier;
- (void)setEditedContent:(NSString *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMessageIdentifier:(NSString *)arg1;

@end
