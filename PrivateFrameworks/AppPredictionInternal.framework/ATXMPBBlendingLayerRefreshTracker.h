
@interface ATXMPBBlendingLayerRefreshTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _clientModelId;
    unsigned int  _computationTime;
    NSString * _consumerSubType;
    struct { 
        unsigned int computationTime : 1; 
        unsigned int interarrivalTime : 1; 
    }  _has;
    unsigned int  _interarrivalTime;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic) unsigned int computationTime;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic) bool hasComputationTime;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasInterarrivalTime;
@property (nonatomic) unsigned int interarrivalTime;

- (void).cxx_destruct;
- (id)abGroup;
- (id)clientModelId;
- (unsigned int)computationTime;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasClientModelId;
- (bool)hasComputationTime;
- (bool)hasConsumerSubType;
- (bool)hasInterarrivalTime;
- (unsigned long long)hash;
- (unsigned int)interarrivalTime;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setComputationTime:(unsigned int)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setHasComputationTime:(bool)arg1;
- (void)setHasInterarrivalTime:(bool)arg1;
- (void)setInterarrivalTime:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
