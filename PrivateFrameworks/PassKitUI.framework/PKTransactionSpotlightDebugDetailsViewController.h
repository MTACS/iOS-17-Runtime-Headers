
@interface PKTransactionSpotlightDebugDetailsViewController : UITableViewController {
    NSMutableArray * _attributes;
    NSMutableDictionary * _attributesPerKey;
    NSMutableArray * _customAttributes;
    NSMutableDictionary * _customAttributesPerKey;
    NSError * _error;
    bool  _inBridge;
    CSSearchableItem * _item;
    bool  _loading;
    PKSearchService * _searchService;
    PKPaymentTransaction * _transaction;
}

- (void).cxx_destruct;
- (id)_cellWithTitleText:(id)arg1 valueText:(id)arg2;
- (id)initWithTransaction:(id)arg1;
- (void)loadItemWithCompletion:(id /* block */)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)spotlightObjectDescriptionWithCompletion:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
