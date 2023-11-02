
@interface SLDisambiguationCollectionViewController : UICollectionViewController {
    NSDictionary * _attributionMap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _attributionViewFrame;
    UICollectionViewDiffableDataSource * _dataSource;
    SLHighlight * _highlight;
    bool  _isInitialLoad;
    SLDisambiguationCompositionalLayout * _layout;
    NSDiffableDataSourceSnapshot * _snapshot;
}

@property (nonatomic, retain) NSDictionary *attributionMap;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } attributionViewFrame;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (nonatomic, retain) SLHighlight *highlight;
@property (nonatomic) bool isInitialLoad;
@property (nonatomic, retain) SLDisambiguationCompositionalLayout *layout;
@property (nonatomic, retain) NSDiffableDataSourceSnapshot *snapshot;

- (void).cxx_destruct;
- (id)attributionMap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributionViewFrame;
- (id)cellForIndexPath:(id)arg1 inCollectionView:(id)arg2 withItemIdentifier:(id)arg3;
- (unsigned long long)cellPillViewVariant;
- (void)collectionViewBackgroundTapped:(id)arg1;
- (id)createAttributionMapWithHighlight:(id)arg1;
- (id)dataSource;
- (id)dataSourceWithCollectionView:(id)arg1;
- (id)finalCompositionalLayout;
- (id)finalLayoutGroup:(id)arg1 itemsCount:(unsigned long long)arg2 collectionWidth:(double)arg3 targetItemHeight:(double)arg4;
- (id)finalLayoutSectionForEnvironment:(id)arg1;
- (id)highlight;
- (id)initWithHighlight:(id)arg1;
- (id)initialCompositionalLayout;
- (id)initialLayoutGroup:(id)arg1 itemsCount:(unsigned long long)arg2 collectionWidth:(double)arg3 targetItemHeight:(double)arg4;
- (id)initialLayoutSectionForEnvironment:(id)arg1;
- (bool)isInitialLoad;
- (id)layout;
- (void)loadView;
- (void)setAttributionMap:(id)arg1;
- (void)setAttributionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setIsInitialLoad:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (void)startAnimation;
- (void)updateDataSourceSnapshot;
- (void)viewDidLayoutSubviews;

@end
