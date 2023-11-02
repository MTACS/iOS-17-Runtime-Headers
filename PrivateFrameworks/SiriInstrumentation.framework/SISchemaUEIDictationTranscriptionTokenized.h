
@interface SISchemaUEIDictationTranscriptionTokenized : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numTokens : 1; 
    }  _has;
    int  _numTokens;
}

@property (nonatomic) bool hasNumTokens;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numTokens;

- (void)deleteNumTokens;
- (id)dictionaryRepresentation;
- (bool)hasNumTokens;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numTokens;
- (bool)readFrom:(id)arg1;
- (void)setHasNumTokens:(bool)arg1;
- (void)setNumTokens:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
