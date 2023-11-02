
@interface NMUMetricsReporter : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_actionNameFromAlertAction:(unsigned long long)arg1;
+ (id)_actionNameFromMoreActionType:(unsigned long long)arg1;
+ (id)_alertReasonFromDownloadWaitingReason:(unsigned long long)arg1;
+ (id)_alertReasonFromKeepLocalErrorAlertReason:(unsigned long long)arg1;
+ (id)_contextNameFromMoreActionContextType:(unsigned long long)arg1;
+ (id)_endpointNameFromEndpointType:(unsigned long long)arg1;
+ (id)_launcherNameForLaunchURLType:(unsigned long long)arg1;
+ (id)_processName;
+ (id)_stringForRoutePickingResult:(unsigned long long)arg1;
+ (id)_viewNameForViewType:(unsigned long long)arg1;
+ (void)incrementAutoPlayChangeCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementBrowsingCountForViewType:(unsigned long long)arg1;
+ (void)incrementBrowsingCountForViewType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2;
+ (void)incrementCrownBasedVolumeControlCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementLaunchCountForLaunchURLType:(unsigned long long)arg1;
+ (void)incrementPlaybackRoutePickerPresentationCount;
+ (void)incrementPlaybackShuffleAllCountFromViewType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2;
+ (void)incrementPlaybackStartCountFromViewType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2;
+ (void)incrementPlaybackStartCountFromViewType:(unsigned long long)arg1 index:(long long)arg2 endpointType:(unsigned long long)arg3;
+ (void)incrementRepeatModeChangeCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementRouteChangeCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementRouteSelectCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementRouteSelectionResult:(unsigned long long)arg1 endpointType:(unsigned long long)arg2;
+ (void)incrementShuffleModeChangeCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementTapCountForDownloadWaitingReason:(unsigned long long)arg1 action:(unsigned long long)arg2;
+ (void)incrementTapCountForKeepLocalErrorAlertReason:(unsigned long long)arg1 action:(unsigned long long)arg2;
+ (void)incrementTapCountForMoreActionType:(unsigned long long)arg1 context:(unsigned long long)arg2;
+ (void)incrementTapCountForMoreActionType:(unsigned long long)arg1 context:(unsigned long long)arg2 endpointType:(unsigned long long)arg3;
+ (void)incrementTrackListTrackSelectionCountWithEndpointType:(unsigned long long)arg1;
+ (void)incrementW1RouteAutoSelectionResult:(unsigned long long)arg1;
+ (id)sharedMetricsReporter;
+ (void)updatePinnedAlbumsCount:(long long)arg1;
+ (void)updatePinnedPlaylistsCount:(long long)arg1;
+ (void)updatePinnedRecommendationsCount:(long long)arg1;
+ (void)updateTopLevelContainersCount:(long long)arg1;

- (void).cxx_destruct;
- (void)_sendEvent:(id)arg1 payload:(id)arg2;
- (id)init;

@end
