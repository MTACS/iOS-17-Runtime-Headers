
@interface ARMLImageTransform : NSObject {
    struct __CVPixelBufferPool { } * _conversionBufferPool;
    struct OpaqueVTPixelTransferSession { } * _conversionSession;
    NSArray * _imageScalePassDescriptions;
    ARImageScalingTechnique * _imageScalingTechnique;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
    struct __CVPixelBufferPool { } * _resultBufferPool;
    long long  _rotationAngle;
    struct OpaqueVTPixelRotationSession { } * _rotationSession;
    struct __CVPixelBufferPool { } * _scaledBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledSize;
    struct OpaqueVTPixelTransferSession { } * _scalingSession;
    bool  _useExplicitBGRAConversion;
    bool  _useOptimalMSRCoefficients;
}

- (void).cxx_destruct;
- (id)_applyFinalTransformToScaledImage:(id)arg1 rotation:(long long)arg2 finalResultSize:(struct CGSize { double x1; double x2; })arg3 originalImageData:(id)arg4;
- (void)_calculatePreScalingPassesForInputResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)_preScaleImageData:(id)arg1;
- (void)_prepareSessionAndPoolForRotation:(long long)arg1;
- (void)dealloc;
- (id)fastPassDownscaledResultDataFromImageData:(id)arg1 croppedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotation:(long long)arg3 rotationOfResultTensor:(long long)arg4;
- (id)initWithScaledSize:(struct CGSize { double x1; double x2; })arg1 useOptimalMSRCoefficients:(bool)arg2 useExplicitBGRAConversion:(bool)arg3;

@end
