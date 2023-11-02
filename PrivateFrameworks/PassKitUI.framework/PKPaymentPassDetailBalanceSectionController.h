
@interface PKPaymentPassDetailBalanceSectionController : PKPaymentPassDetailSectionController {
    PKCurrencyAmount * _balance;
    <PKPaymentPassDetailWrapperSectionControllerDelegate> * _delegate;
    NSString * _footerText;
}

@property (nonatomic, retain) PKCurrencyAmount *balance;
@property (nonatomic) <PKPaymentPassDetailWrapperSectionControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *footerText;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (id)balance;
- (id)delegate;
- (id)footerText;
- (id)initWithDelegate:(id)arg1;
- (id)sectionIdentifiers;
- (void)setBalance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;

@end
