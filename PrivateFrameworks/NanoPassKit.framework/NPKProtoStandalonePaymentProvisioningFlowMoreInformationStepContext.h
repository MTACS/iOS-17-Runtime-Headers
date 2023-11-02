
@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable <NSCopying> {
    NSMutableArray * _moreInfoItems;
    NPKProtoStandalonePaymentPass * _paymentPass;
}

@property (nonatomic, readonly) bool hasPaymentPass;
@property (nonatomic, retain) NSMutableArray *moreInfoItems;
@property (nonatomic, retain) NPKProtoStandalonePaymentPass *paymentPass;

+ (Class)moreInfoItemsType;

- (void).cxx_destruct;
- (void)addMoreInfoItems:(id)arg1;
- (void)clearMoreInfoItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentPass;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)moreInfoItems;
- (id)moreInfoItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreInfoItemsCount;
- (id)paymentPass;
- (bool)readFrom:(id)arg1;
- (void)setMoreInfoItems:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)writeTo:(id)arg1;

@end
