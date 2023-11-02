
@interface CKAnimatedImage : NSObject <IMAnimatedImageProtocol> {
    double  _animationStartTimeOffset;
    NSArray * _durations;
    NSArray * _frameEndTimestamps;
    NSArray * _frameStartTimestamps;
    UIImage * _image;
    long long  _previouslyReturnedFrameIndexHint;
}

@property (nonatomic) double animationStartTimeOffset;
@property (nonatomic, copy) NSArray *durations;
@property (nonatomic, readonly, copy) NSArray *frameEndTimestamps;
@property (nonatomic, readonly, copy) NSArray *frameStartTimestamps;
@property (nonatomic, readonly) NSArray *frames;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long previouslyReturnedFrameIndexHint;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(id /* block */)arg2;
+ (bool)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 error:(id*)arg3 imageProvider:(id /* block */)arg4 frameProcessor:(id /* block */)arg5;
+ (bool)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 error:(id*)arg3 imageProvider:(id /* block */)arg4 frameProcessor:(id /* block */)arg5;
+ (id)animatedImageWithASTCData:(id)arg1;
+ (id)animatedImageWithContentsOfASTCURL:(id)arg1;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)filenameExtension;
+ (id)imageWithContentsOfCPBitmapURL:(id)arg1;
+ (bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 error:(id*)arg3 imageProvider:(id /* block */)arg4 frameProcessor:(id /* block */)arg5;
+ (bool)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(id /* block */)arg3;
+ (bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 error:(id*)arg3 imageProvider:(id /* block */)arg4 frameProcessor:(id /* block */)arg5;
+ (bool)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_calculateFrameTimestamps;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (double)animationStartTimeOffset;
- (id)description;
- (id)durations;
- (double)endTimestampForFrameIndex:(unsigned long long)arg1;
- (id)frameEndTimestamps;
- (id)frameForAnimationTime:(double)arg1;
- (long long)frameIndexForAnimationTime:(double)arg1;
- (id)frameStartTimestamps;
- (id)frames;
- (id)image;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (long long)previouslyReturnedFrameIndexHint;
- (double)scale;
- (void)setAnimationStartTimeOffset:(double)arg1;
- (void)setDurations:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPreviouslyReturnedFrameIndexHint:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)timeInLoopForTime:(double)arg1;
- (bool)writeToASTCURL:(id)arg1;
- (bool)writeToCPBitmapURL:(id)arg1;

@end
