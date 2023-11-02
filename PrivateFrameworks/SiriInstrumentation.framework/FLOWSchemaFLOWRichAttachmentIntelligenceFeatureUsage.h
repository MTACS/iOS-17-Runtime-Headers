
@interface FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage : SISchemaInstrumentationMessage {
    NSArray * _isReadingIntelligenceAttempteds;
    NSArray * _isReadingIntelligenceUseds;
}

@property (nonatomic, copy) NSArray *isReadingIntelligenceAttempteds;
@property (nonatomic, copy) NSArray *isReadingIntelligenceUseds;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addIsReadingIntelligenceAttempted:(bool)arg1;
- (void)addIsReadingIntelligenceUsed:(bool)arg1;
- (void)clearIsReadingIntelligenceAttempted;
- (void)clearIsReadingIntelligenceUsed;
- (void)deleteIsReadingIntelligenceAttempted;
- (void)deleteIsReadingIntelligenceUsed;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReadingIntelligenceAttemptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)isReadingIntelligenceAttemptedCount;
- (id)isReadingIntelligenceAttempteds;
- (bool)isReadingIntelligenceUsedAtIndex:(unsigned long long)arg1;
- (unsigned long long)isReadingIntelligenceUsedCount;
- (id)isReadingIntelligenceUseds;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setIsReadingIntelligenceAttempteds:(id)arg1;
- (void)setIsReadingIntelligenceUseds:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
