
@interface PKSearchResults : NSObject <NSSecureCoding> {
    NSArray * _barcodePassResults;
    NSArray * _categoryResults;
    NSArray * _locationResults;
    NSArray * _merchantResults;
    NSArray * _paymentPassResults;
    NSArray * _personResults;
    NSArray * _suggestedAutocompleteTokens;
    NSArray * _transactionResults;
    NSArray * _transactionTagResults;
}

@property (nonatomic, copy) NSArray *barcodePassResults;
@property (nonatomic, copy) NSArray *categoryResults;
@property (nonatomic, copy) NSArray *locationResults;
@property (nonatomic, copy) NSArray *merchantResults;
@property (nonatomic, copy) NSArray *paymentPassResults;
@property (nonatomic, copy) NSArray *personResults;
@property (nonatomic, copy) NSArray *suggestedAutocompleteTokens;
@property (nonatomic, copy) NSArray *transactionResults;
@property (nonatomic, copy) NSArray *transactionTagResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)barcodePassResults;
- (id)categoryResults;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)locationResults;
- (id)merchantResults;
- (id)paymentPassResults;
- (id)personResults;
- (void)setBarcodePassResults:(id)arg1;
- (void)setCategoryResults:(id)arg1;
- (void)setLocationResults:(id)arg1;
- (void)setMerchantResults:(id)arg1;
- (void)setPaymentPassResults:(id)arg1;
- (void)setPersonResults:(id)arg1;
- (void)setSuggestedAutocompleteTokens:(id)arg1;
- (void)setTransactionResults:(id)arg1;
- (void)setTransactionTagResults:(id)arg1;
- (id)suggestedAutocompleteTokens;
- (id)transactionResults;
- (id)transactionTagResults;

@end
