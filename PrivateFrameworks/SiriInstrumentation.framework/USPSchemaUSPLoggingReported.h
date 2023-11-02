
@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage {
    NSArray * _metrics;
    NSArray * _sessionInfoItems;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *metrics;
@property (nonatomic, copy) NSArray *sessionInfoItems;

- (void).cxx_destruct;
- (void)addMetrics:(id)arg1;
- (void)addSessionInfoItems:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMetrics;
- (void)clearSessionInfoItems;
- (void)deleteMetrics;
- (void)deleteSessionInfoItems;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metrics;
- (id)metricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)metricsCount;
- (bool)readFrom:(id)arg1;
- (id)sessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sessionInfoItemsCount;
- (void)setMetrics:(id)arg1;
- (void)setSessionInfoItems:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
