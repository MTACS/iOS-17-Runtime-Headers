
@interface PXStoryFallbackMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration> {
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
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
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
    }  _highlightRange;
    NSData * _normalizationData;
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
    }  _playbackRange;
}

@property (nonatomic, readonly) <PXStoryMovieHighlight> *bestHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *defaultHighlight;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *fullMovie;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *highlights;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *livePhoto;
@property (nonatomic, readonly) <PXStoryMovieHighlight> *movieSummary;
@property (readonly) Class superclass;

+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })defaultHighlightRangeForPlaybackRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maxHighlightDuration;
+ (id)movieHighlightCurationForDisplayAsset:(id)arg1;
+ (id)movieHighlightCurationForLivePhotoAsset:(id)arg1;
+ (id)movieHighlightCurationForVideoAsset:(id)arg1;
+ (void)setMaxHighlightDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (void).cxx_destruct;
- (id)bestHighlight;
- (id)defaultHighlight;
- (id)description;
- (id)fullMovie;
- (id)highlights;
- (id)init;
- (id)initWithAssetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playbackRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 highlightRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 bestPlaybackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 normalizationData:(id)arg5 audioQualityScore:(float)arg6;
- (id)livePhoto;
- (id)movieSummary;

@end
