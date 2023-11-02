
@interface TRITrialRolloutFields : PBCodable <NSCopying> {
    NSString * _clientFactorPackSetId;
    NSString * _clientRampId;
    NSString * _clientRolloutId;
    int  _clientTargetingRuleGroupOrdinal;
    struct { 
        unsigned int clientTargetingRuleGroupOrdinal : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *clientFactorPackSetId;
@property (nonatomic, retain) NSString *clientRampId;
@property (nonatomic, retain) NSString *clientRolloutId;
@property (nonatomic) int clientTargetingRuleGroupOrdinal;
@property (nonatomic, readonly) bool hasClientFactorPackSetId;
@property (nonatomic, readonly) bool hasClientRampId;
@property (nonatomic, readonly) bool hasClientRolloutId;
@property (nonatomic) bool hasClientTargetingRuleGroupOrdinal;

- (void).cxx_destruct;
- (id)clientFactorPackSetId;
- (id)clientRampId;
- (id)clientRolloutId;
- (int)clientTargetingRuleGroupOrdinal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientFactorPackSetId;
- (bool)hasClientRampId;
- (bool)hasClientRolloutId;
- (bool)hasClientTargetingRuleGroupOrdinal;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientFactorPackSetId:(id)arg1;
- (void)setClientRampId:(id)arg1;
- (void)setClientRolloutId:(id)arg1;
- (void)setClientTargetingRuleGroupOrdinal:(int)arg1;
- (void)setHasClientTargetingRuleGroupOrdinal:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
