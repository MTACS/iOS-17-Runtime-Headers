
@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying> {
    NSMutableArray * _topics;
}

@property (nonatomic, retain) NSMutableArray *topics;

+ (Class)topicsType;

- (void).cxx_destruct;
- (void)addTopics:(id)arg1;
- (void)clearTopics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;
- (void)writeTo:(id)arg1;

@end
