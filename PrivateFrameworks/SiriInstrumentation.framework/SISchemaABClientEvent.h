
@interface SISchemaABClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SISchemaABExperimentAllocationChanged * _allocationChanged;
    SISchemaABExperimentAssetRetrievalStatusChanged * _assetRetrievalStatusChanged;
    SISchemaABExperimentClientFeatureTriggered * _clientFeatureTriggered;
    SISchemaABClientEventMetadata * _eventMetadata;
    bool  _hasAllocationChanged;
    bool  _hasAssetRetrievalStatusChanged;
    bool  _hasClientFeatureTriggered;
    bool  _hasEventMetadata;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SISchemaABExperimentAllocationChanged *allocationChanged;
@property (nonatomic, retain) SISchemaABExperimentAssetRetrievalStatusChanged *assetRetrievalStatusChanged;
@property (nonatomic, retain) SISchemaABExperimentClientFeatureTriggered *clientFeatureTriggered;
@property (nonatomic, retain) SISchemaABClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAllocationChanged;
@property (nonatomic) bool hasAssetRetrievalStatusChanged;
@property (nonatomic) bool hasClientFeatureTriggered;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)allocationChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assetRetrievalStatusChanged;
- (id)clientFeatureTriggered;
- (void)deleteAllocationChanged;
- (void)deleteAssetRetrievalStatusChanged;
- (void)deleteClientFeatureTriggered;
- (void)deleteEventMetadata;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (bool)hasAllocationChanged;
- (bool)hasAssetRetrievalStatusChanged;
- (bool)hasClientFeatureTriggered;
- (bool)hasEventMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAllocationChanged:(id)arg1;
- (void)setAssetRetrievalStatusChanged:(id)arg1;
- (void)setClientFeatureTriggered:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasAllocationChanged:(bool)arg1;
- (void)setHasAssetRetrievalStatusChanged:(bool)arg1;
- (void)setHasClientFeatureTriggered:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
