
@interface MWTSchemaMWTCheckpointReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int stepType : 1; 
    }  _has;
    int  _stepType;
}

@property (nonatomic) bool hasStepType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int stepType;

- (void)deleteStepType;
- (id)dictionaryRepresentation;
- (bool)hasStepType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasStepType:(bool)arg1;
- (void)setStepType:(int)arg1;
- (int)stepType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
