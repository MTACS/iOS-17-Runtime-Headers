
@interface CDASchemaCDADeviceStateActivityStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int state : 1; 
        unsigned int trigger : 1; 
    }  _has;
    int  _state;
    int  _trigger;
}

@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTrigger;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int state;
@property (nonatomic) int trigger;

- (void)deleteState;
- (void)deleteTrigger;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTrigger:(int)arg1;
- (int)state;
- (id)suppressMessageUnderConditions;
- (int)trigger;
- (void)writeTo:(id)arg1;

@end
