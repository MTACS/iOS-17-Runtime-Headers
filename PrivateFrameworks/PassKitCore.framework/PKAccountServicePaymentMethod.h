
@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding> {
    PKBankAccountInformation * _bankAccountInformation;
    bool  _deviceSupportsPeerPaymentAccountPayment;
    PKCurrencyAmount * _peerPaymentBalance;
    unsigned long long  _selectedMethods;
}

@property (nonatomic, copy) PKBankAccountInformation *bankAccountInformation;
@property (nonatomic) bool deviceSupportsPeerPaymentAccountPayment;
@property (nonatomic, copy) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) unsigned long long selectedMethods;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bankAccountInformation;
- (bool)deviceSupportsPeerPaymentAccountPayment;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(bool)arg3 selectedMethods:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)peerPaymentBalance;
- (unsigned long long)selectedMethods;
- (void)setBankAccountInformation:(id)arg1;
- (void)setDeviceSupportsPeerPaymentAccountPayment:(bool)arg1;
- (void)setPeerPaymentBalance:(id)arg1;
- (void)setSelectedMethods:(unsigned long long)arg1;

@end
