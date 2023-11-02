
@interface NUVideoPlaybackFrameRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    struct __CVBuffer { } * _destinationBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _evaluationTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    bool  _isDolbyVision;
    float  _playbackRate;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _renderScale;
    NSDictionary * _videoFrames;
    NSDictionary * _videoMetadataSamples;
    NURenderNode * _videoRenderPrepareNode;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, retain) struct __CVBuffer { }*destinationBuffer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } evaluationTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic) bool isDolbyVision;
@property (nonatomic) float playbackRate;
@property (nonatomic) struct { long long x1; long long x2; } renderScale;
@property (nonatomic, copy) NSDictionary *videoFrames;
@property (nonatomic, copy) NSDictionary *videoMetadataSamples;
@property (nonatomic, retain) NURenderNode *videoRenderPrepareNode;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })evaluationTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)initWithComposition:(id)arg1;
- (bool)isDolbyVision;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (float)playbackRate;
- (struct { long long x1; long long x2; })renderScale;
- (void)setColorSpace:(id)arg1;
- (void)setDestinationBuffer:(struct __CVBuffer { }*)arg1;
- (void)setEvaluationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIsDolbyVision:(bool)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setRenderScale:(struct { long long x1; long long x2; })arg1;
- (void)setVideoFrames:(id)arg1;
- (void)setVideoMetadataSamples:(id)arg1;
- (void)setVideoRenderPrepareNode:(id)arg1;
- (void)submit:(id /* block */)arg1;
- (id)videoFrames;
- (id)videoMetadataSamples;
- (id)videoRenderPrepareNode;

@end
