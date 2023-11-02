
@interface AXSDSoundDetectionController : NSObject <AXSDDetectorManagerDelegate, AXSDDetectorQueueManagerDelegate, AXSDListenEngineDelegate, UNUserNotificationCenterDelegate> {
    AXSDDetectorManager * _detectorManager;
    NSMutableSet * _detectorQueue;
    AXSDDetectorQueueManager * _detectorQueueManager;
    AXSDListenEngine * _listener;
    AXSDUltronInternalRecordingManager * _recordingManager;
}

@property (readonly) NSSet *currentDetectionTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXSDDetectorManager *detectorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isEnrolledInDataCollection;
+ (void)setPromptedForDataCollection;
+ (id)sharedInstance;
+ (bool)wasPromptedForDataCollection;

- (void).cxx_destruct;
- (void)_startInternalRecordingWithFormat:(id)arg1;
- (void)addListenType:(id)arg1;
- (void)assetsReadyAndDetectorsAdded;
- (id)currentDetectionTypes;
- (id)detectorManager;
- (void)enrollForDataCollection;
- (id)init;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (void)removeAllListenTypes;
- (void)removeListenType:(id)arg1;
- (void)setDetectorManager:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (void)unenrollFromDataCollection;

@end
