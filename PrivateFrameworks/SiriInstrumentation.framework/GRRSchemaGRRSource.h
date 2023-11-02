
@interface GRRSchemaGRRSource : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sourceType : 1; 
    }  _has;
    bool  _hasSourceId;
    SISchemaUUID * _sourceId;
    int  _sourceType;
}

@property (nonatomic) bool hasSourceId;
@property (nonatomic) bool hasSourceType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sourceId;
@property (nonatomic) int sourceType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSourceId;
- (void)deleteSourceType;
- (id)dictionaryRepresentation;
- (bool)hasSourceId;
- (bool)hasSourceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSourceId:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceType:(int)arg1;
- (id)sourceId;
- (int)sourceType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end