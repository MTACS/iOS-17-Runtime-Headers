
@interface CAMStillImageCaptureResult : NSObject {
    NSArray * _adjustmentFilters;
    NSDate * _captureDate;
    AVCapturePhoto * _capturePhoto;
    CAMCaptureCoordinationInfo * _coordinationInfo;
    NSString * _deferredPhotoIdentifier;
    NSError * _error;
    bool  _expectingPairedVideo;
    NSDictionary * _metadata;
    NSString * _persistenceUUID;
    bool  _representsDeferredFilteredProxy;
    long long  _semanticEnhancement;
    bool  _shouldPersistAdjustmentSidecar;
    struct __IOSurface { } * _stillImageFilteredPreviewSurface;
    struct __IOSurface { } * _stillImageFullsizeSurface;
    unsigned long long  _stillImageFullsizeSurfaceSize;
    struct __IOSurface { } * _stillImageUnfilteredPreviewSurface;
}

@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (nonatomic, readonly) NSDate *captureDate;
@property (nonatomic, readonly) AVCapturePhoto *capturePhoto;
@property (nonatomic, readonly) NSDictionary *compactMetadata;
@property (nonatomic, readonly) CAMCaptureCoordinationInfo *coordinationInfo;
@property (nonatomic, readonly, copy) NSString *deferredPhotoIdentifier;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) bool expectingPairedVideo;
@property (nonatomic, readonly, copy) NSString *imageGroupIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) bool representsDeferredFilteredProxy;
@property (nonatomic, readonly) long long semanticEnhancement;
@property (nonatomic, readonly) bool shouldPersistAdjustmentSidecar;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFilteredPreviewSurface;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageFullsizeSurface;
@property (nonatomic, readonly) unsigned long long stillImageFullsizeSurfaceSize;
@property (nonatomic, readonly) struct __IOSurface { }*stillImageUnfilteredPreviewSurface;

- (void).cxx_destruct;
- (id)_captureDateFromMetadata:(id)arg1;
- (id)adjustmentFilters;
- (id)captureDate;
- (id)capturePhoto;
- (id)compactMetadata;
- (id)coordinationInfo;
- (void)dealloc;
- (id)deferredPhotoIdentifier;
- (id)description;
- (id)error;
- (id)imageGroupIdentifier;
- (id)initWithCaptureDeferredPhotoProxy:(id)arg1 expectingPairedVideo:(bool)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 shouldPersistAdjustmentSidecar:(bool)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 semanticEnhancement:(long long)arg8 error:(id)arg9;
- (id)initWithCapturePhoto:(id)arg1 expectingPairedVideo:(bool)arg2 adjustmentFilters:(id)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 shouldPersistAdjustmentSidecar:(bool)arg5 persistenceUUID:(id)arg6 coordinationInfo:(id)arg7 semanticEnhancement:(long long)arg8 error:(id)arg9;
- (id)initWithFullsizeSurface:(struct __IOSurface { }*)arg1 size:(unsigned long long)arg2 unfilteredPreviewSurface:(struct __IOSurface { }*)arg3 filteredPreviewSurface:(struct __IOSurface { }*)arg4 metadata:(id)arg5 expectingPairedVideo:(bool)arg6 shouldPersistAdjustmentSidecar:(bool)arg7 adjustmentFilters:(id)arg8 persistenceUUID:(id)arg9 coordinationInfo:(id)arg10 error:(id)arg11;
- (bool)isExpectingPairedVideo;
- (id)metadata;
- (id)persistenceUUID;
- (bool)representsDeferredFilteredProxy;
- (long long)semanticEnhancement;
- (bool)shouldPersistAdjustmentSidecar;
- (struct __IOSurface { }*)stillImageFilteredPreviewSurface;
- (struct __IOSurface { }*)stillImageFullsizeSurface;
- (unsigned long long)stillImageFullsizeSurfaceSize;
- (struct __IOSurface { }*)stillImageUnfilteredPreviewSurface;

@end
