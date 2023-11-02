
@interface PKPayLaterUserInfoSectionController : PKPayLaterSectionController {
    PKPayLaterSubtitleRow * _addressRow;
    <PKPayLaterUserInfoSectionControllerDelegate> * _delegate;
    PKPayLaterSubtitleRow * _incomeRow;
    PKPaymentWebService * _paymentWebService;
    PKPayLaterSubtitleRow * _phoneRow;
    bool  _processingRowTap;
    PKPayLaterAccountUserInfo * _userInfo;
}

- (void).cxx_destruct;
- (id)_addressRow;
- (void)_configureEmailAddressSection:(id)arg1;
- (void)_configureOtherUserInfoSection:(id)arg1;
- (id)_dobRow;
- (id)_legalNameRow;
- (id)_phoneNumberRow;
- (id)_ssnRow;
- (id)_subtitleRowWithTitle:(id)arg1 subtitle:(id)arg2 selectionHandler:(id /* block */)arg3;
- (void)_updateUserInfo;
- (id)_yearlyIncomeRow;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithPayLaterAccount:(id)arg1 delegate:(id)arg2;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setPayLaterAccount:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
