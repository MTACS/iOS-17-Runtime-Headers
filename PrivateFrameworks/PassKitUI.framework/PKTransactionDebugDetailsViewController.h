
@interface PKTransactionDebugDetailsViewController : UITableViewController {
    bool  _inBridge;
    UITableViewCell * _mapsCell;
    NSDictionary * _mapsMerchantDetails;
    NSDictionary * _merchantDetails;
    PKPaymentTransaction * _transaction;
    NSDictionary * _transactionDetails;
}

@property (nonatomic, copy) NSDictionary *mapsMerchantDetails;
@property (nonatomic, retain) NSDictionary *merchantDetails;
@property (nonatomic, retain) NSDictionary *transactionDetails;

- (void).cxx_destruct;
- (id)_cellWithPrimaryText:(id)arg1 infoText:(id)arg2;
- (void)_didSelectMap;
- (id)_mapsBrandInfoCellForIndex:(long long)arg1;
- (id)_mapsCell;
- (id)_mapsMerchantInfoCellForIndex:(long long)arg1;
- (id)_merchantInfoCellForIndex:(long long)arg1;
- (id)_stringForTechnologyType:(long long)arg1;
- (id)_stringForTransactionSource:(unsigned long long)arg1;
- (id)_stringForTransactionStatus:(long long)arg1;
- (id)_stringForTransactionType:(long long)arg1;
- (id)_transactionInfoCellForIndex:(long long)arg1;
- (id)initWithTransaction:(id)arg1;
- (id)mapsBrandDetails;
- (id)mapsMerchantDetails;
- (id)merchantDetails;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setMapsMerchantDetails:(id)arg1;
- (void)setMerchantDetails:(id)arg1;
- (void)setTransactionDetails:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)transactionDetails;
- (void)viewDidLoad;

@end
