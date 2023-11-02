
@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying> {
    HMEProtoEventInfo * _connectEvent;
    struct { 
        unsigned int routerVersion : 1; 
    }  _has;
    unsigned int  _routerVersion;
    NSMutableArray * _topicAdditions;
    NSMutableArray * _topicFilterAdditions;
    HMEProtoEventInfo * _unregisterEvent;
}

@property (nonatomic, retain) HMEProtoEventInfo *connectEvent;
@property (nonatomic, readonly) bool hasConnectEvent;
@property (nonatomic) bool hasRouterVersion;
@property (nonatomic, readonly) bool hasUnregisterEvent;
@property (nonatomic) unsigned int routerVersion;
@property (nonatomic, retain) NSMutableArray *topicAdditions;
@property (nonatomic, retain) NSMutableArray *topicFilterAdditions;
@property (nonatomic, retain) HMEProtoEventInfo *unregisterEvent;

+ (Class)topicAdditionsType;
+ (Class)topicFilterAdditionsType;

- (void).cxx_destruct;
- (void)addTopicAdditions:(id)arg1;
- (void)addTopicFilterAdditions:(id)arg1;
- (void)clearTopicAdditions;
- (void)clearTopicFilterAdditions;
- (id)connectEvent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectEvent;
- (bool)hasRouterVersion;
- (bool)hasUnregisterEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routerVersion;
- (void)setConnectEvent:(id)arg1;
- (void)setHasRouterVersion:(bool)arg1;
- (void)setRouterVersion:(unsigned int)arg1;
- (void)setTopicAdditions:(id)arg1;
- (void)setTopicFilterAdditions:(id)arg1;
- (void)setUnregisterEvent:(id)arg1;
- (id)topicAdditions;
- (id)topicAdditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicAdditionsCount;
- (id)topicFilterAdditions;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicFilterAdditionsCount;
- (id)unregisterEvent;
- (void)writeTo:(id)arg1;

@end
