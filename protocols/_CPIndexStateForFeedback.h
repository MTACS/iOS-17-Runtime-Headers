
@protocol _CPIndexStateForFeedback <NSObject>

@required

- (int)indexedMessageCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)percentAttachmentsIndexed;
- (int)percentMessagesIndexed;
- (int)searchIndex;
- (void)setIndexedMessageCount:(int)arg1;
- (void)setPercentAttachmentsIndexed:(int)arg1;
- (void)setPercentMessagesIndexed:(int)arg1;
- (void)setSearchIndex:(int)arg1;
- (void)setTotalMessageCount:(int)arg1;
- (int)totalMessageCount;

@end
