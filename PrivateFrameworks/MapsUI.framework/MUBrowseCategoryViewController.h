
@interface MUBrowseCategoryViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _browseItems;
    MUBrowseCategoryCollectionView * _collectionView;
    NSLayoutConstraint * _collectionViewBottomConstraint;
    MUFixedToTopCollectionViewFlowLayout * _collectionViewFlowLayout;
    <MUBrowseCategoryViewControllerDelegate> * _delegate;
    bool  _disableBottomPadding;
    MKMapItem * _mapItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredCellSize;
    UIFont * _preferredCellTitleLabelFont;
}

@property (nonatomic, retain) NSArray *browseItems;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, retain) MUBrowseCategoryCollectionView *collectionView;
@property (nonatomic, retain) NSLayoutConstraint *collectionViewBottomConstraint;
@property (nonatomic, retain) MUFixedToTopCollectionViewFlowLayout *collectionViewFlowLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUBrowseCategoryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableBottomPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredCellSize;
@property (nonatomic, retain) UIFont *preferredCellTitleLabelFont;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_ppt_postNotificationName:(id)arg1 object:(id)arg2;
- (id)browseItems;
- (id)buttons;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewBottomConstraint;
- (double)collectionViewBottomPadding;
- (id)collectionViewFlowLayout;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)delegate;
- (id)didDisplayCategoriesNotificationName;
- (bool)disableBottomPadding;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (int)placeCardTypeForAnalytics;
- (struct CGSize { double x1; double x2; })preferredCellSize;
- (id)preferredCellTitleLabelFont;
- (void)setBrowseItems:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewBottomConstraint:(id)arg1;
- (void)setCollectionViewFlowLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableBottomPadding:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPreferredCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredCellTitleLabelFont:(id)arg1;
- (void)setupCollectionView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)willStartDisplayCategoriesNotificationName;

@end
