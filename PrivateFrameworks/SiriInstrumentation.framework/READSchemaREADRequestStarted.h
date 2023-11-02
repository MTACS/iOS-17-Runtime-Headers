
@interface READSchemaREADRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int trigger : 1; 
    }  _has;
    int  _trigger;
}

@property (nonatomic) bool hasTrigger;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int trigger;

- (void)deleteTrigger;
- (id)dictionaryRepresentation;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setTrigger:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)trigger;
- (void)writeTo:(id)arg1;

@end
