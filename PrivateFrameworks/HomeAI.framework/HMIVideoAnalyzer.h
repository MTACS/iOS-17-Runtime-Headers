
@interface HMIVideoAnalyzer : HMFObject <HMDCameraRecordingSessionVideoAnalyzer, HMFLogging> {
    HMIAnalysisStateManager * _analysisStateManager;
    HMIVideoAnalyzerConfiguration * _configuration;
    <HMIVideoAnalyzerDelegate> * _delegate;
    NSSet * _externalPersonManagers;
    HMIHomePersonManager * _homePersonManager;
    NSUUID * _identifier;
    NSDictionary * _options;
    HMIVideoAnalyzerMutableReport * _report;
    HMIVideoAnalyzerState * _state;
    unsigned long long  _status;
}

@property (nonatomic) double analysisFPS;
@property (retain) HMIAnalysisStateManager *analysisStateManager;
@property (readonly, copy) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) double delay;
@property <HMDCameraRecordingSessionVideoAnalyzerDelegate> *delegate;
@property <HMIVideoAnalyzerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool encode;
@property (copy) NSSet *externalPersonManagers;
@property (retain) NSSet *externalPersonManagers;
@property (readonly) unsigned long long hash;
@property (retain) HMIHomePersonManager *homePersonManager;
@property (readonly) NSUUID *identifier;
@property (nonatomic) bool monitored;
@property (readonly, copy) NSDictionary *options;
@property (readonly) HMIVideoAnalyzerMutableReport *report;
@property (readonly) HMIVideoAnalyzerState *state;
@property (readonly) unsigned long long status;
@property (readonly) Class superclass;

+ (id)allowedClasses;
+ (id)analyzerWithConfiguration:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
+ (id)analyzerWithConfiguration:(id)arg1 identifier:(id)arg2 remote:(bool)arg3 error:(id*)arg4;
+ (id)analyzerWithOptions:(id)arg1 error:(id*)arg2;
+ (id)logCategory;

- (void).cxx_destruct;
- (double)analysisFPS;
- (id)analysisStateManager;
- (void)analyzeFragment:(id)arg1 configuration:(id)arg2;
- (void)cancel;
- (id)configuration;
- (void)dealloc;
- (double)delay;
- (id)delegate;
- (bool)encode;
- (id)externalPersonManagers;
- (id)finalizeFragmentResult:(id)arg1 homePersonManager:(id)arg2 analysisStateManager:(id)arg3;
- (void)finish;
- (void)finishWithCompletionHandler:(id /* block */)arg1;
- (void)flush;
- (void)flushAsync;
- (void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleMessageWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)homePersonManager;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;
- (id)logIdentifier;
- (bool)monitored;
- (id)options;
- (id)report;
- (void)setAnalysisFPS:(double)arg1;
- (void)setAnalysisStateManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncode:(bool)arg1;
- (void)setExternalPersonManagers:(id)arg1;
- (void)setHomePersonManager:(id)arg1;
- (void)setMonitored:(bool)arg1;
- (id)state;
- (unsigned long long)status;

@end
