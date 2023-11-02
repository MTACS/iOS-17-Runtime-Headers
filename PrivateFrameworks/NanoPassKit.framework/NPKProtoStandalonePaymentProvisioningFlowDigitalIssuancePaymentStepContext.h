
@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuancePaymentStepContext : PBCodable <NSCopying> {
    NPKProtoStandalonePaymentSetupProduct * _product;
}

@property (nonatomic, readonly) bool hasProduct;
@property (nonatomic, retain) NPKProtoStandalonePaymentSetupProduct *product;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProduct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)product;
- (bool)readFrom:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)writeTo:(id)arg1;

@end
