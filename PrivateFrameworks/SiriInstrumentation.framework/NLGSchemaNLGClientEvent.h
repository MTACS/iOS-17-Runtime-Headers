
@interface NLGSchemaNLGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    NLGSchemaNLGClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasScoredDialogSelected;
    NLGSchemaNLGScoredDialogSelected * _scoredDialogSelected;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) NLGSchemaNLGClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasScoredDialogSelected;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLGSchemaNLGScoredDialogSelected *scoredDialogSelected;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteScoredDialogSelected;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasScoredDialogSelected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)scoredDialogSelected;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasScoredDialogSelected:(bool)arg1;
- (void)setScoredDialogSelected:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
