
@interface PKBankAccountDataItem : PKPaymentDataItem {
    PKBankAccountInformation * _PKBankAccountInformation;
    PKCurrencyAmount * _peerPaymentBalance;
    bool  _showPeerPaymentBalance;
}

@property (nonatomic, retain) PKBankAccountInformation *PKBankAccountInformation;
@property (nonatomic, readonly) PKBankAccountInformation *bankAccountInformation;
@property (nonatomic, retain) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) bool showPeerPaymentBalance;

+ (long long)dataType;

- (void).cxx_destruct;
- (id)PKBankAccountInformation;
- (id)bankAccountInformation;
- (long long)context;
- (id)initWithModel:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)peerPaymentBalance;
- (void)setPKBankAccountInformation:(id)arg1;
- (void)setPeerPaymentBalance:(id)arg1;
- (void)setShowPeerPaymentBalance:(bool)arg1;
- (bool)showPeerPaymentBalance;

@end
