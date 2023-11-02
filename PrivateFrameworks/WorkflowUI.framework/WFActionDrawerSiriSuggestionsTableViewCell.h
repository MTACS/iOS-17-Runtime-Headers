
@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> {
    NSLayoutConstraint * _collectionViewHeightConstraint;
    <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> * _dailyRoutineDelegate;
    UICollectionView * _donationsCollectionView;
    WFActionDrawerSiriSuggestionsCollectionViewManager * _donationsCollectionViewManager;
    UIImage * _icon;
    UIButton * _infoButton;
    INIntent * _intent;
    WFActionDrawerSection * _section;
    WFModuleTitleView * _titleView;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSLayoutConstraint *collectionViewHeightConstraint;
@property (nonatomic) <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> *dailyRoutineDelegate;
@property (nonatomic) UICollectionView *donationsCollectionView;
@property (nonatomic, retain) WFActionDrawerSiriSuggestionsCollectionViewManager *donationsCollectionViewManager;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) UIButton *infoButton;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, readonly) WFActionDrawerSection *section;
@property (nonatomic) WFModuleTitleView *titleView;
@property (nonatomic) UIViewController *viewController;

+ (long long)cellTypeForIntent:(id)arg1;

- (void).cxx_destruct;
- (id)collectionViewHeightConstraint;
- (void)configureForDailyRoutines:(bool)arg1;
- (void)configureLoading;
- (void)configureWithActionDrawerSection:(id)arg1;
- (void)configureWithActionDrawerSection:(id)arg1 dailyRoutineDelegate:(id)arg2 viewController:(id)arg3;
- (id)dailyRoutineDelegate;
- (id)donationsCollectionView;
- (id)donationsCollectionViewManager;
- (id)icon;
- (id)infoButton;
- (void)infoButtonPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)intent;
- (id)section;
- (void)setCollectionViewHeightConstraint:(id)arg1;
- (void)setDailyRoutineDelegate:(id)arg1;
- (void)setDonationsCollectionView:(id)arg1;
- (void)setDonationsCollectionViewManager:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2;
- (id)titleView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewController;

@end
