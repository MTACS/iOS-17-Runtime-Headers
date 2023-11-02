
@interface PKPeerPaymentRecurringPaymentEducationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {
    PKPeerPaymentAccount * _account;
    id /* block */  _addCardHandler;
    PKFamilyMemberCollection * _familyCollection;
    PKPaymentPass * _paymentPass;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, copy) id /* block */ addCardHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestOpenURL:(id)arg1;
- (id /* block */)addCardHandler;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithContext:(long long)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3;
- (void)setAddCardHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
