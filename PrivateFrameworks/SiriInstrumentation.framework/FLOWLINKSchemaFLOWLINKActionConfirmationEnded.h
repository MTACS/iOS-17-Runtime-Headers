
@interface FLOWLINKSchemaFLOWLINKActionConfirmationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isCorrectAction : 1; 
    }  _has;
    bool  _isCorrectAction;
}

@property (nonatomic) bool hasIsCorrectAction;
@property (nonatomic) bool isCorrectAction;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsCorrectAction;
- (id)dictionaryRepresentation;
- (bool)hasIsCorrectAction;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCorrectAction;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCorrectAction:(bool)arg1;
- (void)setIsCorrectAction:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
