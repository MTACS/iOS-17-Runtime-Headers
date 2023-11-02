
@interface IntelligencePlatformCore.InferredModeSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void filteringEnabledInDataProviders;
    void includeLastOngoingEventInSessions;
    void inferredModeConfidenceThreshold;
    void inferredModeEvent;
    void inferredModeStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
