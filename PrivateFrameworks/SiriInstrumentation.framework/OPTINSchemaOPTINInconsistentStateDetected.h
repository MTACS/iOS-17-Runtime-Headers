
@interface OPTINSchemaOPTINInconsistentStateDetected : SISchemaInstrumentationMessage {
    struct { 
        unsigned int inconsistencyCondition : 1; 
        unsigned int inconsistencyTrigger : 1; 
    }  _has;
    int  _inconsistencyCondition;
    int  _inconsistencyTrigger;
}

@property (nonatomic) bool hasInconsistencyCondition;
@property (nonatomic) bool hasInconsistencyTrigger;
@property (nonatomic) int inconsistencyCondition;
@property (nonatomic) int inconsistencyTrigger;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteInconsistencyCondition;
- (void)deleteInconsistencyTrigger;
- (id)dictionaryRepresentation;
- (bool)hasInconsistencyCondition;
- (bool)hasInconsistencyTrigger;
- (unsigned long long)hash;
- (int)inconsistencyCondition;
- (int)inconsistencyTrigger;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInconsistencyCondition:(bool)arg1;
- (void)setHasInconsistencyTrigger:(bool)arg1;
- (void)setInconsistencyCondition:(int)arg1;
- (void)setInconsistencyTrigger:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
