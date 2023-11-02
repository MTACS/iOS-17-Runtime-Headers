
@interface IntelligencePlatformCore.ActivityIntervalSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void dateFetcher;
    void motionStateActivityIntervalProvider;
    void oneMinuteInSeconds;
    void queue;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
