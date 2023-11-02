
@interface HKSpokenLanguagesViewController : UITableViewController <UISearchResultsUpdating> {
    NSArray * _allSpokenLanguages;
    HKSpokenLanguage * _currentLanguage;
    HKSpokenLanguageDiffableDataSource * _dataSource;
    NSArray * _mostLikelyLanguages;
    <HKSpokenLanguagesViewControllerDelegate> * _pickerDelegate;
    UISearchController * _searchController;
}

@property (nonatomic, retain) NSArray *allSpokenLanguages;
@property (nonatomic, retain) HKSpokenLanguage *currentLanguage;
@property (nonatomic, retain) HKSpokenLanguageDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mostLikelyLanguages;
@property (nonatomic) <HKSpokenLanguagesViewControllerDelegate> *pickerDelegate;
@property (nonatomic, retain) UISearchController *searchController;
@property (readonly) Class superclass;

+ (id)defaultCheckmarkImage;

- (void).cxx_destruct;
- (id)allSpokenLanguages;
- (void)cancelAction;
- (void)configureCancelButton;
- (void)configureDataSource;
- (void)configureSearchController;
- (id)currentLanguage;
- (id)dataSource;
- (void)doneAction;
- (void)handleSearchSelection;
- (id)initWithCurrentLanguage:(id)arg1 preferredLanguages:(id)arg2 andAllSpokenLanguages:(id)arg3;
- (id)mostLikelyLanguages;
- (id)pickerDelegate;
- (id)searchController;
- (void)setAllSpokenLanguages:(id)arg1;
- (void)setConfirmButtonEnabledIfNeeded;
- (void)setCurrentLanguage:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMostLikelyLanguages:(id)arg1;
- (void)setPickerDelegate:(id)arg1;
- (void)setSearchController:(id)arg1;
- (id)snapshotForCurrentState;
- (id)snapshotForSearchResults:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
