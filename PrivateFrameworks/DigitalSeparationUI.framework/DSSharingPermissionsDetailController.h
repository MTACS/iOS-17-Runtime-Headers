
@interface DSSharingPermissionsDetailController : DSTableWelcomeController {
    <DSSharingPermissionsDetailDelegate> * _delegate;
    NSArray * _remainingPeople;
    NSArray * _remainingSharingTypes;
    DSSharingPerson * _sharingPerson;
    DSSharingType * _sharingType;
    NSArray * _sortedPeople;
    NSArray * _sortedSourceNames;
    UIViewController * _startingViewController;
}

@property (nonatomic) <DSSharingPermissionsDetailDelegate> *delegate;
@property (nonatomic, retain) NSArray *remainingPeople;
@property (nonatomic, retain) NSArray *remainingSharingTypes;
@property (nonatomic, retain) DSSharingPerson *sharingPerson;
@property (nonatomic, retain) DSSharingType *sharingType;
@property (nonatomic, retain) NSArray *sortedPeople;
@property (nonatomic, retain) NSArray *sortedSourceNames;
@property (nonatomic, retain) UIViewController *startingViewController;

+ (id)detailControllerWithPeople:(id)arg1 startingViewController:(id)arg2 delegate:(id)arg3;
+ (id)detailControllerWithSharingTypes:(id)arg1 startingViewController:(id)arg2 delegate:(id)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateButton;
- (id)alertTextForSources:(id)arg1;
- (id)delegate;
- (void)next;
- (id)personForIndexPath:(id)arg1;
- (void)reloadTableViewData;
- (id)remainingPeople;
- (id)remainingSharingTypes;
- (void)setDelegate:(id)arg1;
- (void)setRemainingPeople:(id)arg1;
- (void)setRemainingSharingTypes:(id)arg1;
- (void)setSharingPerson:(id)arg1;
- (void)setSharingType:(id)arg1;
- (void)setSortedPeople:(id)arg1;
- (void)setSortedSourceNames:(id)arg1;
- (void)setStartingViewController:(id)arg1;
- (id)sharingPerson;
- (void)sharingStoppedForPerson:(id)arg1 sourceNames:(id)arg2 error:(id)arg3;
- (void)sharingStoppedForType:(id)arg1 people:(id)arg2 error:(id)arg3;
- (id)sharingType;
- (id)sortedPeople;
- (id)sortedSourceNames;
- (id)sourceNameForIndexPath:(id)arg1;
- (id)startingViewController;
- (void)stopAllSharing;
- (void)stopSelectedSharing;
- (void)stopSharingSources:(id)arg1 people:(id)arg2 alertLabel:(id)arg3 alertDetail:(id)arg4 completion:(id /* block */)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;

@end
