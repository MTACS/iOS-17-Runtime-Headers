
@interface ASRSchemaASRRecognitionResult : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _phrases;
    NSArray * _utterances;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *phrases;
@property (nonatomic, copy) NSArray *utterances;

- (void).cxx_destruct;
- (void)addPhrases:(id)arg1;
- (void)addUtterances:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearPhrases;
- (void)clearUtterances;
- (void)deleteLinkId;
- (void)deletePhrases;
- (void)deleteUtterances;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)phrases;
- (id)phrasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)phrasesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setPhrases:(id)arg1;
- (void)setUtterances:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)utterances;
- (id)utterancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)utterancesCount;
- (void)writeTo:(id)arg1;

@end
