
@interface VKCVisualSearchResultItem : NSObject <VKAnalysisElementDebugMenuProvider> {
    VKCImageAnalysis * _analysis;
    long long  _currentInvocationType;
    MADVIVisualSearchGatingDomainInfo * _domainInfo;
    unsigned long long  _queryID;
    MADVIVisualSearchGatingResultItem * _resultItem;
    MADVIVisualSearchResultItem * _searchItem;
}

@property (nonatomic) VKCImageAnalysis *analysis;
@property (nonatomic) long long currentInvocationType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIMenu *debugMenu;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MADVIVisualSearchGatingDomainInfo *domainInfo;
@property (nonatomic, readonly) NSString *glyphName;
@property (nonatomic, readonly) bool hasFocalPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingBox;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } normalizedIconLocation;
@property (nonatomic) unsigned long long queryID;
@property (nonatomic, retain) MADVIVisualSearchGatingResultItem *resultItem;
@property (nonatomic, retain) MADVIVisualSearchResultItem *searchItem;
@property (nonatomic, readonly) bool shouldPlaceInCorner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasFocalPoint;
- (id)analysis;
- (long long)currentInvocationType;
- (id)debugMenu;
- (id)domainInfo;
- (id)glyphName;
- (bool)hasFocalPoint;
- (id)initWithGatingResultItem:(id)arg1 domain:(id)arg2;
- (id)initWithSearchResultItem:(id)arg1;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingBox;
- (struct CGPoint { double x1; double x2; })normalizedIconLocation;
- (unsigned long long)queryID;
- (id)resultItem;
- (id)searchItem;
- (void)setAnalysis:(id)arg1;
- (void)setCurrentInvocationType:(long long)arg1;
- (void)setDomainInfo:(id)arg1;
- (void)setQueryID:(unsigned long long)arg1;
- (void)setResultItem:(id)arg1;
- (void)setSearchItem:(id)arg1;
- (bool)shouldPlaceInCorner;

@end
