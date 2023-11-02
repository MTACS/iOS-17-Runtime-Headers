
@interface PEEditAction : NSObject {
    long long  _actionType;
    <PEEditActionAnalyticsEventBuilderDelegate> * _analyticsEventBuilderDelegate;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic) <PEEditActionAnalyticsEventBuilderDelegate> *analyticsEventBuilderDelegate;
@property (nonatomic, readonly) bool forceRunAsUnadjustedAsset;

- (void).cxx_destruct;
- (long long)actionType;
- (id)analyticsEventBuilderDelegate;
- (id)analyticsPayload;
- (void)applyToLoadResult:(id)arg1 completion:(id /* block */)arg2;
- (bool)forceRunAsUnadjustedAsset;
- (void)setAnalyticsEventBuilderDelegate:(id)arg1;

@end
