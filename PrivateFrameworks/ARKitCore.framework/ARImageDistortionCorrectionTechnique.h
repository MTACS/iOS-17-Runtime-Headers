
@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    bool  _computeUndistortionCoefficientsForEveryFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct __CVPixelBufferPool { } * _undistortedImageBufferPool;
    struct optional<(anonymous namespace)::Undistorter>=""(?="__null_state_"c"__val_"{Undistorter="m_unrotatedImageWidth"Q"m_unrotatedImageHeight"Q"m_mappingU"{vector<float, std::allocator<float>>="__begin_"^f"__end_"^f"__end_cap_"{__compressed_pair<float *, std::allocator<float>>="__value_"^f {}  _undistorter;
    NSDictionary * _undistortionMappingsForRotations;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildUVMapFromHardcodedCalibrationParameters;
- (void)buildUVMapWithCameraCalibrationData:(id)arg1;
- (void)buildUVMapWithDistortedPixelProviderBlock:(id /* block */)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })lensDistortionPointForPoint:(struct CGPoint { double x1; double x2; })arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint { double x1; double x2; })arg3 imageSize:(struct CGSize { double x1; double x2; })arg4;
- (id)processData:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)undistortImage:(struct __CVBuffer { }*)arg1 toTargetImage:(struct __CVBuffer { }*)arg2 imageRotationAngle:(long long)arg3;

@end
