
@interface AVCapturePhotoRequest : NSObject {
    AVWeakReferencingDelegateStorage * _delegateStorage;
    bool  _delegateSupportsDebugMetadataSidecarFile;
    bool  _delegateSupportsMetadataIdentifiersCallback;
    NSArray * _expectedPhotoManifest;
    unsigned int  _firedCallbackFlags;
    unsigned long long  _firedPhotoCallbacksCount;
    bool  _lensStabilizationSupported;
    unsigned int  _photoCallbackFlavor;
    struct opaqueCMSampleBuffer { } * _previewSampleBuffer;
    struct __IOSurface { } * _previewSurface;
    AVCaptureResolvedPhotoSettings * _resolvedSettings;
    struct __IOSurface { } * _thumbnailSurface;
    AVCapturePhotoSettings * _unresolvedSettings;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) bool delegateSupportsDebugMetadataSidecarFile;
@property (readonly) bool delegateSupportsMetadataIdentifiersCallback;
@property (nonatomic, readonly) unsigned long long expectedPhotoCount;
@property (nonatomic, readonly) NSArray *expectedPhotoManifest;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount;
@property (readonly) bool lensStabilizationSupported;
@property (readonly) unsigned int photoCallbackFlavor;
@property (nonatomic, retain) struct opaqueCMSampleBuffer { }*previewSampleBuffer;
@property (nonatomic, retain) struct __IOSurface { }*previewSurface;
@property (nonatomic, retain) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (nonatomic, retain) struct __IOSurface { }*thumbnailSurface;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings;

+ (void)initialize;
+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(bool)arg3;

- (void)_resolveExpectedPhotoManifest;
- (void)dealloc;
- (id)delegateStorage;
- (bool)delegateSupportsDebugMetadataSidecarFile;
- (bool)delegateSupportsMetadataIdentifiersCallback;
- (unsigned long long)expectedPhotoCount;
- (id)expectedPhotoManifest;
- (unsigned int)firedCallbackFlags;
- (unsigned long long)firedPhotoCallbacksCount;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(bool)arg3;
- (bool)lensStabilizationSupported;
- (unsigned int)photoCallbackFlavor;
- (struct opaqueCMSampleBuffer { }*)previewSampleBuffer;
- (struct __IOSurface { }*)previewSurface;
- (id)resolvedSettings;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setFiredPhotoCallbacksCount:(unsigned long long)arg1;
- (void)setPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setPreviewSurface:(struct __IOSurface { }*)arg1;
- (void)setResolvedSettings:(id)arg1;
- (void)setThumbnailSurface:(struct __IOSurface { }*)arg1;
- (struct __IOSurface { }*)thumbnailSurface;
- (id)unresolvedSettings;

@end
