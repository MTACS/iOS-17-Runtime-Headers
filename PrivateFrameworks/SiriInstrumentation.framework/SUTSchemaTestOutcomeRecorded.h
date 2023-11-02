
@interface SUTSchemaTestOutcomeRecorded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int testOutcome : 1; 
    }  _has;
    int  _testOutcome;
}

@property (nonatomic) bool hasTestOutcome;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int testOutcome;

- (void)deleteTestOutcome;
- (id)dictionaryRepresentation;
- (bool)hasTestOutcome;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTestOutcome:(bool)arg1;
- (void)setTestOutcome:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)testOutcome;
- (void)writeTo:(id)arg1;

@end
