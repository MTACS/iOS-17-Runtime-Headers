
@interface PXCMMSendBackSuggestionSource : PXObservable {
    PXAssetsDataSource * _assetsDataSource;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    bool  _hasInitiatedFetchRequest;
    PHMomentShare * _originatingMomentShare;
    PXCMMContext * _sendBackContext;
    bool  _shouldShowBanner;
    unsigned long long  _sourceType;
    PXCMMSendBackSuggestion * _suggestion;
}

@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) PHMomentShare *originatingMomentShare;
@property (nonatomic, readonly) PXCMMContext *sendBackContext;
@property (nonatomic, readonly) bool shouldShowBanner;
@property (nonatomic, readonly) PXCMMSendBackSuggestion *suggestion;

+ (id)_assetsInDateRanges:(id)arg1;
+ (id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3;
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1;
+ (id)new;
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_allMetadataAssets;
- (id)_createSendBackContext;
- (bool)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1;
- (void)_fetchQueue_fetchSuggestedSendBackContext;
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1;
- (void)_fetchSuggestedSendBackContext;
- (id)_sendBackFetchResultUsingPhotosGraph;
- (id)assetsDataSource;
- (id)init;
- (id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3;
- (id)mutableChangeObject;
- (id)originatingMomentShare;
- (void)performChanges:(id /* block */)arg1;
- (id)sendBackContext;
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1;
- (void)setSendBackContext:(id)arg1;
- (void)setShouldShowBanner:(bool)arg1;
- (void)setSuggestion:(id)arg1;
- (bool)shouldShowBanner;
- (void)startLoading;
- (id)suggestion;

@end
