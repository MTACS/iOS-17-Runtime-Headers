
@interface PKTransitCardNumberViewController : PKDynamicTableViewController {
    PKPassDetailsCardInfoSectionController * _cardInfoSectionController;
    PKPaymentPass * _pass;
}

+ (bool)canShowForPass:(id)arg1 expressPassController:(id)arg2;

- (void).cxx_destruct;
- (id)initWithPass:(id)arg1;

@end
