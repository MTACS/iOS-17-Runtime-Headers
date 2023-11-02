
@interface ASRSchemaASREnded : SISchemaInstrumentationMessage {
    bool  _hasMetrics;
    ASRSchemaASRRecognitionMetrics * _metrics;
}

@property (nonatomic) bool hasMetrics;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ASRSchemaASRRecognitionMetrics *metrics;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMetrics;
- (id)dictionaryRepresentation;
- (bool)hasMetrics;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metrics;
- (bool)readFrom:(id)arg1;
- (void)setHasMetrics:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
