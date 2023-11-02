
@interface MPCAudioSpectrumAnalyzer : NSObject <MPCPlaybackEngineEventObserving, MPCProcessAudioTapDelegate> {
    struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; } * _aqBuffer;
    struct opaqueMTAudioProcessingTap { } * _audioProcessingTap;
    NSMutableArray * _observers;
    MPCPlaybackEngine * _playbackEngine;
    MPCProcessAudioTap * _processAudioTap;
    struct OpaqueAudioQueue { } * _processingQueue;
    NSNumber * _refreshRate;
    MPCAudioSpectrumAnalyzer * _selfRef;
    _MPCAudioSpectrumAnalyzerStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, retain) MPCProcessAudioTap *processAudioTap;
@property (nonatomic, readonly, copy) NSNumber *refreshRate;
@property (nonatomic, retain) MPCAudioSpectrumAnalyzer *selfRef;
@property (nonatomic, retain) _MPCAudioSpectrumAnalyzerStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_analyzeAudioData:(void*)arg1 numberOfFrames:(unsigned int)arg2;
- (void)_analyzeSamples:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberFrames:(long long)arg2;
- (void)_createAudioTap;
- (void)_createProcessTap;
- (void)_createQueueTap;
- (void)_destroyAudioTap;
- (void)_destroyProcessTap;
- (void)_destroyQueueTap;
- (void)_prepareTap:(struct opaqueMTAudioProcessingTap { }*)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3;
- (void)_resetObservers;
- (bool)_shouldAttachAudioTap;
- (void)addObserver:(id)arg1;
- (void)configurePlayerItem:(id)arg1;
- (void)dealloc;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1 refreshRate:(id)arg2;
- (id)observers;
- (id)playbackEngine;
- (id)processAudioTap;
- (void)processAudioTapDidReceiveAudioSamples:(void*)arg1 numberOfSamples:(unsigned int)arg2;
- (id)refreshRate;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)selfRef;
- (void)setObservers:(id)arg1;
- (void)setProcessAudioTap:(id)arg1;
- (void)setSelfRef:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (void)unregisterObserver:(id)arg1;

@end
