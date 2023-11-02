
@interface TTMSchemaTTMTCUResult : SISchemaInstrumentationMessage {
    int  _decision;
    int  _decisionSource;
    struct { 
        unsigned int decision : 1; 
        unsigned int decisionSource : 1; 
    }  _has;
    bool  _hasTcuId;
    SISchemaUUID * _tcuId;
}

@property (nonatomic) int decision;
@property (nonatomic) int decisionSource;
@property (nonatomic) bool hasDecision;
@property (nonatomic) bool hasDecisionSource;
@property (nonatomic) bool hasTcuId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *tcuId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)decision;
- (int)decisionSource;
- (void)deleteDecision;
- (void)deleteDecisionSource;
- (void)deleteTcuId;
- (id)dictionaryRepresentation;
- (bool)hasDecision;
- (bool)hasDecisionSource;
- (bool)hasTcuId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDecision:(int)arg1;
- (void)setDecisionSource:(int)arg1;
- (void)setHasDecision:(bool)arg1;
- (void)setHasDecisionSource:(bool)arg1;
- (void)setHasTcuId:(bool)arg1;
- (void)setTcuId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tcuId;
- (void)writeTo:(id)arg1;

@end
