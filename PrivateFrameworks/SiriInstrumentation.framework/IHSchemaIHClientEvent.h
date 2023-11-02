
@interface IHSchemaIHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    IHSchemaIHClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasModelEvaluationContext;
    IHSchemaIHModelEvaluationContext * _modelEvaluationContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) IHSchemaIHClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasModelEvaluationContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IHSchemaIHModelEvaluationContext *modelEvaluationContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteModelEvaluationContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasModelEvaluationContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelEvaluationContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasModelEvaluationContext:(bool)arg1;
- (void)setModelEvaluationContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
