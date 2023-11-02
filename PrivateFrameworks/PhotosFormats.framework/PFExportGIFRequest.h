
@interface PFExportGIFRequest : NSObject <NSCopying> {
    double  _ditherDepth;
    double  _maximumFrameRate;
    unsigned long long  _maximumFrameSize;
    bool  _shouldDither;
    bool  _synchronous;
    NSURL * _videoURL;
}

@property (nonatomic) double ditherDepth;
@property (nonatomic) double maximumFrameRate;
@property (nonatomic) unsigned long long maximumFrameSize;
@property (nonatomic) bool shouldDither;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic, copy) NSURL *videoURL;

+ (struct opaqueCMSampleBuffer { }*)_copyNextSampleBuffer:(id)arg1 reader:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 didReachEnd:(bool*)arg4 error:(id*)arg5;
+ (struct CGImage { }*)_createProcessedGIFImage:(struct opaqueCMSampleBuffer { }*)arg1 options:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 error:(id*)arg4;
+ (bool)_exportGIFToURL:(id)arg1 request:(id)arg2 progress:(id /* block */)arg3 error:(id*)arg4;
+ (id)_exportQueue;
+ (id)runExport:(id)arg1 toURL:(id)arg2 completion:(id /* block */)arg3;
+ (void)runExport:(id)arg1 toURL:(id)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_ensureValidInputs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)ditherDepth;
- (id)initWithVideoURL:(id)arg1;
- (bool)isSynchronous;
- (double)maximumFrameRate;
- (unsigned long long)maximumFrameSize;
- (void)setDitherDepth:(double)arg1;
- (void)setMaximumFrameRate:(double)arg1;
- (void)setMaximumFrameSize:(unsigned long long)arg1;
- (void)setShouldDither:(bool)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setVideoURL:(id)arg1;
- (bool)shouldDither;
- (id)videoURL;

@end
