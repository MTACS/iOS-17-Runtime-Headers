
@interface VKCVisualSearchResult : NSObject {
    VKCImageAnalysis * _analysis;
    MADVIVisualSearchGatingResult * _gatingResult;
    NSArray * _resultItems;
    MADVIVisualSearchResult * _searchResult;
}

@property (nonatomic) VKCImageAnalysis *analysis;
@property (nonatomic, retain) MADVIVisualSearchGatingResult *gatingResult;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) NSArray *resultItems;
@property (nonatomic, retain) MADVIVisualSearchResult *searchResult;
@property (nonatomic, readonly) NSData *userFeedbackPayload;

- (void).cxx_destruct;
- (id)analysis;
- (id)description;
- (id)gatingResult;
- (id)initWithGatingResult:(id)arg1;
- (id)payload;
- (id)resultItems;
- (id)searchResult;
- (void)setAnalysis:(id)arg1;
- (void)setGatingResult:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (id)userFeedbackPayload;

@end
