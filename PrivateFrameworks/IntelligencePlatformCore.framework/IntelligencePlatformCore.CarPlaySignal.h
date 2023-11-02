
@interface IntelligencePlatformCore.CarPlaySignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void carPlayStream;
    void includeLastOngoingEventInSessions;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
