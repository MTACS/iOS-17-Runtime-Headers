
@interface MWTSchemaMWTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    MWTSchemaMWTEventMetadata * _eventMetadata;
    bool  _hasEventMetadata;
    bool  _hasMwtCheckpointReported;
    bool  _hasMwtMusicMetadataReported;
    bool  _hasMwtVMCpuStatsReported;
    MWTSchemaMWTCheckpointReported * _mwtCheckpointReported;
    MWTSchemaMWTMusicMetadataReported * _mwtMusicMetadataReported;
    MWTSchemaMWTVMCPUStatsReported * _mwtVMCpuStatsReported;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) MWTSchemaMWTEventMetadata *eventMetadata;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasMwtCheckpointReported;
@property (nonatomic) bool hasMwtMusicMetadataReported;
@property (nonatomic) bool hasMwtVMCpuStatsReported;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MWTSchemaMWTCheckpointReported *mwtCheckpointReported;
@property (nonatomic, retain) MWTSchemaMWTMusicMetadataReported *mwtMusicMetadataReported;
@property (nonatomic, retain) MWTSchemaMWTVMCPUStatsReported *mwtVMCpuStatsReported;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEventMetadata;
- (void)deleteMwtCheckpointReported;
- (void)deleteMwtMusicMetadataReported;
- (void)deleteMwtVMCpuStatsReported;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEventMetadata;
- (bool)hasMwtCheckpointReported;
- (bool)hasMwtMusicMetadataReported;
- (bool)hasMwtVMCpuStatsReported;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mwtCheckpointReported;
- (id)mwtMusicMetadataReported;
- (id)mwtVMCpuStatsReported;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasMwtCheckpointReported:(bool)arg1;
- (void)setHasMwtMusicMetadataReported:(bool)arg1;
- (void)setHasMwtVMCpuStatsReported:(bool)arg1;
- (void)setMwtCheckpointReported:(id)arg1;
- (void)setMwtMusicMetadataReported:(id)arg1;
- (void)setMwtVMCpuStatsReported:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
