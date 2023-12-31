
@interface PKPaymentCardDataItem : PKPaymentDataItem {
    PKCurrencyAmount * _peerPaymentBalance;
    bool  _showPeerPaymentBalance;
}

@property (nonatomic, readonly) CNContact *billingAddress;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, readonly) bool requiresBillingAddress;
@property (nonatomic, readonly) bool shouldShowCardArt;
@property (nonatomic) bool showPeerPaymentBalance;

+ (long long)dataType;

- (void).cxx_destruct;
- (id)billingAddress;
- (long long)context;
- (id)errors;
- (bool)isValidWithError:(id*)arg1;
- (id)pass;
- (id)paymentApplication;
- (id)paymentContactFormatErrors;
- (id)peerPaymentBalance;
- (bool)requiresBillingAddress;
- (void)setPeerPaymentBalance:(id)arg1;
- (void)setShowPeerPaymentBalance:(bool)arg1;
- (bool)shouldShowCardArt;
- (bool)showPeerPaymentBalance;
- (long long)status;

@end
