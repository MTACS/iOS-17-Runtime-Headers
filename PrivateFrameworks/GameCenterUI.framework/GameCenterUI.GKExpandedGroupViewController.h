
@interface GameCenterUI.GKExpandedGroupViewController : GameCenterUI.GKExpandedGroupBaseViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void collectionView;
    void collectionViewHeightConstraint;
    void container;
    void contentViewWidthConstraint;
    void cornerRadius;
    void dataSourceIdentifier;
    void delegate;
    void doneButton;
    void maxPlayerCount;
    void multiplayerPickerDataSource;
    void pickerPlayerCellReuseIdentifier;
    void pickerPlayerCellReuseIdentifierAX;
    void playerSelectionProxy;
    void players;
    void selectedPlayerCount;
    void titleLabel;
    void visualEffectView;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (nonatomic) UIView *container;
@property (nonatomic) NSLayoutConstraint *contentViewWidthConstraint;
@property (nonatomic) <_TtP12GameCenterUI37GKExpandedGroupViewControllerDelegate_> *delegate;
@property (nonatomic) UIButton *doneButton;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionViewHeightConstraint;
- (void)configureWithPlayers:(id)arg1 groupName:(id)arg2 caption:(id)arg3 playerSelectionProxy:(id)arg4;
- (id)container;
- (id)contentViewWidthConstraint;
- (id)delegate;
- (void)dismissView;
- (id)doneButton;
- (void)doneButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewHeightConstraint:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContentViewWidthConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)visualEffectView;

@end
