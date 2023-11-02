
@interface AVMomentCaptureMovie : NSObject {
    NSURL * _debugMetadataSidecarFileURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    bool  _hasOverCapture;
    NSArray * _movieMetadata;
    NSURL * _outputFileURL;
    NSString * _overCaptureGroupIdentifier;
    struct __CVBuffer { } * _previewPixelBuffer;
    AVMomentCaptureMovieRecordingResolvedSettings * _resolvedSettings;
}

@property (nonatomic, readonly) NSURL *debugMetadataSidecarFileURL;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSArray *movieMetadata;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) struct __CVBuffer { }*previewPixelBuffer;
@property (nonatomic, readonly) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;

+ (id)movieWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3;

- (id)_initWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3;
- (void)_setDebugMetadataSidecarFileURL:(id)arg1;
- (void)_setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setPreviewPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugMetadataSidecarFileURL;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)movieMetadata;
- (id)outputFileURL;
- (struct __CVBuffer { }*)previewPixelBuffer;
- (id)resolvedSettings;

@end
