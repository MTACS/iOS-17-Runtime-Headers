
@interface IntelligencePlatformCore.SoundAnalysisSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void lookBackWindowInSecs;
    void rawFeatureNames;
    void soundAnalysisStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
