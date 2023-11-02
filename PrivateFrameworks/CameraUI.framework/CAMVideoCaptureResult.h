
@interface CAMVideoCaptureResult : NSObject {
    NSDate * _captureDate;
    CAMCaptureCoordinationInfo * _coordinationInfo;
    struct { 
        int width; 
        int height; 
    }  _dimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSError * _error;
    NSURL * _filteredLocalDestinationURL;
    NSURL * _localDestinationURL;
    NSArray * _metadata;
    long long  _reason;
    bool  _slowWriterFrameDrops;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    struct __CVBuffer { } * _videoPreviewPixelBuffer;
    double  _videoZoomFactor;
}

@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly) struct { int x1; int x2; } dimensions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *filteredLocalDestinationURL;
@property (nonatomic, readonly) NSURL *localDestinationURL;
@property (nonatomic, readonly, copy) NSArray *metadata;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) bool slowWriterFrameDrops;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly) bool stoppedUnexpectedly;
@property (nonatomic, readonly) struct __CVBuffer { }*videoPreviewPixelBuffer;
@property (nonatomic, readonly) double videoZoomFactor;

- (void).cxx_destruct;
- (id)captureDate;
- (id)coordinationInfo;
- (void)dealloc;
- (struct { int x1; int x2; })dimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)error;
- (id)filteredLocalDestinationURL;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 dimensions:(struct { int x1; int x2; })arg5 metadata:(id)arg6 videoZoomFactor:(double)arg7 reason:(long long)arg8 videoPreviewPixelBuffer:(struct __CVBuffer { }*)arg9 coordinationInfo:(id)arg10 error:(id)arg11 slowWriterFrameDrops:(bool)arg12;
- (id)localDestinationURL;
- (id)metadata;
- (long long)reason;
- (bool)slowWriterFrameDrops;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (bool)stoppedUnexpectedly;
- (struct __CVBuffer { }*)videoPreviewPixelBuffer;
- (double)videoZoomFactor;

@end
