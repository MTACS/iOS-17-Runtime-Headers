
@interface AXSDDetectorManager : NSObject <SNResultsObserving> {
    NSObject<OS_dispatch_queue> * _analyzerQueue;
    NSMutableDictionary * _currentAssetIdsByType;
    SNDetectSoundRequest * _currentGeneralApplianceRequest;
    NSMutableDictionary * _currentRequestsByAssetID;
    <AXSDDetectorManagerDelegate> * _delegate;
    SNAudioStreamAnalyzer * _streamAnalyzer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *analyzerQueue;
@property (nonatomic, readonly) NSArray *currentDetectors;
@property (nonatomic, retain) SNDetectSoundRequest *currentGeneralApplianceRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSDDetectorManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)detectorRequestForDetector:(id)arg1;
+ (id)detectorRequestForGeneralApplianceDetector;
+ (void)initializeModelMap;
+ (id)modelPathForURL:(id)arg1 detectionType:(id)arg2;
+ (void)setTestBundle:(id)arg1;

- (void).cxx_destruct;
- (void)_addCurrentRequest:(id)arg1 withDetector:(id)arg2;
- (bool)_addRequestToAnalyzer:(id)arg1;
- (id)_currentAssetIDForDetectionType:(id)arg1;
- (id)_currentRequestForDetectionType:(id)arg1;
- (id)_currentRequests;
- (void)_removeAllRequestsFromAnalyzer;
- (void)_removeCurrentRequestForDetectionType:(id)arg1;
- (void)_removeRequestFromAnalyzer:(id)arg1;
- (bool)_startDetectionWithFormat:(id)arg1;
- (void)_stopDetection;
- (bool)_testAudioFile:(id)arg1;
- (bool)addAllDetectors;
- (bool)addDetector:(id)arg1;
- (bool)addDetectorType:(id)arg1;
- (bool)addGeneralApplianceDetector;
- (id)analyzerQueue;
- (id)currentDetectors;
- (id)currentGeneralApplianceRequest;
- (id)delegate;
- (id)detectorRequestForDetectionType:(id)arg1;
- (id)init;
- (void)processAudioBuffer:(id)arg1 atTime:(id)arg2;
- (void)removeAllDetectors;
- (bool)removeDetector:(id)arg1;
- (bool)removeDetectorType:(id)arg1;
- (bool)removeGeneralApplianceDetector;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (void)setAnalyzerQueue:(id)arg1;
- (void)setCurrentGeneralApplianceRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)startDetectionWithFormat:(id)arg1;
- (bool)startGeneralApplianceDetectionWithFormat:(id)arg1;
- (void)stopDetection;
- (bool)streamAnalyzerIsRunning;

@end
