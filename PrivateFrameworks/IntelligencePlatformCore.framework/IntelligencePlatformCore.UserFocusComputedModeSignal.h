
@interface IntelligencePlatformCore.UserFocusComputedModeSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void includeLastOngoingEventInSessions;
    void userFocusComputedModeStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
