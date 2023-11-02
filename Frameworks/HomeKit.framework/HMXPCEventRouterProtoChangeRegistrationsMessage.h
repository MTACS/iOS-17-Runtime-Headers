
@interface HMXPCEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying> {
    NSMutableArray * _topicFilterAdditions;
    NSMutableArray * _topicFilterRemovals;
}

@property (nonatomic, retain) NSMutableArray *topicFilterAdditions;
@property (nonatomic, retain) NSMutableArray *topicFilterRemovals;

+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;

- (void).cxx_destruct;
- (void)addTopicFilterAdditions:(id)arg1;
- (void)addTopicFilterRemovals:(id)arg1;
- (void)clearTopicFilterAdditions;
- (void)clearTopicFilterRemovals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTopicFilterAdditions:(id)arg1;
- (void)setTopicFilterRemovals:(id)arg1;
- (id)topicFilterAdditions;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicFilterAdditionsCount;
- (id)topicFilterRemovals;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicFilterRemovalsCount;
- (void)writeTo:(id)arg1;

@end
