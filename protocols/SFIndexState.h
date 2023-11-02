
@protocol SFIndexState <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSNumber *)indexedMessageCount;
- (NSData *)jsonData;
- (NSNumber *)percentAttachmentsIndexed;
- (NSNumber *)percentMessagesIndexed;
- (NSNumber *)searchIndex;
- (void)setIndexedMessageCount:(NSNumber *)arg1;
- (void)setPercentAttachmentsIndexed:(NSNumber *)arg1;
- (void)setPercentMessagesIndexed:(NSNumber *)arg1;
- (void)setSearchIndex:(NSNumber *)arg1;
- (void)setTotalMessageCount:(NSNumber *)arg1;
- (NSNumber *)totalMessageCount;

@end
