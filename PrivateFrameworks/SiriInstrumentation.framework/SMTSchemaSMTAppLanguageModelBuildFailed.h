
@interface SMTSchemaSMTAppLanguageModelBuildFailed : SISchemaInstrumentationMessage {
    NSString * _assetName;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    bool  _hasAssetName;
    int  _reason;
}

@property (nonatomic, copy) NSString *assetName;
@property (nonatomic) bool hasAssetName;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (id)assetName;
- (void)deleteAssetName;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasAssetName;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setAssetName:(id)arg1;
- (void)setHasAssetName:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
