
@interface MRUAudioAnalyzer : NSObject <MPCProcessAudioTapDelegate> {
    int  _bufferSizePowerOf2;
    int  _complexCount;
    struct OpaqueFFTSetup { } * _fftSetup;
    int  _frameCount;
    float * _hannWindow;
    float * _imagBuffer;
    bool  _isRunning;
    float * _leftSamples;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _log2FrameCount;
    float * _magnitudes;
    float * _mixed;
    float  _normalizationFactor;
    NSHashTable * _observers;
    int  _pid;
    float * _realBuffer;
    int  _refreshRate;
    float * _rightSamples;
    float  _sampleRate;
    MRUWaveformSettings * _settings;
    MPCProcessAudioTap * _tap;
    NSObject<OS_dispatch_queue> * _tapQueue;
    float * _transferBuffer;
    MRUWaveformData * _waveformData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) int pid;
@property (nonatomic) int refreshRate;
@property (nonatomic) float sampleRate;
@property (nonatomic, retain) MRUWaveformSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPCProcessAudioTap *tap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *tapQueue;
@property (nonatomic, readonly) MRUWaveformData *waveformData;

+ (id)audioAnalyzerForPID:(int)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)binSamples:(float*)arg1 count:(int)arg2;
- (void)computeFFTWithSamples:(float*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithPID:(int)arg1;
- (bool)isRunning;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)observers;
- (int)pid;
- (void)processAudioTapDidReceiveAudioSamples:(void*)arg1 numberOfSamples:(unsigned int)arg2;
- (void)processAudioTapDidStop;
- (int)refreshRate;
- (void)removeObserver:(id)arg1;
- (float)sampleRate;
- (void)setObservers:(id)arg1;
- (void)setRefreshRate:(int)arg1;
- (void)setSampleRate:(float)arg1;
- (void)setSettings:(id)arg1;
- (void)setTap:(id)arg1;
- (void)setTapQueue:(id)arg1;
- (id)settings;
- (void)start;
- (void)stop;
- (id)tap;
- (id)tapQueue;
- (id)waveformData;

@end
