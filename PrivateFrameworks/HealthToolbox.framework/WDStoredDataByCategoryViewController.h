
@interface WDStoredDataByCategoryViewController : HKTableViewController {
    UIFont * _bodyFont;
    NSArray * _capturedSampleTypes;
    WDProfile * _profile;
    bool  _queryReturned;
    NSArray * _savedCategories;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic, retain) NSArray *capturedSampleTypes;
@property (nonatomic, retain) WDProfile *profile;
@property (nonatomic) bool queryReturned;
@property (retain) NSArray *savedCategories;
@property (nonatomic, readonly) bool shouldShowDeleteAllDataButton;
@property (nonatomic, readonly) NSString *storedDataDisplayName;
@property (nonatomic, readonly) NSPredicate *storedDataPredicate;

- (void).cxx_destruct;
- (void)_displayTypeStringsChanged:(id)arg1;
- (id)_makeDataListViewControllerForDisplayType:(id)arg1;
- (id)bodyFont;
- (id)capturedSampleTypes;
- (void)deleteAllStoredData;
- (void)handleSamplesQueryResults:(id)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentDeleteConfirmation;
- (id)profile;
- (bool)queryReturned;
- (id)reduceCategoriesForCapturedSampleTypes:(id)arg1;
- (id)savedCategories;
- (void)selectSourceStoredDataTableViewCell:(id)arg1;
- (void)setBodyFont:(id)arg1;
- (void)setCapturedSampleTypes:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueryReturned:(bool)arg1;
- (void)setSavedCategories:(id)arg1;
- (bool)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
