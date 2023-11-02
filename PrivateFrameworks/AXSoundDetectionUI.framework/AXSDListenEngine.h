
@interface AXSDListenEngine : NSObject {
    AVAudioEngine * _audioEngine;
    NSObject<OS_dispatch_queue> * _audioProcessingQueue;
    AVAudioSession * _audioSession;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSPointerArray * _delegates;
    long long  _state;
}

@property (retain) AVAudioEngine *audioEngine;
@property (retain) AVAudioSession *audioSession;
@property (readonly) unsigned long long bufferSize;
@property (readonly) bool isListening;

+ (bool)_stateIsNotListening:(long long)arg1;
+ (id)_stringForState:(long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activateNotifications;
- (void)_carPlayIsConnectedDidChange:(id)arg1;
- (void)_handleAudioSessionInterruption:(id)arg1;
- (void)_handleBuffer:(id)arg1 atTime:(id)arg2;
- (void)_handleBuffer:(id)arg1 atTime:(id)arg2 isFile:(bool)arg3;
- (void)_handleConfigurationChangeNotification:(id)arg1;
- (void)_handleInterruptionRequestingState:(long long)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_micDisabledUpdated;
- (bool)_notListeningForAnyReason;
- (void)_pipedInFileUpdated;
- (void)_restartSoundRecognitionIfNecesary;
- (void)_setState:(long long)arg1;
- (void)_setupAudioInputWithError:(id*)arg1 shouldInterrupt:(bool)arg2;
- (void)_startIfPossibleAndNotify;
- (bool)_startListeningWithError:(id*)arg1;
- (bool)_stopListeningAndTransitionToState:(long long)arg1;
- (void)addListenDelegate:(id)arg1;
- (id)audioEngine;
- (id)audioEngineInputNode;
- (id)audioSession;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (id)init;
- (bool)isListening;
- (void)notifyListeningEncounteredError:(id)arg1;
- (void)notifyListeningStartedWithError:(id)arg1;
- (void)removeListenDelegate:(id)arg1;
- (void)setAudioEngine:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (bool)supportsVirtualAudioDevice;

@end
