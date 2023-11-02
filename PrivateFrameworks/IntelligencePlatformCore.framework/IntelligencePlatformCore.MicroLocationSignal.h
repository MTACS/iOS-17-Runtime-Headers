
@interface IntelligencePlatformCore.MicroLocationSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void fiveMinuteInSeconds;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastMicroLocationTimestamp;
    void microLocationCounts;
    void microLocationStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
