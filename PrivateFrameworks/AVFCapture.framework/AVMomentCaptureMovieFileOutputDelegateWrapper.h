
@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper {
    bool  _didFinishWritingMovieCallbackFired;
    bool  _didFinishWritingSpatialOverCaptureMovieCallbackFired;
    AVMomentCaptureMovieRecordingResolvedSettings * _resolvedSettings;
    NSURL * _spatialOverCaptureMovieFileURL;
    NSArray * _spatialOverCaptureMovieMetadata;
    NSString * _videoCodecType;
}

@property (nonatomic) bool didFinishWritingMovieCallbackFired;
@property (nonatomic) bool didFinishWritingSpatialOverCaptureMovieCallbackFired;
@property (nonatomic, retain) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (readonly) NSURL *spatialOverCaptureMovieFileURL;
@property (readonly) NSArray *spatialOverCaptureMovieMetadata;
@property (readonly) NSString *videoCodecType;

+ (id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

- (void)dealloc;
- (bool)didFinishWritingMovieCallbackFired;
- (bool)didFinishWritingSpatialOverCaptureMovieCallbackFired;
- (id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (id)resolvedSettings;
- (void)setDidFinishWritingMovieCallbackFired:(bool)arg1;
- (void)setDidFinishWritingSpatialOverCaptureMovieCallbackFired:(bool)arg1;
- (void)setResolvedSettings:(id)arg1;
- (id)spatialOverCaptureMovieFileURL;
- (id)spatialOverCaptureMovieMetadata;
- (id)videoCodecType;

@end
