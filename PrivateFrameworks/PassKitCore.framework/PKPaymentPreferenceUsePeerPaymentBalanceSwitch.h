
@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference {
    bool  _enabled;
    bool  _on;
    PKCurrencyAmount * _peerPaymentBalance;
    PKPaymentPass * _peerPaymentPass;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, retain) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, retain) PKPaymentPass *peerPaymentPass;

- (void).cxx_destruct;
- (bool)isEnabled;
- (bool)isOn;
- (id)peerPaymentBalance;
- (id)peerPaymentPass;
- (void)setEnabled:(bool)arg1;
- (void)setOn:(bool)arg1;
- (void)setPeerPaymentBalance:(id)arg1;
- (void)setPeerPaymentPass:(id)arg1;

@end
