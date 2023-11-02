
@interface DODMLASRSchemaDODMLASRAudioFileResultTier1 : SISchemaInstrumentationMessage {
    bool  _hasRecognitionResult;
    ASRSchemaASRRecognitionResultTier1 * _recognitionResult;
}

@property (nonatomic) bool hasRecognitionResult;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ASRSchemaASRRecognitionResultTier1 *recognitionResult;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRecognitionResult;
- (id)dictionaryRepresentation;
- (bool)hasRecognitionResult;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)recognitionResult;
- (void)setHasRecognitionResult:(bool)arg1;
- (void)setRecognitionResult:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
