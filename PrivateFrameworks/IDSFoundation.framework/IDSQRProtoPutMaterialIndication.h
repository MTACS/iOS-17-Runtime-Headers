
@interface IDSQRProtoPutMaterialIndication : PBCodable <NSCopying> {
    struct { 
        unsigned int txnId : 1; 
    }  _has;
    NSMutableArray * _materials;
    IDSQRProtoPutMaterialErrorIndication * _missingMaterial;
    unsigned long long  _txnId;
}

@property (nonatomic, readonly) bool hasMissingMaterial;
@property (nonatomic) bool hasTxnId;
@property (nonatomic, retain) NSMutableArray *materials;
@property (nonatomic, retain) IDSQRProtoPutMaterialErrorIndication *missingMaterial;
@property (nonatomic) unsigned long long txnId;

+ (Class)materialsType;

- (void).cxx_destruct;
- (void)addMaterials:(id)arg1;
- (void)clearMaterials;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMissingMaterial;
- (bool)hasTxnId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)materials;
- (id)materialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialsCount;
- (void)mergeFrom:(id)arg1;
- (id)missingMaterial;
- (bool)readFrom:(id)arg1;
- (void)setHasTxnId:(bool)arg1;
- (void)setMaterials:(id)arg1;
- (void)setMissingMaterial:(id)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end
