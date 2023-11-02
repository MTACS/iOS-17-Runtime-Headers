
@interface SFCreditCardFillingViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPredictiveViewController> {
    double  _cachedCellWidth;
    UICollectionView * _collectionView;
    NSArray * _creditCards;
    SFFormAutocompleteState * _formAutocompleteState;
    double  _lastLayoutWidth;
    UIImageView * _leftShadowView;
    UIImageView * _rightShadowView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayedCandidates;
@property (nonatomic, readonly) SFFormAutocompleteState *formAutocompleteState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_calculateCellWidthForCollectionViewWidth:(double)arg1;
- (void)_cardDataChanged:(id)arg1;
- (void)_loadCardData;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)formAutocompleteState;
- (id)initWithFormAutocompleteState:(id)arg1;
- (bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
