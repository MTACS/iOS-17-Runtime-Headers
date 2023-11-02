
@interface SFStartPageCustomizationViewController : UIViewController <PHPickerViewControllerDelegate, SFStartPageBackgroundImageCellDelegate, SFStartPageCustomizationCellDelegate, SFStartPageDataSourceObserving, UICollectionViewDelegate> {
    NSArray * _backgroundImages;
    UICollectionView * _backgroundImagesCollectionView;
    UICollectionViewDiffableDataSource * _backgroundImagesCollectionViewDataSource;
    WBSStartPageBackgroundImagesDataSource * _backgroundImagesDataSource;
    bool  _backgroundSectionUnconditionallyVisible;
    <SFStartPageCustomizationDataSource> * _dataSource;
    NSItemProvider * _generatedBackgroundImageItemProvider;
    NSMutableDictionary * _identifierToCustomizationItemMap;
    NSMutableDictionary * _identifierToFixedCustomizationItemMap;
    unsigned long long  _preferredBackgroundImagesCollectionViewColumnCount;
    unsigned long long  _reloadDataSuppressionCount;
    UICollectionView * _rootCollectionView;
    UICollectionViewDiffableDataSource * _rootCollectionViewDataSource;
    bool  _showsCloseButton;
}

@property <SFStartPageCustomizationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long preferredBackgroundImagesCollectionViewColumnCount;
@property (nonatomic) bool showsCloseButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createGeneratedBackgroundImageItemProvider;
- (void)_dismiss:(id)arg1;
- (void)_setCustomizationSyncWithValue:(id)arg1;
- (void)_updateGeneratedBackgroundImageItemProviderWithImage:(struct RetainPtr<CGImage *> { void *x1; })arg1;
- (void)backgroundImageCellDidSelectClearButton:(id)arg1;
- (void)backgroundImagesDidChange:(id)arg1;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (id)dataSource;
- (void)dealloc;
- (void)didChangeCustomizationItemOrder:(id)arg1 forVariant:(long long)arg2;
- (id)identifierToCustomizationItemMapForItemVariant:(long long)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)makeBackgroundImageRegistration;
- (id)makeBackgroundImageToggleRegistration;
- (id)makeBackgroundImagesCollectionViewLayout;
- (id)makeCustomizationItemRegistration;
- (id)makeCustomizationSyncFooterRegistration;
- (id)makeCustomizationSyncToggleRegistration;
- (id)makeFixedCustomizationItemRegistration;
- (id)makeReorderingHandlers;
- (id)makeRootCollectionViewLayout;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (unsigned long long)preferredBackgroundImagesCollectionViewColumnCount;
- (void)reloadDataAnimatingDifferences:(bool)arg1;
- (void)reloadNavigationItemAnimated:(bool)arg1;
- (void)setCustomizationItemIdentifier:(id)arg1 inSection:(id)arg2 enabled:(bool)arg3;
- (void)setDataSource:(id)arg1;
- (void)setPreferredBackgroundImagesCollectionViewColumnCount:(unsigned long long)arg1;
- (void)setShowsCloseButton:(bool)arg1;
- (void)setUpBackgroundImagesCollectionViewDataSource;
- (void)setUpRootCollectionViewDataSource;
- (void)showPhotoPicker;
- (bool)showsBackgroundImagesCell;
- (bool)showsCloseButton;
- (void)startPageCustomizationCellDidChangeValue:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
