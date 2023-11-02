
@interface WFWalletTransactionTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFWalletMerchantSelectionTableViewControllerDelegate> {
    unsigned long long  _detailSelection;
    NSMutableDictionary * _localPassesToRemotePassesUniqueIdentifierMapping;
    NSMutableDictionary * _merchantIcons;
    NSMutableDictionary * _passIcons;
    NSArray * _passes;
    NSArray * _remotePasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long detailSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *localPassesToRemotePassesUniqueIdentifierMapping;
@property (nonatomic, readonly) NSMutableDictionary *merchantIcons;
@property (nonatomic, readonly) NSMutableDictionary *passIcons;
@property (nonatomic, readonly) NSArray *passes;
@property (nonatomic, readonly) NSArray *remotePasses;
@property (readonly) Class superclass;

+ (bool)passIsAppleAccess:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchPassesWithCompletion:(id /* block */)arg1;
- (id)allPassIdentifiers;
- (id)customSections;
- (unsigned long long)detailSelection;
- (void)filterDuplicatePassesFromLocalPasses:(id)arg1 watchPasses:(id)arg2;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (id)localPassesToRemotePassesUniqueIdentifierMapping;
- (id)merchantIconForMerchantType:(unsigned long long)arg1;
- (id)merchantIcons;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passIconForPaymentPass:(id)arg1 preferredIconSize:(struct CGSize { double x1; double x2; })arg2;
- (id)passIcons;
- (id)passes;
- (bool)paymentPassesSelected;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (id)remotePasses;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (id)tableViewHeaderString;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)walletMerchantViewController:(id)arg1 didFinishWithMerchants:(id)arg2;

@end
