
@interface MHSchemaMHVoiceTriggerFirstPassDailyMetadata : SISchemaInstrumentationMessage {
    NSString * _configVersion;
    int  _hardwareSampleRate;
    struct { 
        unsigned int hardwareSampleRate : 1; 
    }  _has;
    bool  _hasConfigVersion;
    bool  _hasMitigationAssetVersion;
    NSString * _mitigationAssetVersion;
}

@property (nonatomic, copy) NSString *configVersion;
@property (nonatomic) int hardwareSampleRate;
@property (nonatomic) bool hasConfigVersion;
@property (nonatomic) bool hasHardwareSampleRate;
@property (nonatomic) bool hasMitigationAssetVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *mitigationAssetVersion;

- (void).cxx_destruct;
- (id)configVersion;
- (void)deleteConfigVersion;
- (void)deleteHardwareSampleRate;
- (void)deleteMitigationAssetVersion;
- (id)dictionaryRepresentation;
- (int)hardwareSampleRate;
- (bool)hasConfigVersion;
- (bool)hasHardwareSampleRate;
- (bool)hasMitigationAssetVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mitigationAssetVersion;
- (bool)readFrom:(id)arg1;
- (void)setConfigVersion:(id)arg1;
- (void)setHardwareSampleRate:(int)arg1;
- (void)setHasConfigVersion:(bool)arg1;
- (void)setHasHardwareSampleRate:(bool)arg1;
- (void)setHasMitigationAssetVersion:(bool)arg1;
- (void)setMitigationAssetVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
