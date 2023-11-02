
@interface SISchemaTextToSpeechEnd : SISchemaInstrumentationMessage {
    NSString * _aceID;
    bool  _hasAceID;
}

@property (nonatomic, copy) NSString *aceID;
@property (nonatomic) bool hasAceID;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)aceID;
- (void)deleteAceID;
- (id)dictionaryRepresentation;
- (bool)hasAceID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceID:(id)arg1;
- (void)setHasAceID:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
