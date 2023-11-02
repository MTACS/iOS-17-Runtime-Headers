
@interface NTPBTopicsFollowed : PBCodable <NSCopying> {
    NSString * _topicGroupingId;
    NSMutableArray * _topicIds;
}

@property (nonatomic, readonly) bool hasTopicGroupingId;
@property (nonatomic, retain) NSString *topicGroupingId;
@property (nonatomic, retain) NSMutableArray *topicIds;

+ (Class)topicIdType;

- (void).cxx_destruct;
- (void)addTopicId:(id)arg1;
- (void)clearTopicIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTopicGroupingId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTopicGroupingId:(id)arg1;
- (void)setTopicIds:(id)arg1;
- (id)topicGroupingId;
- (id)topicIdAtIndex:(unsigned long long)arg1;
- (id)topicIds;
- (unsigned long long)topicIdsCount;
- (void)writeTo:(id)arg1;

@end
