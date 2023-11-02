
@protocol _INPBUnsendMessagesIntent <NSObject>

@required

- (void)addMessageIdentifiers:(NSString *)arg1;
- (void)clearMessageIdentifiers;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)messageIdentifiers;
- (NSString *)messageIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageIdentifiersCount;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMessageIdentifiers:(NSArray *)arg1;

@end
