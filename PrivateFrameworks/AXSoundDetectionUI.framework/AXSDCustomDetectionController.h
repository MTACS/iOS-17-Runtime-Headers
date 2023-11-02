
@interface AXSDCustomDetectionController : NSObject <AXSDKShotModelManagerDelegate, AXSDListenEngineDelegate> {
    AXSDListenEngine * _listener;
    AXSDKShotModelManager * _modelManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXSDKShotModelManager *modelManager;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addCustomDetector:(id)arg1;
- (id)currentCustomDetectors;
- (id)init;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (id)modelManager;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedCompletion:(id)arg1;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (void)removeAllListenTypes;
- (void)removeCustomDetector:(id)arg1;
- (void)setModelManager:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end
