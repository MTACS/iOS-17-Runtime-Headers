
@interface WFWalletMerchantSelectionTableViewController : UIViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSSet * _cardIdentifiers;
    <WFWalletMerchantSelectionTableViewControllerDelegate> * _delegate;
    PKPaymentTransactionIconGenerator * _generator;
    NSArray * _merchants;
    NSMutableSet * _previouslySelectedMerchants;
    NSMutableSet * _selectedMerchantIdentifiers;
    UITableView * _tableView;
}

@property (nonatomic, readonly) NSSet *cardIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWalletMerchantSelectionTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentTransactionIconGenerator *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *merchants;
@property (nonatomic, readonly) NSMutableSet *previouslySelectedMerchants;
@property (nonatomic, retain) NSMutableSet *selectedMerchantIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)cardIdentifiers;
- (void)clear:(id)arg1;
- (id)delegate;
- (void)done:(id)arg1;
- (void)fetchTransactions;
- (id)filteredMerchants;
- (id)generator;
- (id)initWithTransactionIdentifiers:(id)arg1 selectedMerchants:(id)arg2;
- (void)loadView;
- (id)merchants;
- (id)previouslySelectedMerchants;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)selectedMerchantIdentifiers;
- (void)setDelegate:(id)arg1;
- (void)setSelectedMerchantIdentifiers:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
