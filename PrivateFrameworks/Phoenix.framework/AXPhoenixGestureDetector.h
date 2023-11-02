
@interface AXPhoenixGestureDetector : NSObject <AXPhoenixAssetMonitorDelegate, AXPhoenixClassifierDelegate, AXPhoenixMitigatorDelegate> {
    AXPhoenixAnalytics * _analytics;
    AXPhoenixAssetMonitor * _assetMonitor;
    unsigned long long  _assetVersion;
    AXPhoenixClassifier * _classifier;
    bool  _clientStartedMotion;
    CMMotionManager * _cmMotionManager;
    AXPhoenixConfiguration * _configuration;
    <AXPhoenixGestureDetectorDelegate> * _delegate;
    NSURL * _localURL;
    AXPhoenixMitigator * _mitigator;
    NSOperationQueue * _motionInputQueue;
    NSObject<OS_dispatch_queue> * _queue;
    float  _tapSpeed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)urlOfModelInThisBundle;

- (void).cxx_destruct;
- (id)_createClassifierModelURL;
- (id)_createConfiguration;
- (bool)_initializeAssetDrivenComponentsWithLocalURL:(id)arg1 assetVersion:(unsigned long long)arg2;
- (id)_mobileAssetPathForConfigOrNil;
- (id)_mobileAssetURLForModelOrNil;
- (void)_resetAssetDrivenComponents;
- (void)_setPolicyOption:(int)arg1;
- (void)_startClassifierWithCompletion:(id /* block */)arg1;
- (void)_startWithCompletion:(id /* block */)arg1;
- (void)_stopClassifier;
- (void)_stopWithCompletion:(id /* block */)arg1;
- (bool)falsePositiveLoggingEnabled;
- (id)initWithDelegate:(id)arg1;
- (void)modelDidUpdate:(id)arg1 assetVersion:(unsigned long long)arg2;
- (bool)needsToUpdateModelToVersion:(long long)arg1;
- (void)phoenixClassifier:(id)arg1 failedWithError:(id)arg2;
- (void)phoenixClassifierDidDetectDoubleTap:(id)arg1 data:(struct { double x1; double x2; double x3; double x4; })arg2 context:(id)arg3;
- (void)phoenixClassifierDidDetectTripleTap:(id)arg1 data:(struct { double x1; double x2; double x3; double x4; })arg2 context:(id)arg3;
- (void)phoenixClassifierDidLogFile:(id)arg1;
- (void)phoenixMitigator:(id)arg1 didFailWithError:(id)arg2;
- (void)phoenixMitigator:(id)arg1 displayOnDidChange:(bool)arg2;
- (void)phoenixMitigator:(id)arg1 touchOnDidChange:(bool)arg2;
- (void)reportFalsePositive:(id)arg1;
- (void)setDoubleTapPolicy;
- (void)setFalsePositiveLoggingEnabled:(bool)arg1;
- (void)setGeneralPolicy;
- (void)setTapSpeed:(float)arg1;
- (void)setTripleTapPolicy;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)stopWithCompletion:(id /* block */)arg1;

@end
