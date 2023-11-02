
@interface PXMutableCuratedLibraryStatistics : PXCuratedLibraryStatistics {
    long long * _counts;
}

- (long long)_coutIndexForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3;
- (void)_incrementCountForPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3;
- (void)appendStatisticsForSection:(long long)arg1 assetsDataSource:(id)arg2 playbackController:(id)arg3 visibleItems:(id)arg4 heroItems:(id)arg5 keyItem:(long long)arg6;
- (void)dealloc;
- (id)init;
- (long long)numberOfAssetsWithPlaybackStyle:(long long)arg1 displayProminence:(long long)arg2 autoPlaybackEligibility:(long long)arg3;

@end
