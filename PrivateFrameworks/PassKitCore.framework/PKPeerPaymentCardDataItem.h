
@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass * _pass;
}

@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (void).cxx_destruct;
- (bool)_validateAccountResolutionsWithError:(id*)arg1 errorStatus:(long long*)arg2;
- (bool)_validateInsufficientBalanceWithError:(id*)arg1 errorStatus:(long long*)arg2;
- (bool)_validateTransferLimitsWithError:(id*)arg1 errorStatus:(long long*)arg2;
- (long long)context;
- (bool)isValidWithError:(id*)arg1;
- (bool)isValidWithError:(id*)arg1 errorStatus:(long long*)arg2;
- (id)pass;
- (id)quote;
- (bool)shouldShowDisclosure;

@end
