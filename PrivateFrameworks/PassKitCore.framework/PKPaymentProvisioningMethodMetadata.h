
@interface PKPaymentProvisioningMethodMetadata : NSObject {
    NSString * _currency;
    NSDecimalNumber * _depositAmount;
    unsigned long long  _depositType;
    PKPaymentDigitalIssuanceMetadata * _digitalIssuanceMetadata;
    NSDecimalNumber * _maxLoadedBalance;
    NSDecimalNumber * _minLoadedBalance;
    NSDecimalNumber * _minimumReaderModeBalance;
    NSString * _productIdentifier;
    NSDictionary * _readerModeMetadata;
    NSDictionary * _readerModeResources;
    NSArray * _requiredFields;
}

@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSDecimalNumber *depositAmount;
@property (nonatomic, readonly) unsigned long long depositType;
@property (nonatomic, readonly) PKPaymentDigitalIssuanceMetadata *digitalIssuanceMetadata;
@property (nonatomic, readonly, copy) NSDecimalNumber *maxLoadedBalance;
@property (nonatomic, readonly, copy) NSDecimalNumber *minLoadedBalance;
@property (nonatomic, readonly, copy) NSDecimalNumber *minimumReaderModeBalance;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *readerModeMetadata;
@property (nonatomic, readonly, copy) NSDictionary *readerModeResources;
@property (nonatomic, readonly, copy) NSArray *requiredFields;

- (void).cxx_destruct;
- (id)currency;
- (id)depositAmount;
- (unsigned long long)depositType;
- (id)digitalIssuanceMetadata;
- (id)initWithDictionary:(id)arg1;
- (id)maxLoadedBalance;
- (id)minLoadedBalance;
- (id)minimumReaderModeBalance;
- (id)productIdentifier;
- (id)readerModeMetadata;
- (id)readerModeResources;
- (id)requiredFields;

@end
