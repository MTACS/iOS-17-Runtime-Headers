
@interface AVCapturePhotoInternal : NSObject {
    unsigned int  actualPhotoProcessingFlags;
    AVCaptureBracketedStillImageSettings * bracketSettings;
    AVCameraCalibrationData * cameraCalibrationData;
    AVDepthData * depthData;
    bool  didTryToDecodeDepthData;
    bool  didTryToDecodeGlassesSegmentationMatte;
    bool  didTryToDecodeHairSegmentationMatte;
    bool  didTryToDecodePortraitEffectsMatte;
    bool  didTryToDecodeSkinSegmentationMatte;
    bool  didTryToDecodeTeethSegmentationMatte;
    NSDictionary * embeddedThumbnailPhotoFormat;
    struct __CVBuffer { } * embeddedThumbnailSourcePixelBuffer;
    unsigned int  expectedPhotoProcessingFlags;
    AVSemanticSegmentationMatte * glassesSegmentationMatte;
    AVSemanticSegmentationMatte * hairSegmentationMatte;
    bool  lensStabilizationSupported;
    NSDictionary * metadata;
    unsigned long long  photoCount;
    struct __CVBuffer { } * photoPixelBuffer;
    struct __IOSurface { } * photoSurface;
    unsigned long long  photoSurfaceSize;
    AVPortraitEffectsMatte * portraitEffectsMatte;
    AVApplePortraitMetadata * portraitMetadata;
    struct __CVBuffer { } * previewPixelBuffer;
    AVCapturePhotoPrivateClientMetadata * privateClientMetadata;
    NSString * processedFileType;
    AVCaptureResolvedPhotoSettings * resolvedSettings;
    unsigned long long  sequenceCount;
    AVSemanticSegmentationMatte * skinSegmentationMatte;
    NSString * sourceDeviceType;
    AVSemanticSegmentationMatte * teethSegmentationMatte;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  timestamp;
    AVCapturePhotoSettings * unresolvedSettings;
}

@end
