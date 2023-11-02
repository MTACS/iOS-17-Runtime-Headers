
@interface SiriVideoIntents.PlayMediaAppSelectionOutput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void $__lazy_storage_$_result_isRequestedApp;
    void $__lazy_storage_$_result_isRequestedAppProbability;
    void provider;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
