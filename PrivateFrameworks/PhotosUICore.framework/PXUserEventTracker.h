
@interface PXUserEventTracker : PXUserEventTrackerCommon {
    unsigned long long  _MaxDepthOfRelatedJumps;
    NSHashTable * __relatedLookupTable;
    double  _timeLoggedOnDetailViewWillAppear;
    double  _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long  _totalNumberOfRelatedJumps;
}

@property (setter=_setRelatedLookupTable:, nonatomic, retain) NSHashTable *_relatedLookupTable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (struct __CFString { }*)_aggdKeyForFirstTimeExperienceIsReady:(bool)arg1 librarySize:(long long)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { }*)arg1 value:(long long)arg2;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (id)_relatedLookupTable;
- (void)_resetDetailViewTraversalStatistics;
- (void)_setRelatedLookupTable:(id)arg1;
- (void)didConfirmDeleteOfMemory;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)didNavigateInOneUpFromOrigin:(long long)arg1;
- (void)didPlayMovieForAssetCollection:(id)arg1;
- (void)didPresentOneUpFromOrigin:(long long)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (id)init;
- (bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logFirstTimeExpericeReadiness:(bool)arg1 forLibrarySize:(long long)arg2;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouInboxItemSelectedWithType:(long long)arg1;
- (void)logForYouInboxViewedCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouMemoriesFeedCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionViewedCount;
- (void)logImpressionCountForEventSource:(unsigned long long)arg1;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logNavigationListViewTapWithKey:(struct __CFString { }*)arg1;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { }*)arg1;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (void)logViewCountForLogSubState:(unsigned long long)arg1;
- (void)logViewCountForLogSubSubState:(unsigned long long)arg1;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (void)willViewMemoriesFeedView;

@end
