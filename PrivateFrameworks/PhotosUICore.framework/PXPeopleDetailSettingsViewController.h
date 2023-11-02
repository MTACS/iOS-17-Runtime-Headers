
@interface PXPeopleDetailSettingsViewController : UIViewController <PXPeopleDataSourceDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    PXPeoplePersonDataSource * _dataSource;
    NSArray * _personDetectionTypes;
    PXPeopleSuggestionDataSource * _suggestionDataSource;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) PXPeoplePersonDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *personDetectionTypes;
@property (nonatomic, retain) PXPeopleSuggestionDataSource *suggestionDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)commonInit;
- (void)commonInitWithDataSourceReloadBlock:(id /* block */)arg1;
- (id)dataSource;
- (id)init;
- (id)initWithDataSourceReloadBlock:(id /* block */)arg1;
- (id)initWithPersonDetectionType:(short)arg1;
- (void)loadSuggestionsForPerson:(id)arg1;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (id)personDetectionTypes;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPersonDetectionTypes:(id)arg1;
- (void)setSuggestionDataSource:(id)arg1;
- (id)suggestionDataSource;
- (void)viewDidLoad;

@end
