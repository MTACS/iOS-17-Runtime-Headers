
@interface MHSchemaMHRTSFalseRejectDetected : SISchemaInstrumentationMessage {
    unsigned int  _assetVersion;
    NSString * _audioModelVersion;
    NSString * _gestureModelVersion;
    struct { 
        unsigned int assetVersion : 1; 
    }  _has;
    bool  _hasAudioModelVersion;
    bool  _hasGestureModelVersion;
    bool  _hasPolicyModelVersion;
    NSString * _policyModelVersion;
}

@property (nonatomic) unsigned int assetVersion;
@property (nonatomic, copy) NSString *audioModelVersion;
@property (nonatomic, copy) NSString *gestureModelVersion;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasAudioModelVersion;
@property (nonatomic) bool hasGestureModelVersion;
@property (nonatomic) bool hasPolicyModelVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *policyModelVersion;

- (void).cxx_destruct;
- (unsigned int)assetVersion;
- (id)audioModelVersion;
- (void)deleteAssetVersion;
- (void)deleteAudioModelVersion;
- (void)deleteGestureModelVersion;
- (void)deletePolicyModelVersion;
- (id)dictionaryRepresentation;
- (id)gestureModelVersion;
- (bool)hasAssetVersion;
- (bool)hasAudioModelVersion;
- (bool)hasGestureModelVersion;
- (bool)hasPolicyModelVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)policyModelVersion;
- (bool)readFrom:(id)arg1;
- (void)setAssetVersion:(unsigned int)arg1;
- (void)setAudioModelVersion:(id)arg1;
- (void)setGestureModelVersion:(id)arg1;
- (void)setHasAssetVersion:(bool)arg1;
- (void)setHasAudioModelVersion:(bool)arg1;
- (void)setHasGestureModelVersion:(bool)arg1;
- (void)setHasPolicyModelVersion:(bool)arg1;
- (void)setPolicyModelVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
