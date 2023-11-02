
@interface PKPassDetailsCardInfoSectionController : PKPaymentPassDetailSectionController {
    <PKPassDetailsCardInfoSectionControllerDelegate> * _delegate;
    long long  _detailViewStyle;
    bool  _expressModeEnabled;
    bool  _expressModeSupported;
    PKExpressPassController * _expressPassController;
    bool  _hideSectionTitles;
    PKPaymentPass * _pass;
    PKPassLibraryDefaultDataProvider * _passLibraryDataProvider;
    PKPaymentApplication * _paymentApplication;
    PKPaymentDefaultDataProvider * _paymentServiceDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    unsigned long long  _sectionMode;
}

@property (nonatomic, readonly) <PKPassDetailsCardInfoSectionControllerDelegate> *delegate;
@property (nonatomic) bool hideSectionTitles;

+ (unsigned long long)_cardInfoSectionGenerateCellWithOutputForRowIndex:(long long)arg1 pass:(id)arg2 detailViewStyle:(long long)arg3 sectionMode:(unsigned long long)arg4 expressMode:(bool)arg5;
+ (unsigned long long)_countOfRowsForPass:(id)arg1 detailViewStyle:(long long)arg2 sectionMode:(unsigned long long)arg3 expressMode:(bool)arg4;
+ (bool)_paymentApplicationShouldShowFullDPANForPass:(id)arg1 paymentApplication:(id)arg2;
+ (bool)_showExpressDetailsForPass:(id)arg1 expressMode:(bool)arg2 sectionMode:(unsigned long long)arg3;
+ (bool)canShowSectionForPaymentPass:(id)arg1 expressPassController:(id)arg2;
+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_contextMenuConfigurationForCopyingText:(id)arg1;
- (unsigned long long)_countOfRows;
- (void)_expressPassDidChange;
- (bool)_paymentApplicationShouldShowFullDPAN;
- (bool)_showExpressDetails;
- (void)_updateExpressPassInformation;
- (id)allSectionIdentifiers;
- (id)delegate;
- (long long)editingStyleForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)hideSectionTitles;
- (id)init;
- (id)initWithPass:(id)arg1 peerPaymentAccount:(id)arg2 mode:(unsigned long long)arg3 detailViewStyle:(long long)arg4 delegate:(id)arg5;
- (id)sectionIdentifiers;
- (void)setHideSectionTitles:(bool)arg1;
- (bool)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldDrawTopSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldHighlightRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 sectionIdentifier:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (id)titleForHeaderInSectionIdentifier:(id)arg1;

@end
