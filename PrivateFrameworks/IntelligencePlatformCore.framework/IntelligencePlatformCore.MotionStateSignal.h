
@interface IntelligencePlatformCore.MotionStateSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void filteringEnabledInDataProviders;
    void motionStateEvents;
    void motionStateStream;
    void smoothingInterval;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
