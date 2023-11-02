
@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController {
    PKCloudRecordObject * _cloudRecordObject;
    NSMutableSet * _cloudStoreObjectHandlers;
    PKCloudStoreService * _cloudStoreService;
    bool  _inBridge;
    NSMutableDictionary * _keysForRecordName;
    bool  _loadingCloudRecordObject;
    NSArray * _records;
    PKPaymentTransaction * _transaction;
    NSMutableDictionary * _valuesForRecordName;
}

- (void).cxx_destruct;
- (void)_callCloudRecordObjectDescriptionBlocks;
- (id)_cellWithTitleText:(id)arg1 valueText:(id)arg2;
- (void)_loadCloudData;
- (void)_processCloudRecords;
- (id)_recordForSection:(long long)arg1;
- (id)_recordNameForSection:(long long)arg1;
- (void)cloudRecordObjectDescriptionWithCompletion:(id /* block */)arg1;
- (id)initWithTransaction:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
