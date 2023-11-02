
@interface SFIndexState : NSObject <NSCopying, NSSecureCoding, SFIndexState> {
    NSNumber * _indexedMessageCount;
    NSNumber * _percentAttachmentsIndexed;
    NSNumber * _percentMessagesIndexed;
    NSNumber * _searchIndex;
    NSNumber * _totalMessageCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *indexedMessageCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *percentAttachmentsIndexed;
@property (nonatomic, copy) NSNumber *percentMessagesIndexed;
@property (nonatomic, copy) NSNumber *searchIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *totalMessageCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexedMessageCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)percentAttachmentsIndexed;
- (id)percentMessagesIndexed;
- (id)searchIndex;
- (void)setIndexedMessageCount:(id)arg1;
- (void)setPercentAttachmentsIndexed:(id)arg1;
- (void)setPercentMessagesIndexed:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setTotalMessageCount:(id)arg1;
- (id)totalMessageCount;

@end
