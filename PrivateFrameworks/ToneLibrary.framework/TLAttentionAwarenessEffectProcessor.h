
@interface TLAttentionAwarenessEffectProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    AVAudioSession * _audioSession;
    AVAudioPCMBuffer * _destinationPCMBuffer;
    NSObject<OS_dispatch_source> * _effectMixFadingTimer;
    struct { 
        bool shouldBypassLowPassFilter; 
        float volumeForLowPassFilterGlobalGain; 
        float effectMix; 
    }  _effectParameters;
    AVAudioEngine * _engine;
    AVAudioInputNode * _inputNode;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _inputNodeInputBufferList;
    AVAudioUnitEQ * _lowPassFilter;
    AVAudioUnitReverb * _reverb;
    bool  _started;
}

@property (nonatomic) struct { bool x1; float x2; float x3; } effectParameters;
@property (getter=isStarted, nonatomic) bool started;

- (void).cxx_destruct;
- (void)_applyEffectMix:(float)arg1;
- (void)_applyEffectParameters:(struct { bool x1; float x2; float x3; })arg1 includingEffectMix:(bool)arg2;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (float)_currentEffectMix;
- (float)_sanitizeEffectMix:(float)arg1;
- (void)dealloc;
- (struct { bool x1; float x2; float x3; })effectParameters;
- (id)initWithProcessingFormat:(id)arg1 framesPerRender:(unsigned int)arg2 audioSession:(id)arg3 effectParameters:(struct { bool x1; float x2; float x3; })arg4;
- (bool)isStarted;
- (struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)render:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberOfFrames:(unsigned int)arg2;
- (void)setEffectParameters:(struct { bool x1; float x2; float x3; })arg1;
- (void)setEffectParameters:(struct { bool x1; float x2; float x3; })arg1 effectMixFadeDuration:(double)arg2;
- (void)setStarted:(bool)arg1;
- (bool)start;
- (void)stop;

@end
