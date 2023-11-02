
@interface AVCapturePhoto : NSObject {
    AVCapturePhotoInternal * _internal;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVDepthData *depthData;
@property (nonatomic, readonly) struct { int x1; int x2; } dimensions;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (nonatomic, readonly) AVCapturePhotoInternal *internal;
@property (readonly) NSDictionary *metadata;
@property (readonly) long long photoCount;
@property (readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) struct __CVBuffer { }*previewPixelBuffer;
@property (getter=isRawPhoto, readonly) bool rawPhoto;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

+ (id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg1 codec:(unsigned int)arg2 unresolvedSettings:(id)arg3;
+ (void)initialize;

- (struct CGImage { }*)CGImageRepresentation;
- (id)_defaultRawCompressionSettings;
- (struct __CVBuffer { }*)_embeddedThumbnailSourcePixelBuffer;
- (id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { }*)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 replacementHairSegmentationMatte:(id)arg6 replacementSkinSegmentationMatte:(id)arg7 replacementTeethSegmentationMatte:(id)arg8 replacementGlassesSegmentationMatte:(id)arg9 replacementRawCompressionSettings:(id)arg10 exceptionReason:(id*)arg11;
- (bool)_isCompressedPhoto;
- (bool)_isProRAWPhoto;
- (bool)_isSushiRAWPhoto;
- (bool)_isUncompressedYUVOrRGBPhoto;
- (int)_maximumAppleProRAWBitDepth;
- (unsigned int)_orientation;
- (unsigned int)actualPhotoProcessingFlags;
- (id)bracketSettings;
- (id)cameraCalibrationData;
- (void)dealloc;
- (id)debugDescription;
- (id)depthData;
- (id)description;
- (struct { int x1; int x2; })dimensions;
- (id)embeddedThumbnailPhotoFormat;
- (unsigned int)expectedPhotoProcessingFlags;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithCustomizer:(id)arg1;
- (id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { }*)arg3 replacementDepthData:(id)arg4;
- (float)focusPixelBlurScore;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 photoSurface:(struct __IOSurface { }*)arg2 photoSurfaceSize:(unsigned long long)arg3 processedFileType:(id)arg4 previewPhotoSurface:(struct __IOSurface { }*)arg5 embeddedThumbnailSourceSurface:(struct __IOSurface { }*)arg6 metadata:(id)arg7 depthDataSurface:(struct __IOSurface { }*)arg8 depthMetadataDictionary:(id)arg9 portraitEffectsMatteSurface:(struct __IOSurface { }*)arg10 portraitEffectsMatteMetadataDictionary:(id)arg11 hairSegmentationMatteSurface:(struct __IOSurface { }*)arg12 hairSegmentationMatteMetadataDictionary:(id)arg13 skinSegmentationMatteSurface:(struct __IOSurface { }*)arg14 skinSegmentationMatteMetadataDictionary:(id)arg15 teethSegmentationMatteSurface:(struct __IOSurface { }*)arg16 teethSegmentationMatteMetadataDictionary:(id)arg17 glassesSegmentationMatteSurface:(struct __IOSurface { }*)arg18 glassesSegmentationMatteMetadataDictionary:(id)arg19 captureRequest:(id)arg20 bracketSettings:(id)arg21 sequenceCount:(unsigned long long)arg22 photoCount:(unsigned long long)arg23 expectedPhotoProcessingFlags:(unsigned int)arg24 sourceDeviceType:(id)arg25;
- (id)internal;
- (bool)isRawPhoto;
- (long long)lensStabilizationStatus;
- (id)livePhotoMovieFileURL;
- (id)metadata;
- (long long)photoCount;
- (unsigned int)photoProcessingFlags;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)portraitEffectsMatte;
- (id)portraitMetadata;
- (struct CGImage { }*)previewCGImageRepresentation;
- (struct __CVBuffer { }*)previewPixelBuffer;
- (id)privateClientMetadata;
- (id)processedFileType;
- (id)resolvedSettings;
- (id)semanticSegmentationMatteForType:(id)arg1;
- (long long)sequenceCount;
- (id)sourceDeviceType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
