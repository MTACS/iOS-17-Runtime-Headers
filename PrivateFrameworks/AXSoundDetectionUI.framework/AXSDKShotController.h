
@interface AXSDKShotController : NSObject <AXSDDetectorManagerDelegate, AXSDKShotDetectorQueueManagerDelegate, AXSDKShotRecordingManagerDelegate, AXSDListenEngineDelegate, AXSDUltronModelAssetManagerDelegate, HearingMLHelperServiceDelegate> {
    AXSDKShotDetectorQueueManager * _detectorQueueManager;
    AXSDKShotRecordingManager * _kShotRecordingManager;
    AXSDListenEngine * _listenEngine;
    NSMutableDictionary * _listenerHanders;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    AXSDKShotDetector * _trainingDetector;
    unsigned long long  _visualizationBucketCount;
    HearingMLHelperService * _xpcHelperService;
    AXSDDetectorManager * detectorManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXSDDetectorManager *detectorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visualizationBucketCount;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_retrainModelIdentifierUpdated;
- (void)addGeneralApplianceDetector;
- (void)addListenType:(id)arg1;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyAndDetectorsAdded;
- (void)assetsReadyForUltronManager:(id)arg1;
- (void)deregisterListener:(id)arg1;
- (id)detectorManager;
- (void)hearingMLHelperService:(id)arg1 eventOccurred:(long long)arg2;
- (id)init;
- (void)kickoffTrainingForDetector:(id)arg1;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2 isFile:(bool)arg3;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (void)registerListener:(id)arg1 forRecordingUpdates:(id /* block */)arg2;
- (void)removeAllListenTypes;
- (void)savedTrainingRecordingForDetector:(id)arg1;
- (void)setDetectorManager:(id)arg1;
- (void)setVisualizationBucketCount:(unsigned long long)arg1;
- (void)startListening;
- (void)startListeningToTrainDetector:(id)arg1;
- (void)stopListening;
- (unsigned long long)visualizationBucketCount;

@end
