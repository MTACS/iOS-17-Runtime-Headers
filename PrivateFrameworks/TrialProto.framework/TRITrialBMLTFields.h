
@interface TRITrialBMLTFields : PBCodable <NSCopying> {
    NSString * _clientBmltFactorPackSetId;
    NSString * _clientBmltId;
    int  _clientBmltTargetingRuleGroupOrdinal;
    struct { 
        unsigned int clientBmltTargetingRuleGroupOrdinal : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *clientBmltFactorPackSetId;
@property (nonatomic, retain) NSString *clientBmltId;
@property (nonatomic) int clientBmltTargetingRuleGroupOrdinal;
@property (nonatomic, readonly) bool hasClientBmltFactorPackSetId;
@property (nonatomic, readonly) bool hasClientBmltId;
@property (nonatomic) bool hasClientBmltTargetingRuleGroupOrdinal;

- (void).cxx_destruct;
- (id)clientBmltFactorPackSetId;
- (id)clientBmltId;
- (int)clientBmltTargetingRuleGroupOrdinal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientBmltFactorPackSetId;
- (bool)hasClientBmltId;
- (bool)hasClientBmltTargetingRuleGroupOrdinal;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientBmltFactorPackSetId:(id)arg1;
- (void)setClientBmltId:(id)arg1;
- (void)setClientBmltTargetingRuleGroupOrdinal:(int)arg1;
- (void)setHasClientBmltTargetingRuleGroupOrdinal:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
