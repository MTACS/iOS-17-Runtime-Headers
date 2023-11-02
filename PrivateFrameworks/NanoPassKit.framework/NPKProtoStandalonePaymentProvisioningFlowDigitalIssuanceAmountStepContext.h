
@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext : PBCodable <NSCopying> {
    bool  _allowsReaderModeEntry;
    struct { 
        unsigned int allowsReaderModeEntry : 1; 
    }  _has;
    NPKProtoStandalonePaymentSetupProduct * _product;
}

@property (nonatomic) bool allowsReaderModeEntry;
@property (nonatomic) bool hasAllowsReaderModeEntry;
@property (nonatomic, readonly) bool hasProduct;
@property (nonatomic, retain) NPKProtoStandalonePaymentSetupProduct *product;

- (void).cxx_destruct;
- (bool)allowsReaderModeEntry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowsReaderModeEntry;
- (bool)hasProduct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)product;
- (bool)readFrom:(id)arg1;
- (void)setAllowsReaderModeEntry:(bool)arg1;
- (void)setHasAllowsReaderModeEntry:(bool)arg1;
- (void)setProduct:(id)arg1;
- (void)writeTo:(id)arg1;

@end
