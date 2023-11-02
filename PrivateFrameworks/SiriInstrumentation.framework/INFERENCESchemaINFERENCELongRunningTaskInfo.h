
@interface INFERENCESchemaINFERENCELongRunningTaskInfo : SISchemaInstrumentationMessage {
    unsigned long long  _durationInMs;
    struct { 
        unsigned int durationInMs : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long durationInMs;
@property (nonatomic) bool hasDurationInMs;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDurationInMs;
- (id)dictionaryRepresentation;
- (unsigned long long)durationInMs;
- (bool)hasDurationInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDurationInMs:(unsigned long long)arg1;
- (void)setHasDurationInMs:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
