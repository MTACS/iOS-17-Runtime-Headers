
@protocol PUOneUpEventTracker <PXViewControllerEventTracker>

@required

- (void)endLoggingTimeInterval:(long long)arg1 event:(NSString *)arg2;
- (void)logInfoPanelClosedBy:(long long)arg1;
- (void)logInfoPanelOpenedBy:(long long)arg1;
- (void)logInfoPanelRotatedToHorizontalView;
- (void)logInfoPanelShownAndSwipeToNewAsset;
- (void)logTipPresentedForType:(long long)arg1;
- (void)logUserDidPlayLivePhoto:(id <PUDisplayAsset>)arg1;
- (void)logUserDidPlayLivePhoto:(id <PUDisplayAsset>)arg1 pressOnSubject:(bool)arg2;
- (void)logUserWillPlayLivePhoto:(id <PUDisplayAsset>)arg1;
- (void)logUserWillPlayLivePhoto:(id <PUDisplayAsset>)arg1 firstTimeWaitDuration:(double)arg2;
- (void)logVitalityDidEndForLivePhoto:(id <PUDisplayAsset>)arg1;
- (long long)startLoggingTimeInterval;

@end
