
@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPCModelPlaybackResponse, MPModelStoreEquivalencyMapping> {
    MPCModelStorePlaybackItemsRequestAccumulation * _accumulation;
    bool  _finalResponse;
    bool  _invalidForPersonalization;
    NSDate * _invalidationDate;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    NSDictionary * _localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
    ICURLAggregatedPerformanceMetrics * _performanceMetrics;
    MPStoreLibraryPersonalizationResponse * _personalizationResponse;
}

@property (nonatomic, readonly) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (nonatomic, readonly) MPCModelStorePlaybackItemsRequestAccumulation *accumulation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidForPersonalization, nonatomic, readonly) bool invalidForPersonalization;
@property (nonatomic, copy) NSDate *invalidationDate;
@property (nonatomic, copy) NSDictionary *localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
@property (nonatomic, retain) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activeUserDidChangeNotification:(id)arg1;
- (void)_allowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_invalidate;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_personalizationResponse;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (id)accumulation;
- (void)dealloc;
- (id)equivalencySourceStoreAdamIDForLocalStoreAdamID:(long long)arg1;
- (id)initWithRequest:(id)arg1 accumulation:(id)arg2 performanceMetrics:(id)arg3;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 results:(id)arg3 performanceMetrics:(id)arg4;
- (id)invalidationDate;
- (bool)isFinalResponse;
- (bool)isInvalidForPersonalization;
- (id)localStoreAdamIDToEquivalencySourceStoreAdamIDMap;
- (id)performanceMetrics;
- (void)setFinalResponse:(bool)arg1;
- (void)setInvalidationDate:(id)arg1;
- (void)setLocalStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg1;
- (void)setPerformanceMetrics:(id)arg1;

@end
