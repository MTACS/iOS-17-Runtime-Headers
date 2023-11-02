
@interface SADSchemaSADClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    SADSchemaSADAvailableAssetDailyStatus * _availableAssetDailyStatus;
    bool  _hasAvailableAssetDailyStatus;
    bool  _hasImmediateDownloadTriggered;
    bool  _hasUodAssetsPrepared;
    SADSchemaSADImmediateDownloadTriggered * _immediateDownloadTriggered;
    SADSchemaSADUODAssetsPrepared * _uodAssetsPrepared;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) SADSchemaSADAvailableAssetDailyStatus *availableAssetDailyStatus;
@property (nonatomic) bool hasAvailableAssetDailyStatus;
@property (nonatomic) bool hasImmediateDownloadTriggered;
@property (nonatomic) bool hasUodAssetsPrepared;
@property (nonatomic, retain) SADSchemaSADImmediateDownloadTriggered *immediateDownloadTriggered;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SADSchemaSADUODAssetsPrepared *uodAssetsPrepared;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)availableAssetDailyStatus;
- (void)deleteAvailableAssetDailyStatus;
- (void)deleteImmediateDownloadTriggered;
- (void)deleteUodAssetsPrepared;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasAvailableAssetDailyStatus;
- (bool)hasImmediateDownloadTriggered;
- (bool)hasUodAssetsPrepared;
- (unsigned long long)hash;
- (id)immediateDownloadTriggered;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAvailableAssetDailyStatus:(id)arg1;
- (void)setHasAvailableAssetDailyStatus:(bool)arg1;
- (void)setHasImmediateDownloadTriggered:(bool)arg1;
- (void)setHasUodAssetsPrepared:(bool)arg1;
- (void)setImmediateDownloadTriggered:(id)arg1;
- (void)setUodAssetsPrepared:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)uodAssetsPrepared;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
