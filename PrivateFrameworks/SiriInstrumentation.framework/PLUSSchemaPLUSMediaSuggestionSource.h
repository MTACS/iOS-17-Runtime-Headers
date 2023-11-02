
@interface PLUSSchemaPLUSMediaSuggestionSource : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sourceType : 1; 
    }  _has;
    int  _sourceType;
}

@property (nonatomic) bool hasSourceType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sourceType;

- (void)deleteSourceType;
- (id)dictionaryRepresentation;
- (bool)hasSourceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setSourceType:(int)arg1;
- (int)sourceType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
