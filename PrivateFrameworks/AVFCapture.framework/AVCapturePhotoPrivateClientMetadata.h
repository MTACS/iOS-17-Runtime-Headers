
@interface AVCapturePhotoPrivateClientMetadata : NSObject <NSSecureCoding> {
    NSDictionary * _detectedObjectInfo;
    NSDictionary * _inferenceAttachments;
}

@property (readonly) NSString *captureFolderClientPath;
@property (readonly) NSDictionary *detectedObjectInfo;
@property (readonly) NSDictionary *inferenceAttachments;
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees;
@property (readonly) bool spatialOverCaptureImageHorizonLinePresent;
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
@property (readonly) unsigned int spatialOverCaptureImageStitchingConfidenceScore;

+ (bool)supportsSecureCoding;

- (id)captureFolderClientPath;
- (void)dealloc;
- (id)detectedObjectInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)inferenceAttachments;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataDictionary:(id)arg1;
- (float)spatialOverCaptureImageHorizonLineAngleInDegrees;
- (bool)spatialOverCaptureImageHorizonLinePresent;
- (float)spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
- (unsigned int)spatialOverCaptureImageStitchingConfidenceScore;

@end
