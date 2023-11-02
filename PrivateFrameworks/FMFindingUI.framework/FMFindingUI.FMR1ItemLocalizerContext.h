
@interface FMFindingUI.FMR1ItemLocalizerContext : NSObject <PRItemLocalizerDelegate> {
    void activity;
    void applicationIsInBackground;
    void backgroundTaskID;
    void connectionContext;
    void decrementItemLocalizerHandler;
    void error;
    void findable;
    void hasCalledConfigure;
    void incrementItemLocalizerHandler;
    void itemLocalizer;
    void itemLocalizerState;
    void itemState;
    void lastLoggedRangeEstimate;
    void rangingOnly;
    void releaseItemLocalizerWorkItem;
    void stopAsked;
    void subscriptions;
    void updateRangeEstimateLogCounter;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)didFailWithError:(id)arg1;
- (void)didUpdateDevicePose:(id)arg1;
- (void)didUpdateItemPosition:(id)arg1;
- (void)didUpdateRangeEstimate:(id)arg1;
- (id)init;
- (void)itemChangedState:(unsigned long long)arg1;
- (void)itemLocalizerChangedActivity:(unsigned long long)arg1;
- (void)itemLocalizerChangedState:(unsigned long long)arg1;
- (void)pathIsDegenerate:(id)arg1;
- (void)willIntegrateDevicePose:(id)arg1;
- (void)willIntegrateProximity:(id)arg1;

@end
