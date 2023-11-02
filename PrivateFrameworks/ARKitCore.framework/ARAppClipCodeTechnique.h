
@interface ARAppClipCodeTechnique : ARImageBasedTechnique {
    struct AppC3DSession { } * _appClipCodeSession;
    NSDictionary * _appClipCodeTrackingOptions;
    NSMutableDictionary * _decodedURLs;
    bool  _ignoreURLLimitation;
    BCSAppClipCodeURLDecoder * _urlDecoder;
}

@property (nonatomic, readonly) bool deterministicMode;
@property (nonatomic, readonly) bool ignoreURLLimitation;

+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;
+ (bool)shouldRunCameraOrScannerPerformanceTestingMode;

- (void).cxx_destruct;
- (long long)captureBehavior;
- (void)dealloc;
- (bool)deterministicMode;
- (bool)ignoreURLLimitation;
- (id)initWithIgnoreURLLimitation:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;
- (void)setPowerUsage:(unsigned long long)arg1;

@end
