
@interface GRRSchemaGRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    GRRSchemaGRRClientEventMetadata * _eventMetadata;
    GRRSchemaGRRFeatureExtractionContext * _featureExtractionContext;
    bool  _hasEventMetadata;
    bool  _hasFeatureExtractionContext;
    bool  _hasHypothesisRankingContext;
    bool  _hasSystemErrorOccurred;
    GRRSchemaGRRHypothesisRankingContext * _hypothesisRankingContext;
    GRRSchemaGRRSystemErrorOccurred * _systemErrorOccurred;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) GRRSchemaGRRClientEventMetadata *eventMetadata;
@property (nonatomic, retain) GRRSchemaGRRFeatureExtractionContext *featureExtractionContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFeatureExtractionContext;
@property (nonatomic) bool hasHypothesisRankingContext;
@property (nonatomic) bool hasSystemErrorOccurred;
@property (nonatomic, retain) GRRSchemaGRRHypothesisRankingContext *hypothesisRankingContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) GRRSchemaGRRSystemErrorOccurred *systemErrorOccurred;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteFeatureExtractionContext;
- (void)deleteHypothesisRankingContext;
- (void)deleteSystemErrorOccurred;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)featureExtractionContext;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasFeatureExtractionContext;
- (bool)hasHypothesisRankingContext;
- (bool)hasSystemErrorOccurred;
- (unsigned long long)hash;
- (id)hypothesisRankingContext;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFeatureExtractionContext:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFeatureExtractionContext:(bool)arg1;
- (void)setHasHypothesisRankingContext:(bool)arg1;
- (void)setHasSystemErrorOccurred:(bool)arg1;
- (void)setHypothesisRankingContext:(id)arg1;
- (void)setSystemErrorOccurred:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)systemErrorOccurred;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
