
@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    RFSchemaRFGClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasVisualResponseShownLink;
    bool  _hasVisualResponseShownTier1;
    RFSchemaRFGVisualResponseShownLink * _visualResponseShownLink;
    RFSchemaRFGVisualResponseShownTier1 * _visualResponseShownTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) RFSchemaRFGClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasVisualResponseShownLink;
@property (nonatomic) bool hasVisualResponseShownTier1;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RFSchemaRFGVisualResponseShownLink *visualResponseShownLink;
@property (nonatomic, retain) RFSchemaRFGVisualResponseShownTier1 *visualResponseShownTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEventMetadata;
- (void)deleteVisualResponseShownLink;
- (void)deleteVisualResponseShownTier1;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasVisualResponseShownLink;
- (bool)hasVisualResponseShownTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasVisualResponseShownLink:(bool)arg1;
- (void)setHasVisualResponseShownTier1:(bool)arg1;
- (void)setVisualResponseShownLink:(id)arg1;
- (void)setVisualResponseShownTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)visualResponseShownLink;
- (id)visualResponseShownTier1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
