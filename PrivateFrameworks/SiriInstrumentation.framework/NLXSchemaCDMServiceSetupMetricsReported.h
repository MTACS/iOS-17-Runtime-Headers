
@interface NLXSchemaCDMServiceSetupMetricsReported : SISchemaInstrumentationMessage {
    NSArray * _setupMetrics;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *setupMetrics;

- (void).cxx_destruct;
- (void)addSetupMetrics:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSetupMetrics;
- (void)deleteSetupMetrics;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSetupMetrics:(id)arg1;
- (id)setupMetrics;
- (id)setupMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)setupMetricsCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
