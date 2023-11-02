
@interface MPCSingleTrackAudioProcessor : NSObject <MPCSingleTrackAudioProcessing> {
    struct opaqueMTAudioProcessingTap { } * _audioProcessingTap;
    MPCPlaybackEngine * _playbackEngine;
    <MPCSingleTrackAudioProcessing> * _selfRef;
}

@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, retain) <MPCSingleTrackAudioProcessing> *selfRef;

- (void).cxx_destruct;
- (void)_createAudioTap;
- (void)_destroyAudioTap;
- (bool)configureQueueItem:(id)arg1;
- (unsigned int)creationFlags;
- (void)dealloc;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)playbackEngine;
- (void)prepareTap:(struct opaqueMTAudioProcessingTap { }*)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3;
- (void)processTap:(struct opaqueMTAudioProcessingTap { }*)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg5 numberFramesOut:(long long*)arg6 flagsOut:(unsigned int*)arg7;
- (void)recreateAudioTap;
- (id)selfRef;
- (void)setSelfRef:(id)arg1;
- (bool)shouldAttachAudioTapToItem:(id)arg1;
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap { }*)arg1;

@end
