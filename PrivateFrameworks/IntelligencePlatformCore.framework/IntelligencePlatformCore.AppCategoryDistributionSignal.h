
@interface IntelligencePlatformCore.AppCategoryDistributionSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void dateFetcher;
    void distributionProvider;
    void fiveMinutesInSeconds;
    void motionStateActivityIntervalProvider;
    void thirtyMinutesInSeconds;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
