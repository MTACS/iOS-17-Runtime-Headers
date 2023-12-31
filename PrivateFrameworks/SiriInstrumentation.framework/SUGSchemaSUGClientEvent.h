
@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SUGSchemaSUGEngagementReported * _engagementReported;
    SUGSchemaSUGClientEventMetadata * _eventMetadata;
    SUGSchemaSUGFilteringStepContext * _filteringStepContext;
    SUGSchemaSUGGenerationStepContext * _generationStepContext;
    bool  _hasEngagementReported;
    bool  _hasEventMetadata;
    bool  _hasFilteringStepContext;
    bool  _hasGenerationStepContext;
    bool  _hasRankingStepContext;
    bool  _hasRequestContext;
    bool  _hasResolutionStepContext;
    bool  _hasSuggestionsGenerated;
    SUGSchemaSUGRankingStepContext * _rankingStepContext;
    SUGSchemaSUGRequestContext * _requestContext;
    SUGSchemaSUGResolutionStepContext * _resolutionStepContext;
    SUGSchemaSUGSuggestionsGenerated * _suggestionsGenerated;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SUGSchemaSUGEngagementReported *engagementReported;
@property (nonatomic, retain) SUGSchemaSUGClientEventMetadata *eventMetadata;
@property (nonatomic, retain) SUGSchemaSUGFilteringStepContext *filteringStepContext;
@property (nonatomic, retain) SUGSchemaSUGGenerationStepContext *generationStepContext;
@property (nonatomic) bool hasEngagementReported;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFilteringStepContext;
@property (nonatomic) bool hasGenerationStepContext;
@property (nonatomic) bool hasRankingStepContext;
@property (nonatomic) bool hasRequestContext;
@property (nonatomic) bool hasResolutionStepContext;
@property (nonatomic) bool hasSuggestionsGenerated;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SUGSchemaSUGRankingStepContext *rankingStepContext;
@property (nonatomic, retain) SUGSchemaSUGRequestContext *requestContext;
@property (nonatomic, retain) SUGSchemaSUGResolutionStepContext *resolutionStepContext;
@property (nonatomic, retain) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)clockIsolationLevel;
- (void)deleteEngagementReported;
- (void)deleteEventMetadata;
- (void)deleteFilteringStepContext;
- (void)deleteGenerationStepContext;
- (void)deleteRankingStepContext;
- (void)deleteRequestContext;
- (void)deleteResolutionStepContext;
- (void)deleteSuggestionsGenerated;
- (id)dictionaryRepresentation;
- (id)engagementReported;
- (id)eventMetadata;
- (id)filteringStepContext;
- (id)generationStepContext;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEngagementReported;
- (bool)hasEventMetadata;
- (bool)hasFilteringStepContext;
- (bool)hasGenerationStepContext;
- (bool)hasRankingStepContext;
- (bool)hasRequestContext;
- (bool)hasResolutionStepContext;
- (bool)hasSuggestionsGenerated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (id)rankingStepContext;
- (bool)readFrom:(id)arg1;
- (id)requestContext;
- (id)resolutionStepContext;
- (void)setEngagementReported:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFilteringStepContext:(id)arg1;
- (void)setGenerationStepContext:(id)arg1;
- (void)setHasEngagementReported:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFilteringStepContext:(bool)arg1;
- (void)setHasGenerationStepContext:(bool)arg1;
- (void)setHasRankingStepContext:(bool)arg1;
- (void)setHasRequestContext:(bool)arg1;
- (void)setHasResolutionStepContext:(bool)arg1;
- (void)setHasSuggestionsGenerated:(bool)arg1;
- (void)setRankingStepContext:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResolutionStepContext:(id)arg1;
- (void)setSuggestionsGenerated:(id)arg1;
- (id)suggestionsGenerated;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
