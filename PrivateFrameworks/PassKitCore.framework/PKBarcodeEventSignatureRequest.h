
@interface PKBarcodeEventSignatureRequest : NSObject <NSSecureCoding> {
    NSNumber * _amount;
    NSString * _barcodeIdentifier;
    NSString * _currencyCode;
    NSString * _deviceAccountIdentifier;
    NSString * _merchantName;
    NSData * _partialSignature;
    NSString * _rawMerchantName;
    NSDate * _transactionDate;
    NSString * _transactionIdentifier;
    NSString * _transactionStatus;
}

@property (nonatomic, retain) NSNumber *amount;
@property (nonatomic, copy) NSString *barcodeIdentifier;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSString *merchantName;
@property (nonatomic, copy) NSData *partialSignature;
@property (nonatomic, copy) NSString *rawMerchantName;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic, copy) NSString *transactionStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)barcodeIdentifier;
- (id)currencyCode;
- (id)description;
- (id)deviceAccountIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentTransaction:(id)arg1 deviceAccountIdentifier:(id)arg2;
- (id)merchantName;
- (id)partialSignature;
- (id)rawMerchantName;
- (void)setAmount:(id)arg1;
- (void)setBarcodeIdentifier:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDeviceAccountIdentifier:(id)arg1;
- (void)setMerchantName:(id)arg1;
- (void)setPartialSignature:(id)arg1;
- (void)setRawMerchantName:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransactionStatus:(id)arg1;
- (id)transactionDate;
- (id)transactionIdentifier;
- (id)transactionStatus;

@end
