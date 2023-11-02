
@interface FLOWSchemaFLOWSmsAudioContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int messageDurationMs : 1; 
    }  _has;
    unsigned int  _messageDurationMs;
}

@property (nonatomic) bool hasMessageDurationMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int messageDurationMs;

- (void)deleteMessageDurationMs;
- (id)dictionaryRepresentation;
- (bool)hasMessageDurationMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)messageDurationMs;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageDurationMs:(bool)arg1;
- (void)setMessageDurationMs:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
