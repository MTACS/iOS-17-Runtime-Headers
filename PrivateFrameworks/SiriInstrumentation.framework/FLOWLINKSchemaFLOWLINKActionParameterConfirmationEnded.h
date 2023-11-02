
@interface FLOWLINKSchemaFLOWLINKActionParameterConfirmationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isCorrectParameter : 1; 
    }  _has;
    bool  _isCorrectParameter;
}

@property (nonatomic) bool hasIsCorrectParameter;
@property (nonatomic) bool isCorrectParameter;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsCorrectParameter;
- (id)dictionaryRepresentation;
- (bool)hasIsCorrectParameter;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCorrectParameter;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCorrectParameter:(bool)arg1;
- (void)setIsCorrectParameter:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
