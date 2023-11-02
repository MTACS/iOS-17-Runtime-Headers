
@interface AXSDVoiceTriggerController : NSObject <AXSDListenEngineDelegate, AXSDVoiceTriggerModelManagerDelegate> {
    bool  _isListening;
    AXSDListenEngine * _listener;
    AXSDVoiceTriggerModelManager * _modelManager;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_postVoiceTriggerEventToSystem:(long long)arg1;
- (id)init;
- (void)listenEngineDidStartWithInputFormat:(id)arg1;
- (void)listenEngineFailedToStartWithError:(id)arg1;
- (void)listeningStoppedWithError:(id)arg1;
- (void)receivedBuffer:(id)arg1 atTime:(id)arg2;
- (void)receivedError:(id)arg1 fromDetector:(id)arg2;
- (void)receivedObservation:(id)arg1 forDetector:(id)arg2;
- (void)startListening;
- (void)startListeningOnQueue:(id)arg1;
- (void)stopListening;

@end
