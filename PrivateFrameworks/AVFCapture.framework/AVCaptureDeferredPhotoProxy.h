
@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {
    NSString * _applicationIdentifier;
    NSString * _captureRequestIdentifier;
    NSString * _photoIdentifier;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (readonly) NSString *deferredPhotoIdentifier;
@property (readonly, copy) NSString *persistentStorageUUID;

- (id)applicationIdentifier;
- (id)captureRequestIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)deferredPhotoIdentifier;
- (id)description;
- (struct { int x1; int x2; })dimensions;
- (id)init;
- (id)initWithApplicationIdentifier:(id)arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 expectedPhotoProcessingFlags:(unsigned int)arg5;
- (id)initWithDeferredPhotoIdentifier:(id)arg1;
- (id)initWithDeferredPhotoIdentifier:(id)arg1 applicationIdentifier:(id)arg2;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 proxySurface:(struct __IOSurface { }*)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(struct __IOSurface { }*)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 applicationIdentifier:(id)arg10 captureRequestIdentifier:(id)arg11 photoIdentifier:(id)arg12 expectedPhotoProcessingFlags:(unsigned int)arg13 sourceDeviceType:(id)arg14;
- (bool)isEqual:(id)arg1;
- (id)persistentStorageUUID;
- (void)setApplicationIdentifier:(id)arg1;

@end
