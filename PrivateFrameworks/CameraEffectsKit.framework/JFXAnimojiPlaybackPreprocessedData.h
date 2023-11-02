
@interface JFXAnimojiPlaybackPreprocessedData : NSObject {
    NSDictionary * _animojiBlendShapes;
    ARFrame * _arFrame;
    AVDepthData * _avDepthData;
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
    }  _mediaTimeRangeForData;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, readonly) NSDictionary *animojiBlendShapes;
@property (nonatomic, readonly) ARFrame *arFrame;
@property (nonatomic, readonly) AVDepthData *avDepthData;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } mediaTimeRangeForData;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)animojiBlendShapes;
- (id)arFrame;
- (id)avDepthData;
- (id)initForRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingDataFromMediaTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 arFrame:(id)arg3 avDepthData:(id)arg4 animojiBlendShapes:(id)arg5;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaTimeRangeForData;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
