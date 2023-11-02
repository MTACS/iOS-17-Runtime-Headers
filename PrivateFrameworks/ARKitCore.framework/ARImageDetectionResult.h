
@interface ARImageDetectionResult : NSObject <NSCopying> {
    double  _estimatedScaleFactor;
    void * _imageContext;
    unsigned long long  _odtObjectIdentifer;
    ARReferenceImage * _referenceImage;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldTrackingCameraTransformAtDetection;
}

@property (nonatomic) double estimatedScaleFactor;
@property (nonatomic) void*imageContext;
@property (nonatomic) unsigned long long odtObjectIdentifer;
@property (nonatomic, retain) ARReferenceImage *referenceImage;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTrackingCameraTransformAtDetection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)estimatedScaleFactor;
- (void*)imageContext;
- (bool)isEqual:(id)arg1;
- (unsigned long long)odtObjectIdentifer;
- (id)referenceImage;
- (void)setEstimatedScaleFactor:(double)arg1;
- (void)setImageContext:(void*)arg1;
- (void)setOdtObjectIdentifer:(unsigned long long)arg1;
- (void)setReferenceImage:(id)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldTrackingCameraTransformAtDetection:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTrackingCameraTransformAtDetection;

@end
