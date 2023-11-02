
@protocol _INPBStopShareETAIntent <NSObject>

@required

+ (Class)recipientType;

- (void)addRecipient:(_INPBContact *)arg1;
- (void)clearRecipients;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (NSArray *)recipients;
- (unsigned long long)recipientsCount;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setRecipients:(NSArray *)arg1;

@end
