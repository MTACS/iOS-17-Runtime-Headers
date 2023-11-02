
@interface VUISeasonPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUIFamilySharingContentProtocol, VUILibraryDataSourceDelegate> {
    VUIViewControllerContentPresenter * _contentPresenter;
    UIViewController * _currentSeasonViewController;
    VUIMediaEntitiesDataSource * _dataSource;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    VUIFamilyMember * _familyMember;
    bool  _lastViewedSeasonWasManuallyDeleted;
    _VUISeasonPickerView * _seasonPickerView;
    VUISeasonPickerCollectionViewCell * _sizingCell;
}

@property (nonatomic, retain) VUIViewControllerContentPresenter *contentPresenter;
@property (nonatomic, retain) UIViewController *currentSeasonViewController;
@property (nonatomic, retain) VUIMediaEntitiesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic, retain) VUIFamilyMember *familyMember;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastViewedSeasonWasManuallyDeleted;
@property (nonatomic, retain) _VUISeasonPickerView *seasonPickerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_getSeasonIdentifiersFromSeasons;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)contentPresenter;
- (id)currentSeasonViewController;
- (id)dataSource;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (id)diffableDataSource;
- (id)familyMember;
- (id)initWithDataSource:(id)arg1;
- (bool)lastViewedSeasonWasManuallyDeleted;
- (void)loadView;
- (id)seasonPickerView;
- (void)setContentPresenter:(id)arg1;
- (void)setCurrentSeasonViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setFamilyMember:(id)arg1;
- (void)setLastViewedSeasonWasManuallyDeleted:(bool)arg1;
- (void)setSeasonPickerView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
