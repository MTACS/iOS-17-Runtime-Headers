
@interface TTMSchemaTTMNeuralCombinerRequestFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    bool  _hasTcuId;
    int  _reason;
    SISchemaUUID * _tcuId;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasTcuId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic, retain) SISchemaUUID *tcuId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteReason;
- (void)deleteTcuId;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasTcuId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setHasTcuId:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setTcuId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tcuId;
- (void)writeTo:(id)arg1;

@end
