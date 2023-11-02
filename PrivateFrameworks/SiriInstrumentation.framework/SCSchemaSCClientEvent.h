
@interface SCSchemaSCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SCSchemaSCCorrectionChecked * _correctionChecked;
    SCSchemaSCClientEventMetadata * _eventMetadata;
    bool  _hasCorrectionChecked;
    bool  _hasEventMetadata;
    bool  _hasUndoChecked;
    bool  _hasUndoSet;
    SCSchemaSCUndoChecked * _undoChecked;
    SCSchemaSCUndoSet * _undoSet;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SCSchemaSCCorrectionChecked *correctionChecked;
@property (nonatomic, retain) SCSchemaSCClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasCorrectionChecked;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasUndoChecked;
@property (nonatomic) bool hasUndoSet;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SCSchemaSCUndoChecked *undoChecked;
@property (nonatomic, retain) SCSchemaSCUndoSet *undoSet;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (id)correctionChecked;
- (void)deleteCorrectionChecked;
- (void)deleteEventMetadata;
- (void)deleteUndoChecked;
- (void)deleteUndoSet;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasCorrectionChecked;
- (bool)hasEventMetadata;
- (bool)hasUndoChecked;
- (bool)hasUndoSet;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setCorrectionChecked:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasCorrectionChecked:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasUndoChecked:(bool)arg1;
- (void)setHasUndoSet:(bool)arg1;
- (void)setUndoChecked:(id)arg1;
- (void)setUndoSet:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)undoChecked;
- (id)undoSet;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
