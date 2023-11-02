
@interface ATXMPBBlendingClientModelEngagementClientCacheAgeTracker : PBCodable <NSCopying> {
    NSString * _clientModelABGroup;
    NSString * _clientModelId;
    NSString * _consumerSubType;
    struct { 
        unsigned int outcomeType : 1; 
    }  _has;
    int  _outcomeType;
}

@property (nonatomic, retain) NSString *clientModelABGroup;
@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasClientModelABGroup;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasOutcomeType;
@property (nonatomic) int outcomeType;

- (void).cxx_destruct;
- (int)StringAsOutcomeType:(id)arg1;
- (id)clientModelABGroup;
- (id)clientModelId;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientModelABGroup;
- (bool)hasClientModelId;
- (bool)hasConsumerSubType;
- (bool)hasOutcomeType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outcomeType;
- (id)outcomeTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientModelABGroup:(id)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setHasOutcomeType:(bool)arg1;
- (void)setOutcomeType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
