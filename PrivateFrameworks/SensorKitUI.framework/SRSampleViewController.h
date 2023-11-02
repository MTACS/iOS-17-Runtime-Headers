
@interface SRSampleViewController : UITableViewController {
    SRAuthorizationGroup * _authGroup;
    NSString * _note;
    NSArray * _sampleDataEntries;
}

@property (nonatomic, retain) SRAuthorizationGroup *authGroup;
@property (nonatomic, retain) NSString *note;
@property (nonatomic, retain) NSArray *sampleDataEntries;

+ (void)initialize;
+ (id)sampleViewControllerForAuthGroup:(id)arg1;

- (id)authGroup;
- (void)dealloc;
- (id)init;
- (id)note;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prepareEndRowWithText:(id)arg1 detailText:(id)arg2;
- (id)prepareExtendedRowWithText:(id)arg1;
- (id)sampleDataEntries;
- (void)setAuthGroup:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setSampleDataEntries:(id)arg1;
- (id)sortedKeysForDictionary:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

@end
