
@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted : SISchemaInstrumentationMessage {
    SISchemaAsset * _classifierModelAsset;
    int  _classifierModelType;
    struct { 
        unsigned int classifierModelType : 1; 
    }  _has;
    bool  _hasClassifierModelAsset;
    bool  _hasNlv4AssetVersion;
    bool  _hasNlv4AssetVersionOverride;
    SISchemaAsset * _nlv4AssetVersion;
    SISchemaAsset * _nlv4AssetVersionOverride;
}

@property (nonatomic, retain) SISchemaAsset *classifierModelAsset;
@property (nonatomic) int classifierModelType;
@property (nonatomic) bool hasClassifierModelAsset;
@property (nonatomic) bool hasClassifierModelType;
@property (nonatomic) bool hasNlv4AssetVersion;
@property (nonatomic) bool hasNlv4AssetVersionOverride;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaAsset *nlv4AssetVersion;
@property (nonatomic, retain) SISchemaAsset *nlv4AssetVersionOverride;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)classifierModelAsset;
- (int)classifierModelType;
- (void)deleteClassifierModelAsset;
- (void)deleteClassifierModelType;
- (void)deleteNlv4AssetVersion;
- (void)deleteNlv4AssetVersionOverride;
- (id)dictionaryRepresentation;
- (bool)hasClassifierModelAsset;
- (bool)hasClassifierModelType;
- (bool)hasNlv4AssetVersion;
- (bool)hasNlv4AssetVersionOverride;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nlv4AssetVersion;
- (id)nlv4AssetVersionOverride;
- (bool)readFrom:(id)arg1;
- (void)setClassifierModelAsset:(id)arg1;
- (void)setClassifierModelType:(int)arg1;
- (void)setHasClassifierModelAsset:(bool)arg1;
- (void)setHasClassifierModelType:(bool)arg1;
- (void)setHasNlv4AssetVersion:(bool)arg1;
- (void)setHasNlv4AssetVersionOverride:(bool)arg1;
- (void)setNlv4AssetVersion:(id)arg1;
- (void)setNlv4AssetVersionOverride:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
