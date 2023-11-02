
@interface IntelligencePlatformCore.VirtualInteractionsDistributionSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void distributionProvider;
    void fiveMinutesInSeconds;
    void motionStateActivityIntervalProvider;
    void thirtyMinutesInSeconds;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
