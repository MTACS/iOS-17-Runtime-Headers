
@interface PXStoryMockMovieHighlight : NSObject <PXStoryMovieHighlight> {
    float  _audioQualityScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bestPlaybackRect;
    bool  _hasFace;
    bool  _hasMusic;
    bool  _hasVoice;
    float  _loudness;
    NSData * _normalizationData;
    float  _peakVolume;
    float  _qualityScore;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

@property (nonatomic) float audioQualityScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bestPlaybackRect;
@property (nonatomic) bool hasFace;
@property (nonatomic) bool hasMusic;
@property (nonatomic) bool hasVoice;
@property (nonatomic) float loudness;
@property (nonatomic, retain) NSData *normalizationData;
@property (nonatomic) float peakVolume;
@property (nonatomic) float qualityScore;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void).cxx_destruct;
- (float)audioQualityScore;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestPlaybackRect;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestTimeRangeForPreferredDuration:(double)arg1 min:(double)arg2 max:(double)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestTimeRangeForTargetDuration:(double)arg1;
- (id)description;
- (bool)hasFace;
- (bool)hasMusic;
- (bool)hasVoice;
- (id)init;
- (id)initWithBestPlaybackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 score:(float)arg2 bestPlaybackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 normalizationData:(id)arg4 audioScore:(float)arg5;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 score:(float)arg2 bestPlaybackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 normalizationData:(id)arg4 face:(bool)arg5 voice:(bool)arg6 music:(bool)arg7 loudness:(float)arg8 peak:(float)arg9 audioScore:(float)arg10;
- (float)loudness;
- (id)normalizationData;
- (float)peakVolume;
- (float)qualityScore;
- (void)setAudioQualityScore:(float)arg1;
- (void)setBestPlaybackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasFace:(bool)arg1;
- (void)setHasMusic:(bool)arg1;
- (void)setHasVoice:(bool)arg1;
- (void)setLoudness:(float)arg1;
- (void)setNormalizationData:(id)arg1;
- (void)setPeakVolume:(float)arg1;
- (void)setQualityScore:(float)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
