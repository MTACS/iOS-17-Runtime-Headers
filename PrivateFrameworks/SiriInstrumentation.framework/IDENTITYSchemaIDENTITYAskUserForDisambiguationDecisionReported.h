
@interface IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isUserDisambiguationSkipped : 1; 
    }  _has;
    bool  _isUserDisambiguationSkipped;
}

@property (nonatomic) bool hasIsUserDisambiguationSkipped;
@property (nonatomic) bool isUserDisambiguationSkipped;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsUserDisambiguationSkipped;
- (id)dictionaryRepresentation;
- (bool)hasIsUserDisambiguationSkipped;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUserDisambiguationSkipped;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsUserDisambiguationSkipped:(bool)arg1;
- (void)setIsUserDisambiguationSkipped:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
