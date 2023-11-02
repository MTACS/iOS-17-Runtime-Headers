
@interface iCloudSubscriptionOptimizerDaemon.FeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void $__lazy_storage_$_appLaunchFeatureProvier;
    void $__lazy_storage_$_biomeFocusFeatureProvider;
    void $__lazy_storage_$_biomeNotificationFeatureProvider;
    void $__lazy_storage_$_simpleTimeFeatureProvider;
    void $__lazy_storage_$_usageTrackingFeatureProvider;
    void biomeManager;
    void displayTimestamp;
    void featureNames;
    void featureNamesToBuildFeatureArray;
    void offsetMins;
    void offsetTimeInterval;
    void pushTimestamp;
    void timestamp;
}

@property (nonatomic, copy) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (void)setFeatureNames:(id)arg1;

@end
