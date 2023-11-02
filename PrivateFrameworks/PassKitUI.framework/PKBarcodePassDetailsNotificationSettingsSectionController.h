
@interface PKBarcodePassDetailsNotificationSettingsSectionController : NSObject <PKTableViewSectionController> {
    PKAccount * _account;
    NSArray * _allSectionIdentifiers;
    <PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> * _delegate;
    long long  _detailViewStyle;
    PKPass * _pass;
    PKPaymentApplication * _paymentApplication;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    NSArray * _sectionIdentifiers;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, readonly) NSArray *allSectionIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;

+ (long long)_countOfRowsForPass:(id)arg1;
+ (bool)canShowSectionforPass:(id)arg1;
+ (bool)validForPass:(id)arg1;

- (void).cxx_destruct;
- (id)_cellForType:(long long)arg1;
- (long long)_countOfRows;
- (id)_indexPathForRowType:(long long)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (unsigned long long)_settingForRow:(unsigned long long)arg1;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (bool)_shouldMapSection;
- (id)allSectionIdentifiers;
- (void)dealloc;
- (id)delegate;
- (long long)editingStyleForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2;
- (id)init;
- (id)initWithPass:(id)arg1 detailViewStyle:(long long)arg2 delegate:(id)arg3;
- (void)pushSettingsFromViewToModel;
- (id)sectionIdentifiers;
- (bool)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg1;
- (bool)shouldDrawTopSeparatorForSectionIdentifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;

@end
