
@interface ASRSchemaASRCancelled : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    bool  _hasMetrics;
    ASRSchemaASRRecognitionMetrics * _metrics;
    int  _reason;
}

@property (nonatomic) bool hasMetrics;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ASRSchemaASRRecognitionMetrics *metrics;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMetrics;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasMetrics;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metrics;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasMetrics:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
