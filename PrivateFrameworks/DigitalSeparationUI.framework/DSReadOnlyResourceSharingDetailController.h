
@interface DSReadOnlyResourceSharingDetailController : DSTableWelcomeController <DSController> {
    <DSNavigationDelegate> * _delegate;
    <DSReadOnlyResourceSharingDetailDelegate> * _detailDelegate;
    bool  _isFinishedReviewing;
    NSArray * _remainingSharingPeople;
    NSArray * _remainingSharingTypes;
    DSSharingPerson * _sharingPerson;
    DSSharingType * _sharingType;
    UIViewController * _startingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <DSReadOnlyResourceSharingDetailDelegate> *detailDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinishedReviewing;
@property (nonatomic, retain) NSArray *remainingSharingPeople;
@property (nonatomic, retain) NSArray *remainingSharingTypes;
@property (nonatomic, retain) DSSharingPerson *sharingPerson;
@property (nonatomic, retain) DSSharingType *sharingType;
@property (nonatomic, retain) UIViewController *startingViewController;
@property (readonly) Class superclass;

+ (id)_removeDisplayedFromArray:(id)arg1;
+ (id)initWithSharingPeople:(id)arg1 startingViewController:(id)arg2 delegate:(id)arg3;
+ (id)initWithSharingTypes:(id)arg1 startingViewController:(id)arg2 delegate:(id)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_finishReviewingReadOnlySharing;
- (void)_learnMorePressed;
- (void)_pushNextPane;
- (void)_removeFromView;
- (id)delegate;
- (id)detailDelegate;
- (bool)isFinishedReviewing;
- (id)remainingSharingPeople;
- (id)remainingSharingTypes;
- (void)setDelegate:(id)arg1;
- (void)setDetailDelegate:(id)arg1;
- (void)setIsFinishedReviewing:(bool)arg1;
- (void)setRemainingSharingPeople:(id)arg1;
- (void)setRemainingSharingTypes:(id)arg1;
- (void)setSharingPerson:(id)arg1;
- (void)setSharingType:(id)arg1;
- (void)setStartingViewController:(id)arg1;
- (id)sharingPerson;
- (id)sharingType;
- (id)startingViewController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
