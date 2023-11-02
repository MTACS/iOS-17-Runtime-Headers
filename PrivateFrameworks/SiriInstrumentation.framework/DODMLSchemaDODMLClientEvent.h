
@interface DODMLSchemaDODMLClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    DODMLASRSchemaDODMLASRAudioFileResultTier1 * _audioFileResultTier1;
    DODMLSchemaDODMLClientEventMetadata * _eventMetadata;
    bool  _hasAudioFileResultTier1;
    bool  _hasEventMetadata;
    bool  _hasPersonalizationExperimentContext;
    bool  _hasUserEditExperimentContext;
    bool  _hasUserEditExperimentEndedTier1;
    DODMLASRSchemaDODMLASRPersonalizationExperimentContext * _personalizationExperimentContext;
    DODMLASRSchemaDODMLASRUserEditExperimentContext * _userEditExperimentContext;
    DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 * _userEditExperimentEndedTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) DODMLASRSchemaDODMLASRAudioFileResultTier1 *audioFileResultTier1;
@property (nonatomic, retain) DODMLSchemaDODMLClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasAudioFileResultTier1;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasPersonalizationExperimentContext;
@property (nonatomic) bool hasUserEditExperimentContext;
@property (nonatomic) bool hasUserEditExperimentEndedTier1;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRPersonalizationExperimentContext *personalizationExperimentContext;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRUserEditExperimentContext *userEditExperimentContext;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 *userEditExperimentEndedTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)audioFileResultTier1;
- (void)deleteAudioFileResultTier1;
- (void)deleteEventMetadata;
- (void)deletePersonalizationExperimentContext;
- (void)deleteUserEditExperimentContext;
- (void)deleteUserEditExperimentEndedTier1;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAudioFileResultTier1;
- (bool)hasEventMetadata;
- (bool)hasPersonalizationExperimentContext;
- (bool)hasUserEditExperimentContext;
- (bool)hasUserEditExperimentEndedTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)personalizationExperimentContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAudioFileResultTier1:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasAudioFileResultTier1:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasPersonalizationExperimentContext:(bool)arg1;
- (void)setHasUserEditExperimentContext:(bool)arg1;
- (void)setHasUserEditExperimentEndedTier1:(bool)arg1;
- (void)setPersonalizationExperimentContext:(id)arg1;
- (void)setUserEditExperimentContext:(id)arg1;
- (void)setUserEditExperimentEndedTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userEditExperimentContext;
- (id)userEditExperimentEndedTier1;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
