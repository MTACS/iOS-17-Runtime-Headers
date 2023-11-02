
@interface ReaderFormatViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionViewCellRegistration * _cellRegistrations;
    UICollectionView * _collectionView;
    <_SFSettingsAlertOptionsGroupController> * _fontGroupController;
    long long  _provenance;
    <SFReaderContext> * _readerContext;
    SFReaderAppearanceThemeSelector * _themeSelector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) <SFReaderContext> *readerContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCloseButton;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)initWithReaderContext:(id)arg1 provenance:(long long)arg2;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)provenance;
- (id)readerContext;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
