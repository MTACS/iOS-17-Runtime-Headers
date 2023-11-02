
@interface PKPaymentPassDetailPassActionSectionController : PKPaymentPassDetailSectionController <PKPaymentDataProviderDelegate> {
    PKPaymentPassAction * _action;
    <PKPaymentPassDetailPassActionSectionControllerDelegate><PKPaymentPassDetailWrapperSectionControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKTransitBalanceModel * _transitBalanceModel;
    long long  _viewStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentPassDetailPassActionSectionControllerDelegate><PKPaymentPassDetailWrapperSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransitBalanceModel *transitBalanceModel;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (id)delegate;
- (id)initWithPass:(id)arg1 viewStyle:(long long)arg2 paymentDataProvider:(id)arg3 transitBalanceModel:(id)arg4 delegate:(id)arg5;
- (id)sectionIdentifiers;
- (void)setDelegate:(id)arg1;
- (void)setTransitBalanceModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)transitBalanceModel;

@end
