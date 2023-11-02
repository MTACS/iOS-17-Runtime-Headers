
@interface CKTranscriptCompositorSwift : NSObject {
    void boundarySupplementaryItems;
    void collectionView;
    void collectionViewLayout;
    void contentsInsetReference;
    void datasource;
    void delegate;
    void interSectionSpacing;
    void layoutContext;
    void scrollDirection;
}

@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) long long contentsInsetReference;
@property (nonatomic, retain) id datasource;
@property (nonatomic) <CKTranscriptCompositorDatasourceDelegate> *delegate;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) long long layoutContext;
@property (nonatomic) long long scrollDirection;

- (void).cxx_destruct;
- (id)boundarySupplementaryItems;
- (id)collectionView;
- (id)collectionViewLayout;
- (long long)contentsInsetReference;
- (id)datasource;
- (id)delegate;
- (id)init;
- (id)initWithLayoutContext:(long long)arg1 datasource:(id)arg2;
- (double)interSectionSpacing;
- (long long)layoutContext;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (long long)scrollDirection;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setContentsInsetReference:(long long)arg1;
- (void)setDatasource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setLayoutContext:(long long)arg1;
- (void)setScrollDirection:(long long)arg1;

@end
