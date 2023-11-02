
@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying> {
    NSMutableArray * _topicAdditions;
    NSMutableArray * _topicFilterAdditions;
    NSMutableArray * _topicFilterRemovals;
    NSMutableArray * _topicRemovals;
}

@property (nonatomic, retain) NSMutableArray *topicAdditions;
@property (nonatomic, retain) NSMutableArray *topicFilterAdditions;
@property (nonatomic, retain) NSMutableArray *topicFilterRemovals;
@property (nonatomic, retain) NSMutableArray *topicRemovals;

+ (Class)topicAdditionsType;
+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;
+ (Class)topicRemovalsType;

- (void).cxx_destruct;
- (void)addTopicAdditions:(id)arg1;
- (void)addTopicFilterAdditions:(id)arg1;
- (void)addTopicFilterRemovals:(id)arg1;
- (void)addTopicRemovals:(id)arg1;
- (void)clearTopicAdditions;
- (void)clearTopicFilterAdditions;
- (void)clearTopicFilterRemovals;
- (void)clearTopicRemovals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTopicAdditions:(id)arg1;
- (void)setTopicFilterAdditions:(id)arg1;
- (void)setTopicFilterRemovals:(id)arg1;
- (void)setTopicRemovals:(id)arg1;
- (id)topicAdditions;
- (id)topicAdditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicAdditionsCount;
- (id)topicFilterAdditions;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicFilterAdditionsCount;
- (id)topicFilterRemovals;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicFilterRemovalsCount;
- (id)topicRemovals;
- (id)topicRemovalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicRemovalsCount;
- (void)writeTo:(id)arg1;

@end
