
@interface WKUIAssetLoadStatusProvider : NSObject {
    void assetClient;
    void assetLoadStatus;
    void bundleProgressSubscriptionToken;
    void bundleReason;
    void bundleUpdatedSubscriptionToken;
    void eventHub;
    void observers;
    void workoutIdentifier;
}

@property (nonatomic) long long assetLoadStatus;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)assetLoadStatus;
- (id)init;
- (id)initWithWorkoutIdentifier:(id)arg1 dependencies:(id)arg2 assetLoadStatus:(long long)arg3 bundleReason:(long long)arg4;
- (void)removeObserver:(id)arg1;
- (void)setAssetLoadStatus:(long long)arg1;

@end
