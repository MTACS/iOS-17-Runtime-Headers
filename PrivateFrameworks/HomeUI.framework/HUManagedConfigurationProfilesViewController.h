
@interface HUManagedConfigurationProfilesViewController : UITableViewController <HUPresentationDelegateHost, MCProfileViewControllerDelegate> {
    HMAccessory * _accessory;
    NAFuture * _fetchDataFuture;
    NSArray * _profiles;
    UITableViewDiffableDataSource * _tableViewDataSource;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NAFuture *fetchDataFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) NSArray *profiles;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewDiffableDataSource *tableViewDataSource;

- (void).cxx_destruct;
- (id)_confirmProfileDeletion:(id)arg1;
- (void)_fetchDataAndReloadTable;
- (id)_newCellForProfile:(id)arg1;
- (id)_profileForIdentifier:(id)arg1;
- (void)_reloadTableViewWithExistingData;
- (id)_removeProfileForIdentifier:(id)arg1;
- (id)accessory;
- (id)fetchDataFuture;
- (id)initWithAccessory:(id)arg1;
- (id)presentationDelegate;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (bool)profileViewControllerIsProfileInstalled;
- (id)profiles;
- (void)setAccessory:(id)arg1;
- (void)setFetchDataFuture:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setProfiles:(id)arg1;
- (void)setTableViewDataSource:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableViewDataSource;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
