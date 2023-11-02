
@interface AXSDKShotModelManager : NSObject <SNResultsObserving> {
    NSObject<OS_dispatch_queue> * _audioQueue;
    NSMutableDictionary * _currentRequests;
    <AXSDKShotModelManagerDelegate> * _delegate;
    SNAudioStreamAnalyzer * _streamAnalyzer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *audioQueue;
@property (nonatomic, readonly) NSArray *currentDetectors;
@property (nonatomic, retain) NSMutableDictionary *currentRequests;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXSDKShotModelManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)modelPathForDetector:(id)arg1;
+ (id)requestForDetector:(id)arg1;

- (void).cxx_destruct;
- (bool)addCustomDetector:(id)arg1;
- (id)audioQueue;
- (id)currentDetectors;
- (id)currentRequests;
- (id)delegate;
- (id)init;
- (void)processAudioBuffer:(id)arg1 atTime:(id)arg2;
- (void)removeAllDetectors;
- (bool)removeCustomDetector:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (void)setAudioQueue:(id)arg1;
- (void)setCurrentRequests:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)startDetectionWithFormat:(id)arg1;
- (void)stopDetection;
- (bool)streamAnalyzerIsRunning;

@end
