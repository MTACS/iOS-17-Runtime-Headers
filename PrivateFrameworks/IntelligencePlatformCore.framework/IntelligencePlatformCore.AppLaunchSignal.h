
@interface IntelligencePlatformCore.AppLaunchSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void appLaunchStream;
    void redactedBundleId;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
