
@interface NPKProtoStandalonePaymentProvisioningFlowChooseProductStepContext : PBCodable <NSCopying> {
    NSMutableArray * _products;
}

@property (nonatomic, retain) NSMutableArray *products;

+ (Class)productsType;

- (void).cxx_destruct;
- (void)addProducts:(id)arg1;
- (void)clearProducts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)products;
- (id)productsAtIndex:(unsigned long long)arg1;
- (unsigned long long)productsCount;
- (bool)readFrom:(id)arg1;
- (void)setProducts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
