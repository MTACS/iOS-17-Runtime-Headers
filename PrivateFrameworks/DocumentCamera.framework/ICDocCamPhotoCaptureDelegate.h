
@interface ICDocCamPhotoCaptureDelegate : NSObject <AVCapturePhotoCaptureDelegate> {
    id /* block */  _completed;
    float  _highestSharpness;
    NSDictionary * _metaData;
    struct __CVBuffer { } * _pbRef;
    AVCapturePhotoSettings * _requestedPhotoSettings;
    id /* block */  _willCapturePhotoAnimation;
}

@property (nonatomic, copy) id /* block */ completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float highestSharpness;
@property (nonatomic, retain) NSDictionary *metaData;
@property (nonatomic) struct __CVBuffer { }*pbRef;
@property (nonatomic, retain) AVCapturePhotoSettings *requestedPhotoSettings;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ willCapturePhotoAnimation;

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 photoDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (id /* block */)completed;
- (void)dealloc;
- (void)didFinish;
- (float)highestSharpness;
- (id)initWithRequestedPhotoSettings:(id)arg1 willCapturePhotoAnimation:(id /* block */)arg2 completed:(id /* block */)arg3;
- (id)metaData;
- (struct __CVBuffer { }*)pbRef;
- (id)requestedPhotoSettings;
- (void)setCompleted:(id /* block */)arg1;
- (void)setHighestSharpness:(float)arg1;
- (void)setMetaData:(id)arg1;
- (void)setPbRef:(struct __CVBuffer { }*)arg1;
- (void)setRequestedPhotoSettings:(id)arg1;
- (void)setWillCapturePhotoAnimation:(id /* block */)arg1;
- (float)sharpnessForImageBuffer:(struct __CVBuffer { }*)arg1;
- (id /* block */)willCapturePhotoAnimation;

@end
