
@interface SISchemaRawSpeechProfileData : SISchemaInstrumentationMessage {
    bool  _hasR;
    NSData * _r;
}

@property (nonatomic) bool hasR;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *r;

- (void).cxx_destruct;
- (void)deleteR;
- (id)dictionaryRepresentation;
- (bool)hasR;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)r;
- (bool)readFrom:(id)arg1;
- (void)setHasR:(bool)arg1;
- (void)setR:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
