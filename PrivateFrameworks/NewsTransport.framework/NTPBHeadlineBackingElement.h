
@interface NTPBHeadlineBackingElement : PBCodable <NSCopying> {
    NSData * _articleRecordData;
    NSData * _parentIssueRecordData;
    NSData * _sourceChannelRecordData;
}

@property (nonatomic, retain) NSData *articleRecordData;
@property (nonatomic, readonly) bool hasArticleRecordData;
@property (nonatomic, readonly) bool hasParentIssueRecordData;
@property (nonatomic, readonly) bool hasSourceChannelRecordData;
@property (nonatomic, retain) NSData *parentIssueRecordData;
@property (nonatomic, retain) NSData *sourceChannelRecordData;

- (void).cxx_destruct;
- (id)articleRecordData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleRecordData;
- (bool)hasParentIssueRecordData;
- (bool)hasSourceChannelRecordData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentIssueRecordData;
- (bool)readFrom:(id)arg1;
- (void)setArticleRecordData:(id)arg1;
- (void)setParentIssueRecordData:(id)arg1;
- (void)setSourceChannelRecordData:(id)arg1;
- (id)sourceChannelRecordData;
- (void)writeTo:(id)arg1;

@end
