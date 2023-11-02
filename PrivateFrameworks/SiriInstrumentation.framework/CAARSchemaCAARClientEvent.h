
@interface CAARSchemaCAARClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    CAARSchemaCAARRequestContext * _caarRequestContext;
    CAARSchemaCAARClientEventMetadata * _eventMetadata;
    CAARSchemaCAARFeaturesGenerated * _featuresGenerated;
    bool  _hasCaarRequestContext;
    bool  _hasEventMetadata;
    bool  _hasFeaturesGenerated;
    bool  _hasModelExecuted;
    bool  _hasTieBreakersExecuted;
    CAARSchemaCAARModelExecuted * _modelExecuted;
    CAARSchemaCAARTieBreakersExecuted * _tieBreakersExecuted;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) CAARSchemaCAARRequestContext *caarRequestContext;
@property (nonatomic, retain) CAARSchemaCAARClientEventMetadata *eventMetadata;
@property (nonatomic, retain) CAARSchemaCAARFeaturesGenerated *featuresGenerated;
@property (nonatomic) bool hasCaarRequestContext;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFeaturesGenerated;
@property (nonatomic) bool hasModelExecuted;
@property (nonatomic) bool hasTieBreakersExecuted;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CAARSchemaCAARModelExecuted *modelExecuted;
@property (nonatomic, retain) CAARSchemaCAARTieBreakersExecuted *tieBreakersExecuted;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)caarRequestContext;
- (int)componentName;
- (void)deleteCaarRequestContext;
- (void)deleteEventMetadata;
- (void)deleteFeaturesGenerated;
- (void)deleteModelExecuted;
- (void)deleteTieBreakersExecuted;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)featuresGenerated;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasCaarRequestContext;
- (bool)hasEventMetadata;
- (bool)hasFeaturesGenerated;
- (bool)hasModelExecuted;
- (bool)hasTieBreakersExecuted;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelExecuted;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setCaarRequestContext:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFeaturesGenerated:(id)arg1;
- (void)setHasCaarRequestContext:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFeaturesGenerated:(bool)arg1;
- (void)setHasModelExecuted:(bool)arg1;
- (void)setHasTieBreakersExecuted:(bool)arg1;
- (void)setModelExecuted:(id)arg1;
- (void)setTieBreakersExecuted:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tieBreakersExecuted;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
