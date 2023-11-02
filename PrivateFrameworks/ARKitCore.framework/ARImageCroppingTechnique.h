
@interface ARImageCroppingTechnique : ARTechnique {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _croppedImageSize;
    struct __CVPixelBufferPool { } * _croppedPixelBufferPool;
    bool  _isCropToTargetResolution;
    struct OpaqueVTPixelTransferSession { } * _vtPixelTransferSession;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } croppedImageSize;

- (struct CGSize { double x1; double x2; })croppedImageSize;
- (void)dealloc;
- (id)initWithCroppedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCroppedImageSize:(struct CGSize { double x1; double x2; })arg1 centerCropToTargetResolution:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;

@end
