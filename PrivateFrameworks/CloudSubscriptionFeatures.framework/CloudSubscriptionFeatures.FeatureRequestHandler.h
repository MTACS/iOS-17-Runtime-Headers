
@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void accountStore;
    void geoCache;
    void taskLimiters;
    void urlSession;
}

- (void).cxx_destruct;
- (void)clearCacheAndNotify;
- (void)getFeatureEligibilityFor:(id)arg1 bundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)requestFeatureWithId:(id)arg1 ignoreCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)requestGeoClassificationFor:(id)arg1 bundleID:(id)arg2 altDSID:(id)arg3 ignoreCache:(bool)arg4 completion:(id /* block */)arg5;

@end
