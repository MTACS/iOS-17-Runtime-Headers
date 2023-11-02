
@interface TTMSchemaTTMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    TTMSchemaTTMClientEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasTtmNeuralCombinerRequestContext;
    bool  _hasTtmOverrideRequestContext;
    bool  _hasTtmRequestContext;
    TTMSchemaTTMNeuralCombinerRequestContext * _ttmNeuralCombinerRequestContext;
    TTMSchemaTTMOverrideRequestContext * _ttmOverrideRequestContext;
    TTMSchemaTTMRequestContext * _ttmRequestContext;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) TTMSchemaTTMClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasTtmNeuralCombinerRequestContext;
@property (nonatomic) bool hasTtmOverrideRequestContext;
@property (nonatomic) bool hasTtmRequestContext;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) TTMSchemaTTMNeuralCombinerRequestContext *ttmNeuralCombinerRequestContext;
@property (nonatomic, retain) TTMSchemaTTMOverrideRequestContext *ttmOverrideRequestContext;
@property (nonatomic, retain) TTMSchemaTTMRequestContext *ttmRequestContext;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteTtmNeuralCombinerRequestContext;
- (void)deleteTtmOverrideRequestContext;
- (void)deleteTtmRequestContext;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasTtmNeuralCombinerRequestContext;
- (bool)hasTtmOverrideRequestContext;
- (bool)hasTtmRequestContext;
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
- (void)setHasTtmNeuralCombinerRequestContext:(bool)arg1;
- (void)setHasTtmOverrideRequestContext:(bool)arg1;
- (void)setHasTtmRequestContext:(bool)arg1;
- (void)setTtmNeuralCombinerRequestContext:(id)arg1;
- (void)setTtmOverrideRequestContext:(id)arg1;
- (void)setTtmRequestContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)ttmNeuralCombinerRequestContext;
- (id)ttmOverrideRequestContext;
- (id)ttmRequestContext;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
