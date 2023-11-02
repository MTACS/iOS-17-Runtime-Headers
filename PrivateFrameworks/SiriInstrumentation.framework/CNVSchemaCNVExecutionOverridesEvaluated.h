
@interface CNVSchemaCNVExecutionOverridesEvaluated : SISchemaInstrumentationMessage {
    int  _executionOverrideDecision;
    struct { 
        unsigned int executionOverrideDecision : 1; 
    }  _has;
}

@property (nonatomic) int executionOverrideDecision;
@property (nonatomic) bool hasExecutionOverrideDecision;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteExecutionOverrideDecision;
- (id)dictionaryRepresentation;
- (int)executionOverrideDecision;
- (bool)hasExecutionOverrideDecision;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExecutionOverrideDecision:(int)arg1;
- (void)setHasExecutionOverrideDecision:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
