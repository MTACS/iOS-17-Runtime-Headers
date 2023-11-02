
@interface CKTranscriptCompositor : NSObject {
    CKTranscriptCompositorSwift * _representedObject;
}

@property (nonatomic, retain) NSArray *boundarySupplementaryItems;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) long long contentsInsetReference;
@property (nonatomic, readonly) id datasource;
@property (nonatomic) <CKTranscriptCompositorDatasourceDelegate> *delegate;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic, readonly) long long layoutContext;
@property (nonatomic, retain) CKTranscriptCompositorSwift *representedObject;
@property (nonatomic) long long scrollDirection;

- (void).cxx_destruct;
- (id)boundarySupplementaryItems;
- (id)collectionView;
- (id)collectionViewLayout;
- (long long)contentsInsetReference;
- (id)datasource;
- (id)delegate;
- (id)initWithLayoutContext:(long long)arg1 datasource:(id)arg2;
- (double)interSectionSpacing;
- (long long)layoutContext;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)representedObject;
- (long long)scrollDirection;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentsInsetReference:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setScrollDirection:(long long)arg1;

@end
