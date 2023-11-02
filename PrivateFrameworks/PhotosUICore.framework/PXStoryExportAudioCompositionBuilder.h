
@interface PXStoryExportAudioCompositionBuilder : NSObject {
    AVMutableComposition * _audioComposition;
    NSMutableArray * _audioMixParameters;
    AVMutableCompositionTrack * _currentVideoHighlightCompositionTrack;
    NSMutableArray * _duckingAudioSegments;
    NSError * _error;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumDuration;
    float  _musicCompositionDefaultVolume;
    NSMutableArray * _musicCompositionTracks;
    NSMutableArray * _musicMixParameters;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _outroDuration;
    AVMutableCompositionTrack * _videoHighlightCompositionTrackA;
    AVMutableCompositionTrack * _videoHighlightCompositionTrackB;
}

@property (nonatomic, retain) AVMutableComposition *audioComposition;
@property (nonatomic, retain) NSMutableArray *audioMixParameters;
@property (nonatomic, retain) AVMutableCompositionTrack *currentVideoHighlightCompositionTrack;
@property (nonatomic, retain) NSMutableArray *duckingAudioSegments;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumDuration;
@property (nonatomic) float musicCompositionDefaultVolume;
@property (nonatomic, retain) NSMutableArray *musicCompositionTracks;
@property (nonatomic, retain) NSMutableArray *musicMixParameters;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } outroDuration;
@property (nonatomic, retain) AVMutableCompositionTrack *videoHighlightCompositionTrackA;
@property (nonatomic, retain) AVMutableCompositionTrack *videoHighlightCompositionTrackB;

- (void).cxx_destruct;
- (void)_applyMusicDuckingAndFadeOut;
- (void)_applyVolumeRampsToVideoHilightAudioSegment:(id)arg1 inAudioCompositionTrack:(id)arg2 volume:(float)arg3 fadeIn:(double)arg4 fadeOut:(double)arg5;
- (id)_insertAudioTrack:(id)arg1 fromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 intoAudioCompositionTrack:(id)arg3 atTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 error:(id*)arg5;
- (id)_mutableAudioMixParametersCreatedIfNeededForCompositionTrack:(id)arg1;
- (id)_mutableAudioMixParametersForCompositionTrack:(id)arg1;
- (bool)addAudioFromVideoHighlightAsset:(id)arg1 fromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atStoryTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 volume:(float)arg4 fadeIn:(double)arg5 fadeOut:(double)arg6 shouldDuck:(bool)arg7 error:(id*)arg8;
- (bool)addMusicAsset:(id)arg1 withAudioMix:(id)arg2 preferredVolume:(float)arg3 error:(id*)arg4;
- (id)audioComposition;
- (id)audioMixParameters;
- (id)currentVideoHighlightCompositionTrack;
- (id)duckingAudioSegments;
- (id)error;
- (void)finishAndWaitWithResultHandler:(id /* block */)arg1;
- (id)initWithMaximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 outroDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDuration;
- (float)musicCompositionDefaultVolume;
- (id)musicCompositionTracks;
- (id)musicMixParameters;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (void)setAudioComposition:(id)arg1;
- (void)setAudioMixParameters:(id)arg1;
- (void)setCurrentVideoHighlightCompositionTrack:(id)arg1;
- (void)setDuckingAudioSegments:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMaximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMusicCompositionDefaultVolume:(float)arg1;
- (void)setMusicCompositionTracks:(id)arg1;
- (void)setMusicMixParameters:(id)arg1;
- (void)setOutroDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoHighlightCompositionTrackA:(id)arg1;
- (void)setVideoHighlightCompositionTrackB:(id)arg1;
- (id)videoHighlightCompositionTrackA;
- (id)videoHighlightCompositionTrackB;

@end
