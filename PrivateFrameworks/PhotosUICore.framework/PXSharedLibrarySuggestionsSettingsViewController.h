
@interface PXSharedLibrarySuggestionsSettingsViewController : UIViewController <PHPickerViewControllerDelegate, PXSharedLibraryRulePeopleDataManagerDelegate, UICollectionViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UICollectionView * _peopleCollectionView;
    UICollectionViewDiffableDataSource * _peopleCollectionViewDataSource;
    PXSharedLibraryRulePeopleDataManager * _peopleDataManager;
    PHPhotoLibrary * _photoLibrary;
    NSMutableArray * _sections;
    UISwitch * _suggestionsEnabledSwitch;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSectionWithConfigurationHandler:(id /* block */)arg1;
- (void)_handleDoneAction:(id)arg1;
- (void)_update;
- (void)_updateCollectionViewCell:(id)arg1 forRulePerson:(id)arg2;
- (void)_updateSections;
- (void)addOtherPeople:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)removePerson:(id)arg1;
- (id)sections;
- (void)sharedLibraryRulePeopleControllerDidChangeCurrentSnapshot:(id)arg1;
- (void)suggestionsEnabledChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
