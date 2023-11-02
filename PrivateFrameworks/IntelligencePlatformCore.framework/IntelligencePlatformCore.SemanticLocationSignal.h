
@interface IntelligencePlatformCore.SemanticLocationSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void includeLastOngoingEventInSessions;
    void semanticLocationStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
