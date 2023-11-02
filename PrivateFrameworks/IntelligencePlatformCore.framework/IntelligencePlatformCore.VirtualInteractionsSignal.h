
@interface IntelligencePlatformCore.VirtualInteractionsSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  config;
    void publisher;
    void virtualInteractionsStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
