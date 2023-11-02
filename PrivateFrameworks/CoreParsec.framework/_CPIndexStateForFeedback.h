
@interface _CPIndexStateForFeedback : PBCodable <NSSecureCoding, _CPIndexStateForFeedback> {
    int  _indexedMessageCount;
    int  _percentAttachmentsIndexed;
    int  _percentMessagesIndexed;
    int  _searchIndex;
    int  _totalMessageCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int indexedMessageCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int percentAttachmentsIndexed;
@property (nonatomic) int percentMessagesIndexed;
@property (nonatomic) int searchIndex;
@property (readonly) Class superclass;
@property (nonatomic) int totalMessageCount;

- (unsigned long long)hash;
- (int)indexedMessageCount;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)percentAttachmentsIndexed;
- (int)percentMessagesIndexed;
- (bool)readFrom:(id)arg1;
- (int)searchIndex;
- (void)setIndexedMessageCount:(int)arg1;
- (void)setPercentAttachmentsIndexed:(int)arg1;
- (void)setPercentMessagesIndexed:(int)arg1;
- (void)setSearchIndex:(int)arg1;
- (void)setTotalMessageCount:(int)arg1;
- (int)totalMessageCount;
- (void)writeTo:(id)arg1;

@end
