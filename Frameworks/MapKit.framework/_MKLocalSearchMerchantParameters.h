
@interface _MKLocalSearchMerchantParameters : NSObject <NSCopying> {
    NSString * _industryCategory;
    NSNumber * _industryCode;
    NSString * _merchantCode;
    NSString * _paymentNetwork;
    NSString * _rawMerchantCode;
    NSDate * _transactionDate;
    CLLocation * _transactionLocation;
}

@property (nonatomic, copy) NSString *industryCategory;
@property (nonatomic, retain) NSNumber *industryCode;
@property (nonatomic, copy) NSString *merchantCode;
@property (nonatomic, copy) NSString *paymentNetwork;
@property (nonatomic, copy) NSString *rawMerchantCode;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, retain) CLLocation *transactionLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)industryCategory;
- (id)industryCode;
- (id)merchantCode;
- (id)paymentNetwork;
- (id)rawMerchantCode;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(id)arg1;
- (void)setMerchantCode:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setRawMerchantCode:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (id)transactionDate;
- (id)transactionLocation;

@end
