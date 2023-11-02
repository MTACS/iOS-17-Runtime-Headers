
@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding> {
    NSArray * _errors;
    NSString * _installmentGroupIdentifier;
    PKPeerPaymentQuote * _peerPaymentQuote;
}

@property (nonatomic, copy) NSArray *errors;
@property (nonatomic, copy) NSString *installmentGroupIdentifier;
@property (nonatomic, retain) PKPeerPaymentQuote *peerPaymentQuote;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)installmentGroupIdentifier;
- (id)peerPaymentQuote;
- (void)setErrors:(id)arg1;
- (void)setInstallmentGroupIdentifier:(id)arg1;
- (void)setPeerPaymentQuote:(id)arg1;

@end
