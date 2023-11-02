
@interface TTMSchemaTTMOverrideRequestFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    NSArray * _tcuFailures;
}

@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSArray *tcuFailures;

- (void).cxx_destruct;
- (void)addTcuFailures:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTcuFailures;
- (void)deleteReason;
- (void)deleteTcuFailures;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setTcuFailures:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tcuFailures;
- (id)tcuFailuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)tcuFailuresCount;
- (void)writeTo:(id)arg1;

@end
