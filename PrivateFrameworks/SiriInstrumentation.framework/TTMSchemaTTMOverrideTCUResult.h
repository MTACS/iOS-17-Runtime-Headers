
@interface TTMSchemaTTMOverrideTCUResult : SISchemaInstrumentationMessage {
    struct { 
        unsigned int recommendation : 1; 
        unsigned int overrideType : 1; 
    }  _has;
    bool  _hasTcuId;
    NSArray * _overrideResults;
    int  _overrideType;
    int  _recommendation;
    SISchemaUUID * _tcuId;
}

@property (nonatomic) bool hasOverrideType;
@property (nonatomic) bool hasRecommendation;
@property (nonatomic) bool hasTcuId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *overrideResults;
@property (nonatomic) int overrideType;
@property (nonatomic) int recommendation;
@property (nonatomic, retain) SISchemaUUID *tcuId;

- (void).cxx_destruct;
- (void)addOverrideResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearOverrideResults;
- (void)deleteOverrideResults;
- (void)deleteOverrideType;
- (void)deleteRecommendation;
- (void)deleteTcuId;
- (id)dictionaryRepresentation;
- (bool)hasOverrideType;
- (bool)hasRecommendation;
- (bool)hasTcuId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)overrideResults;
- (id)overrideResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)overrideResultsCount;
- (int)overrideType;
- (bool)readFrom:(id)arg1;
- (int)recommendation;
- (void)setHasOverrideType:(bool)arg1;
- (void)setHasRecommendation:(bool)arg1;
- (void)setHasTcuId:(bool)arg1;
- (void)setOverrideResults:(id)arg1;
- (void)setOverrideType:(int)arg1;
- (void)setRecommendation:(int)arg1;
- (void)setTcuId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tcuId;
- (void)writeTo:(id)arg1;

@end
