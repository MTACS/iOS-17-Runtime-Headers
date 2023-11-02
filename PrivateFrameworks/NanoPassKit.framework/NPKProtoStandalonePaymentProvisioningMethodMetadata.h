
@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying> {
    NSString * _currency;
    NSString * _depositAmount;
    NPKProtoStandalonePaymentDigitalIssuanceMetadata * _digitalIssuanceMetadata;
    NSString * _maxLoadedBalance;
    NSString * _minLoadedBalance;
    NSString * _minimumReaderModeBalance;
    NSString * _productIdentifier;
    NSString * _readerModeMetadataJson;
    NSString * _readerModeResourcesJson;
    NSMutableArray * _requiredFields;
}

@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSString *depositAmount;
@property (nonatomic, retain) NPKProtoStandalonePaymentDigitalIssuanceMetadata *digitalIssuanceMetadata;
@property (nonatomic, readonly) bool hasCurrency;
@property (nonatomic, readonly) bool hasDepositAmount;
@property (nonatomic, readonly) bool hasDigitalIssuanceMetadata;
@property (nonatomic, readonly) bool hasMaxLoadedBalance;
@property (nonatomic, readonly) bool hasMinLoadedBalance;
@property (nonatomic, readonly) bool hasMinimumReaderModeBalance;
@property (nonatomic, readonly) bool hasProductIdentifier;
@property (nonatomic, readonly) bool hasReaderModeMetadataJson;
@property (nonatomic, readonly) bool hasReaderModeResourcesJson;
@property (nonatomic, retain) NSString *maxLoadedBalance;
@property (nonatomic, retain) NSString *minLoadedBalance;
@property (nonatomic, retain) NSString *minimumReaderModeBalance;
@property (nonatomic, retain) NSString *productIdentifier;
@property (nonatomic, retain) NSString *readerModeMetadataJson;
@property (nonatomic, retain) NSString *readerModeResourcesJson;
@property (nonatomic, retain) NSMutableArray *requiredFields;

+ (Class)requiredFieldsType;

- (void).cxx_destruct;
- (void)addRequiredFields:(id)arg1;
- (void)clearRequiredFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)depositAmount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digitalIssuanceMetadata;
- (bool)hasCurrency;
- (bool)hasDepositAmount;
- (bool)hasDigitalIssuanceMetadata;
- (bool)hasMaxLoadedBalance;
- (bool)hasMinLoadedBalance;
- (bool)hasMinimumReaderModeBalance;
- (bool)hasProductIdentifier;
- (bool)hasReaderModeMetadataJson;
- (bool)hasReaderModeResourcesJson;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maxLoadedBalance;
- (void)mergeFrom:(id)arg1;
- (id)minLoadedBalance;
- (id)minimumReaderModeBalance;
- (id)productIdentifier;
- (bool)readFrom:(id)arg1;
- (id)readerModeMetadataJson;
- (id)readerModeResourcesJson;
- (id)requiredFields;
- (id)requiredFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredFieldsCount;
- (void)setCurrency:(id)arg1;
- (void)setDepositAmount:(id)arg1;
- (void)setDigitalIssuanceMetadata:(id)arg1;
- (void)setMaxLoadedBalance:(id)arg1;
- (void)setMinLoadedBalance:(id)arg1;
- (void)setMinimumReaderModeBalance:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setReaderModeMetadataJson:(id)arg1;
- (void)setReaderModeResourcesJson:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end
