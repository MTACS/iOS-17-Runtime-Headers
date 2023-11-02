
@interface _PXStoryExport_VideoHighlightInfo : NSObject {
    PHAsset * _asset;
    struct { 
        long long mode; 
        long long modeBasis; 
        float volume; 
        double JCutLength; 
        double LCutLength; 
        double fadeIn; 
        double fadeOut; 
    }  _audioInfo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _loadedVideoPlaybackStartTime;
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
    }  _loadingVideoTimeRange;
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
    }  _storyPlaybackRange;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; } audioInfo;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } loadedVideoPlaybackStartTime;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } loadingVideoTimeRange;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } storyPlaybackRange;

- (void).cxx_destruct;
- (id)asset;
- (struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })audioInfo;
- (id)description;
- (id)initWithAsset:(id)arg1 loadingVideoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 loadedVideoPlaybackStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 storyPlaybackRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 audioInfo:(struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })arg5;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })loadedVideoPlaybackStartTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })loadingVideoTimeRange;
- (void)setAsset:(id)arg1;
- (void)setAudioInfo:(struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })arg1;
- (void)setLoadedVideoPlaybackStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoadingVideoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setStoryPlaybackRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })storyPlaybackRange;

@end
