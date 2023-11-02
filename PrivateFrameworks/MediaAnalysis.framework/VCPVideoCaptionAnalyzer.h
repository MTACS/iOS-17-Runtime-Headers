
@interface VCPVideoCaptionAnalyzer : VCPVideoAnalyzer {
    NSMutableArray * _activeFrameIndices;
    VCPVideoCaptionEncoder * _backbone;
    NSObject<OS_dispatch_group> * _downloadGroup;
    bool  _enoughFrames;
    int  _frameIndex;
    float * _inputData;
    int  _inputHeight;
    int  _inputNumFrames;
    int  _inputWidth;
    NSString * _resConfig;
    int  _skipNumFramesBothEnds;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeEnd;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastDetection;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeStart;
    VCPTransforms * _transformImage;
    int  _validFrames;
    NSURL * _videoCaptionDecoder;
    NSURL * _videoCaptionEncoder;
    MAAsset * _videoCaptionEncoderAsset;
    NSMutableArray * _videoCaptionResult;
}

+ (id)cloneCaptionModel:(id)arg1 to:(id)arg2;
+ (id)downloadMobileAssetIfNeeded:(id)arg1;
+ (bool)gatingEnabled;
+ (id)imageCaptionModelTestURL;
+ (long long)mode;
+ (id)queryVideoCaptionEncoderAsset;
+ (id)videoCaptionDecoderTestURL;
+ (id)videoCaptionEncoderTestURL;

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)configInputBasedOnDevice;
- (int)copyImage:(struct __CVBuffer { }*)arg1 withChannels:(int)arg2;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (int)inference:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithFrameNumber:(unsigned long long)arg1;
- (id)initWithFrameRate:(float)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (id)results;

@end
