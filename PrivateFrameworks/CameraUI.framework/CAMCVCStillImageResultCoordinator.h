
@interface CAMCVCStillImageResultCoordinator : NSObject {
    bool  __didReceiveForceRemainingDispatchesIfPossible;
    NSMutableSet * __dispatchedResultSpecifiers;
    NSMutableSet * __handledResultSpecifiers;
    NSMutableDictionary * __pendingAssetAdjustments;
    NSMutableDictionary * __pendingPhotoProperties;
    NSMutableDictionary * __pendingVideoProperties;
    NSMutableSet * __photoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet * __receivedPhotos;
    NSMutableSet * __receivedVideos;
    NSMutableSet * __videoResultSpecifiersDelayingForcedDispatch;
    NSSet * _allExpectedResultSpecifiers;
    bool  _allowMultipleCaptures;
    <CAMCVCStillImageResultCoordinatorDelegate> * _delegate;
    bool  _expectingPairedVideo;
    NSString * _identifier;
    bool  _shouldReturnFilteredPhotosAsSingleAsset;
}

@property (getter=_isDelayingForcedDispatch, nonatomic, readonly) bool _delayingForcedDispatch;
@property (setter=_setDidReceiveForceRemainingDispatchesIfPossible:, nonatomic) bool _didReceiveForceRemainingDispatchesIfPossible;
@property (nonatomic, readonly) NSMutableSet *_dispatchedResultSpecifiers;
@property (nonatomic, readonly) NSMutableSet *_handledResultSpecifiers;
@property (nonatomic, readonly) NSMutableDictionary *_pendingAssetAdjustments;
@property (nonatomic, readonly) NSMutableDictionary *_pendingPhotoProperties;
@property (nonatomic, readonly) NSMutableDictionary *_pendingVideoProperties;
@property (nonatomic, readonly) NSMutableSet *_photoResultSpecifiersDelayingForcedDispatch;
@property (nonatomic, readonly) NSMutableSet *_receivedPhotos;
@property (nonatomic, readonly) NSMutableSet *_receivedVideos;
@property (nonatomic, readonly) NSMutableSet *_videoResultSpecifiersDelayingForcedDispatch;
@property (nonatomic, readonly) NSSet *allExpectedResultSpecifiers;
@property (nonatomic, readonly) bool allowMultipleCaptures;
@property (nonatomic, readonly) <CAMCVCStillImageResultCoordinatorDelegate> *delegate;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool shouldReturnFilteredPhotosAsSingleAsset;

- (void).cxx_destruct;
- (bool)_attemptDispatchForPairWithFilteredResultSpecifiers:(unsigned long long)arg1 unfilteredResultSpecifiers:(unsigned long long)arg2 forceRemainingDispatches:(bool)arg3;
- (bool)_attemptDispatchForResultSpecifiers:(unsigned long long)arg1 forceRemainingDispatches:(bool)arg2;
- (bool)_didReceiveForceRemainingDispatchesIfPossible;
- (void)_dispatchPendingPropertiesForced:(bool)arg1;
- (id)_dispatchedResultSpecifiers;
- (id)_errorForResultSpecifiers:(unsigned long long)arg1 allowMissingVideo:(bool)arg2;
- (id)_errorWithDescription:(id)arg1 code:(long long)arg2;
- (id)_handledResultSpecifiers;
- (bool)_isDelayingForcedDispatch;
- (bool)_isWaitingOnResultSpecifiers:(unsigned long long)arg1;
- (id)_pendingAssetAdjustments;
- (id)_pendingPhotoProperties;
- (id)_pendingVideoProperties;
- (id)_photoResultSpecifiersDelayingForcedDispatch;
- (id)_receivedPhotos;
- (id)_receivedVideos;
- (void)_setDidReceiveForceRemainingDispatchesIfPossible:(bool)arg1;
- (id)_videoResultSpecifiersDelayingForcedDispatch;
- (id)allExpectedResultSpecifiers;
- (bool)allowMultipleCaptures;
- (void)delayForcedDispatchForPhotoResultSpecifiers:(unsigned long long)arg1;
- (void)delayForcedDispatchForVideoResultSpecifiers:(unsigned long long)arg1;
- (id)delegate;
- (void)forceRemainingDispatchesIfPossible;
- (id)identifier;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2 allExpectedResultSpecifiers:(id)arg3 isExpectingPairedVideo:(bool)arg4 allowMultipleCaptures:(bool)arg5 shouldReturnFilteredPhotosAsSingleAsset:(bool)arg6;
- (bool)isExpectingPairedVideo;
- (bool)shouldReturnFilteredPhotosAsSingleAsset;
- (void)updatePhotoProperties:(id)arg1 assetAdjustments:(id)arg2 forResultSpecifiers:(unsigned long long)arg3;
- (void)updateVideoProperties:(id)arg1 forResultSpecifiers:(unsigned long long)arg2 wantsDepthRenderedForStill:(bool)arg3;

@end
