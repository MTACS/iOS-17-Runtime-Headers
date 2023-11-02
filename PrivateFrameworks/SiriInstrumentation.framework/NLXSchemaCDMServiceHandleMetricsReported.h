
@interface NLXSchemaCDMServiceHandleMetricsReported : SISchemaInstrumentationMessage {
    NSArray * _handleMetrics;
}

@property (nonatomic, copy) NSArray *handleMetrics;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addHandleMetrics:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearHandleMetrics;
- (void)deleteHandleMetrics;
- (id)dictionaryRepresentation;
- (id)handleMetrics;
- (id)handleMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)handleMetricsCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHandleMetrics:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
