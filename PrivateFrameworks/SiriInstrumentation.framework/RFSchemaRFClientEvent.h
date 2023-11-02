
@interface RFSchemaRFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    RFSchemaRFComponentShown * _componentShown;
    RFSchemaRFClientEventMetadata * _eventMetadata;
    bool  _hasComponentShown;
    bool  _hasEventMetadata;
    bool  _hasInteractionPerformed;
    bool  _hasPatternExecuted;
    bool  _hasSnippetRenderingContext;
    RFSchemaRFInteractionPerformed * _interactionPerformed;
    RFSchemaRFPatternExecuted * _patternExecuted;
    RFSchemaRFSnippetRenderingContext * _snippetRenderingContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) RFSchemaRFComponentShown *componentShown;
@property (nonatomic, retain) RFSchemaRFClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasComponentShown;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasInteractionPerformed;
@property (nonatomic) bool hasPatternExecuted;
@property (nonatomic) bool hasSnippetRenderingContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, retain) RFSchemaRFInteractionPerformed *interactionPerformed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RFSchemaRFPatternExecuted *patternExecuted;
@property (nonatomic, retain) RFSchemaRFSnippetRenderingContext *snippetRenderingContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (id)componentShown;
- (void)deleteComponentShown;
- (void)deleteEventMetadata;
- (void)deleteInteractionPerformed;
- (void)deletePatternExecuted;
- (void)deleteSnippetRenderingContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasComponentShown;
- (bool)hasEventMetadata;
- (bool)hasInteractionPerformed;
- (bool)hasPatternExecuted;
- (bool)hasSnippetRenderingContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (id)interactionPerformed;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)patternExecuted;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setComponentShown:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasComponentShown:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasInteractionPerformed:(bool)arg1;
- (void)setHasPatternExecuted:(bool)arg1;
- (void)setHasSnippetRenderingContext:(bool)arg1;
- (void)setInteractionPerformed:(id)arg1;
- (void)setPatternExecuted:(id)arg1;
- (void)setSnippetRenderingContext:(id)arg1;
- (id)snippetRenderingContext;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
