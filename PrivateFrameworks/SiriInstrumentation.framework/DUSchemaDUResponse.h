
@interface DUSchemaDUResponse : SISchemaInstrumentationMessage {
    SISchemaUUID * _assetIdentifier;
    struct { 
        unsigned int status : 1; 
    }  _has;
    bool  _hasAssetIdentifier;
    int  _status;
}

@property (nonatomic, retain) SISchemaUUID *assetIdentifier;
@property (nonatomic) bool hasAssetIdentifier;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assetIdentifier;
- (void)deleteAssetIdentifier;
- (void)deleteStatus;
- (id)dictionaryRepresentation;
- (bool)hasAssetIdentifier;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setHasAssetIdentifier:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
