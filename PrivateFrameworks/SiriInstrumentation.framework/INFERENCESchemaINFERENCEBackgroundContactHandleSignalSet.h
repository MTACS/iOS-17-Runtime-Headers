
@interface INFERENCESchemaINFERENCEBackgroundContactHandleSignalSet : SISchemaInstrumentationMessage {
    struct { 
        unsigned int peopleSuggesterScore : 1; 
    }  _has;
    float  _peopleSuggesterScore;
}

@property (nonatomic) bool hasPeopleSuggesterScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float peopleSuggesterScore;

- (void)deletePeopleSuggesterScore;
- (id)dictionaryRepresentation;
- (bool)hasPeopleSuggesterScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)peopleSuggesterScore;
- (bool)readFrom:(id)arg1;
- (void)setHasPeopleSuggesterScore:(bool)arg1;
- (void)setPeopleSuggesterScore:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
