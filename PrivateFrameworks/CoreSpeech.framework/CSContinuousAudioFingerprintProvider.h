
@interface CSContinuousAudioFingerprintProvider : NSObject <CSAudioServerCrashMonitorDelegate, CSAudioStreamProvidingDelegate> {
    CSPlainAudioFileWriter * _audioFileWriter;
    CSAudioCircularBuffer * _audioLoggingBuffer;
    CSAudioStream * _audioStream;
    float  _currentMaximumBufferSize;
    CSPolicy * _enablePolicy;
    unsigned long long  _frameSkipCounter;
    unsigned long long  _frameSkipRate;
    NSMutableDictionary * _inUseServices;
    bool  _isListenPollingStarting;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic, retain) CSAudioCircularBuffer *audioLoggingBuffer;
@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic) float currentMaximumBufferSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSPolicy *enablePolicy;
@property (nonatomic) unsigned long long frameSkipCounter;
@property (nonatomic) unsigned long long frameSkipRate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *inUseServices;
@property (nonatomic) bool isListenPollingStarting;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_handleEnablePolicyEvent:(bool)arg1;
- (void)_reset;
- (void)_setMaximumBufferSizeFromInUseServices;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(id /* block */)arg2;
- (void)_startListenWithCompletion:(id /* block */)arg1;
- (void)_stopListening;
- (id)audioFileWriter;
- (id)audioLoggingBuffer;
- (id)audioStream;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;
- (float)currentMaximumBufferSize;
- (id)enablePolicy;
- (unsigned long long)frameSkipCounter;
- (unsigned long long)frameSkipRate;
- (id)inUseServices;
- (id)init;
- (bool)isListenPollingStarting;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)reset;
- (void)setAudioFileWriter:(id)arg1;
- (void)setAudioLoggingBuffer:(id)arg1;
- (void)setAudioStream:(id)arg1;
- (void)setCurrentMaximumBufferSize:(float)arg1;
- (void)setEnablePolicy:(id)arg1;
- (void)setFrameSkipCounter:(unsigned long long)arg1;
- (void)setFrameSkipRate:(unsigned long long)arg1;
- (void)setInUseServices:(id)arg1;
- (void)setIsListenPollingStarting:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startWithUUID:(id)arg1 withMaximumBufferSize:(float)arg2;
- (void)stopWithUUID:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
