
@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable <NSCopying> {
    NSString * _identifier;
    NSMutableArray * _products;
    NSString * _title;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *products;
@property (nonatomic, retain) NSString *title;

+ (Class)productsType;

- (void).cxx_destruct;
- (void)addProducts:(id)arg1;
- (void)clearProducts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)products;
- (id)productsAtIndex:(unsigned long long)arg1;
- (unsigned long long)productsCount;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProducts:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
