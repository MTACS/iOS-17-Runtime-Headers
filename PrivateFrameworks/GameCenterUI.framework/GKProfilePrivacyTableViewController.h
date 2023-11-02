
@interface GKProfilePrivacyTableViewController : UITableViewController {
    NSMutableArray * _availblePrivacySettings;
    int  _currentPrivacySettings;
    <GKProfilePrivacyTableViewControllerDelegate> * _delegate;
    int  _initialPrivacySettings;
    bool  _isSendingRequest;
    GKLocalPlayer * _localPlayer;
}

@property (nonatomic, retain) NSMutableArray *availblePrivacySettings;
@property (nonatomic) int currentPrivacySettings;
@property (nonatomic) <GKProfilePrivacyTableViewControllerDelegate> *delegate;
@property (nonatomic) int initialPrivacySettings;
@property (nonatomic) bool isSendingRequest;
@property (nonatomic, retain) GKLocalPlayer *localPlayer;

- (void).cxx_destruct;
- (id)availblePrivacySettings;
- (int)currentPrivacySettings;
- (id)delegate;
- (int)initialPrivacySettings;
- (bool)isSendingRequest;
- (id)localPlayer;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAvailblePrivacySettings:(id)arg1;
- (void)setCurrentPrivacySettings:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialPrivacySettings:(int)arg1;
- (void)setIsSendingRequest:(bool)arg1;
- (void)setLocalPlayer:(id)arg1;
- (id)tableFooterForPrivacy:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)titleForPrivacy:(int)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCell:(id)arg1 withCheckmark:(bool)arg2;
- (void)updateTableViewLayoutMargins;
- (void)viewDidLoad;

@end
