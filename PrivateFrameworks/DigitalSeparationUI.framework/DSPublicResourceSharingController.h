
@interface DSPublicResourceSharingController : DSTableWelcomeController <DSController> {
    <DSNavigationDelegate> * _delegate;
    DSSharingPermissions * _permissions;
    NSMutableSet * _selectedTypes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DSSharingPermissions *permissions;
@property (nonatomic, retain) NSMutableSet *selectedTypes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_pushNextPane;
- (void)_updateButton;
- (void)_updateTitle;
- (id)delegate;
- (id)init;
- (id)permissions;
- (id)publicSharingTypeForIndexPath:(id)arg1;
- (void)reloadTableViewData;
- (id)selectedTypes;
- (void)setDelegate:(id)arg1;
- (void)setPermissions:(id)arg1;
- (void)setSelectedTypes:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldShow;
- (void)stopAllSharing;
- (void)stopSelectedSharing;
- (void)stopSharingFailedWithError:(id)arg1;
- (void)stopSharingTypes:(id)arg1 alertLabel:(id)arg2 alertDetail:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(bool)arg1;
- (id)workQueue;

@end
