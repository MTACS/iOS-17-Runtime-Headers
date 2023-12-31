
@interface VCAudioCaptions : NSObject <SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate, VCAudioIOSink> {
    struct __CFAllocator { } * _audioBufferAllocator;
    struct OpaqueAudioConverter { } * _audioConverter;
    unsigned int  _captionTaskCount;
    NSMutableArray * _captionTasks;
    double  _captionedAudioDuration;
    unsigned long long  _captioningRequestCount;
    double  _captionsEnabledDuration;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _captionsFormat;
    double  _captionsLastUtteranceStart;
    NSObject<OS_dispatch_queue> * _captionsQueue;
    double  _captionsUtteranceDuration;
    struct __CFAllocator { } * _copyBufferAllocator;
    long long  _currentActiveToken;
    long long  _currentTime;
    unsigned int  _currentUtteranceNumber;
    <VCAudioCaptionsDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    long long  _epoch;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _inputFormat;
    bool  _inputFormatDidChange;
    bool  _isCaptionsDebugDumpEnabled;
    bool  _isEnabled;
    bool  _isLocal;
    bool  _isSpeechModelLoaded;
    bool  _isStarted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAudioProcessedTime;
    double  _lastCaptionsEnabledTime;
    unsigned int  _lastVoiceAcitivty;
    NSSet * _localLanguages;
    NSLocale * _locale;
    void * _logCaptionsDump;
    unsigned int  _logMessageCounter;
    SFSpeechRecognizer * _recognizer;
    SFSpeechAudioBufferRecognitionRequest * _recognizerRequest;
    int  _recognizerState;
    SFSpeechRecognitionTask * _recognizerTask;
    bool  _remoteCanDisplay;
    NSSet * _remoteLanguages;
    struct opaqueRTCReporting { } * _reportingAgent;
    NSString * _taskIdentifier;
    NSObject<OS_dispatch_semaphore> * _teardownSemaphore;
    int  _timescale;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCAudioCaptionsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *localLanguages;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic) bool remoteCanDisplay;
@property (nonatomic, retain) NSSet *remoteLanguages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supported;
@property (nonatomic, retain) NSString *taskIdentifier;

+ (bool)shouldAllocateNewAllocator:(void*)arg1 streamDesc:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2 referenceStreamDesc:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3;

- (void)callCompletionHandler:(id /* block */)arg1 withResult:(bool)arg2;
- (bool)captionsDebugDumpEnabled;
- (struct opaqueCMSampleBuffer { }*)convertSamples:(char *)arg1 numSamples:(int)arg2;
- (bool)createAudioConverterWithInputFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 outputFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2 converter:(struct OpaqueAudioConverter {}**)arg3;
- (bool)createRecognizer:(id*)arg1;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferWithFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 samples:(char *)arg2 numSamples:(int)arg3;
- (void)dealloc;
- (id)delegate;
- (void)destroyAudioConverter:(struct OpaqueAudioConverter { }*)arg1;
- (void)destroyRecognizer;
- (void)dumpCaptionsIfNeeded:(id)arg1 final:(bool)arg2;
- (void)enableCaptions:(bool)arg1;
- (bool)enabled;
- (void)gatherRealtimeStats:(struct __CFDictionary { }*)arg1;
- (id)getTaskInfoForTask:(id)arg1;
- (long long)getTokenForTask:(id)arg1;
- (bool)idleStateToState:(int)arg1 withReason:(int)arg2 error:(id*)arg3;
- (id)initWithDelegate:(id)arg1 isLocal:(bool)arg2 taskIdentifier:(id)arg3 reportingAgent:(struct opaqueRTCReporting { }*)arg4;
- (bool)loadedStateToState:(int)arg1 withReason:(int)arg2 error:(id*)arg3;
- (id)localLanguages;
- (id)locale;
- (void)packageAndSendTranscribedString:(id)arg1 withTask:(id)arg2 final:(bool)arg3;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (bool)recognizerBufferSetupWithError:(id*)arg1;
- (void)recognizerBufferTeardown;
- (void)recordAudioSampleMetrics;
- (bool)remoteCanDisplay;
- (id)remoteLanguages;
- (bool)runningStateToState:(int)arg1 withReason:(int)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setLocalLanguages:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setRemoteCanDisplay:(bool)arg1;
- (void)setRemoteLanguages:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)speechRecognitionDidDetectSpeech:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognizer:(id)arg1 availabilityDidChange:(bool)arg2;
- (void)start:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 forToken:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)stop;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (bool)stoppingStateToState:(int)arg1 withReason:(int)arg2 error:(id*)arg3;
- (bool)supported;
- (id)taskIdentifier;
- (bool)transitionToState:(int)arg1 withReason:(int)arg2 error:(id*)arg3;

@end
