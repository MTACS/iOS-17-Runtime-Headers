
@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 * _SiriRequestExperimentTriggered;
    EXPSiriSchemaEXPAllocationChangelogSnapshot * _allocationChangelogSnapshot;
    EXPSiriSchemaEXPAllocationSnapshot * _allocationSnapshot;
    EXPSiriSchemaEXPClientExperimentTriggeredTier1 * _experimentTriggered;
    bool  _hasAllocationChangelogSnapshot;
    bool  _hasAllocationSnapshot;
    bool  _hasExperimentTriggered;
    bool  _hasRolloutChangeSnapshot;
    bool  _hasSiriRequestExperimentTriggered;
    EXPSiriSchemaEXPRolloutChangeSnapshot * _rolloutChangeSnapshot;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 *SiriRequestExperimentTriggered;
@property (nonatomic, retain) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot;
@property (nonatomic, retain) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot;
@property (nonatomic, retain) EXPSiriSchemaEXPClientExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) bool hasAllocationChangelogSnapshot;
@property (nonatomic) bool hasAllocationSnapshot;
@property (nonatomic) bool hasExperimentTriggered;
@property (nonatomic) bool hasRolloutChangeSnapshot;
@property (nonatomic) bool hasSiriRequestExperimentTriggered;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) EXPSiriSchemaEXPRolloutChangeSnapshot *rolloutChangeSnapshot;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)SiriRequestExperimentTriggered;
- (id)allocationChangelogSnapshot;
- (id)allocationSnapshot;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAllocationChangelogSnapshot;
- (void)deleteAllocationSnapshot;
- (void)deleteExperimentTriggered;
- (void)deleteRolloutChangeSnapshot;
- (void)deleteSiriRequestExperimentTriggered;
- (id)dictionaryRepresentation;
- (id)experimentTriggered;
- (int)getAnyEventType;
- (bool)hasAllocationChangelogSnapshot;
- (bool)hasAllocationSnapshot;
- (bool)hasExperimentTriggered;
- (bool)hasRolloutChangeSnapshot;
- (bool)hasSiriRequestExperimentTriggered;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)rolloutChangeSnapshot;
- (void)setAllocationChangelogSnapshot:(id)arg1;
- (void)setAllocationSnapshot:(id)arg1;
- (void)setExperimentTriggered:(id)arg1;
- (void)setHasAllocationChangelogSnapshot:(bool)arg1;
- (void)setHasAllocationSnapshot:(bool)arg1;
- (void)setHasExperimentTriggered:(bool)arg1;
- (void)setHasRolloutChangeSnapshot:(bool)arg1;
- (void)setHasSiriRequestExperimentTriggered:(bool)arg1;
- (void)setRolloutChangeSnapshot:(id)arg1;
- (void)setSiriRequestExperimentTriggered:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
