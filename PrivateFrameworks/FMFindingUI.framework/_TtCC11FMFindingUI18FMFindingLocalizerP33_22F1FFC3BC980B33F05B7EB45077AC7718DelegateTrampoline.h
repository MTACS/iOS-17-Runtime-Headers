
@interface _TtCC11FMFindingUI18FMFindingLocalizerP33_22F1FFC3BC980B33F05B7EB45077AC7718DelegateTrampoline : NSObject <PRBTGroupLocalizerDelegate, PRDevicePoseProviderDelegate> {
    void delegate;
    void owner;
    void updateRangeEstimateWatchdogWorkItem;
}

- (void).cxx_destruct;
- (void)devicePoseUpdated:(id)arg1;
- (void)didFailWithError:(id)arg1 onItem:(id)arg2;
- (void)didFindItem:(id)arg1;
- (void)didStartRangingOn:(id)arg1 withError:(id)arg2;
- (void)didStopRangingOn:(id)arg1 withError:(id)arg2;
- (void)didUpdateBTProximity:(id)arg1;
- (id)init;
- (void)invalidPoseDetected;
- (void)willIntegrateBTRSSI:(id)arg1;

@end
