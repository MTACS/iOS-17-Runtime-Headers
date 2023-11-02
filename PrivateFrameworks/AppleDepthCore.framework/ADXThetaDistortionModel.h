
@interface ADXThetaDistortionModel : NSObject <ADLensDistortionModel> {
    unsigned long long  _XThetaType;
    struct CGPoint { 
        double x; 
        double y; 
    }  _distortionCenter;
    NSArray * _distortionCoefficients;
}

@property (nonatomic, readonly) unsigned long long XThetaType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGPoint { double x1; double x2; } distortionCenter;
@property (nonatomic, retain) NSArray *distortionCoefficients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)XThetaType;
- (void)adjustForImageRotation:(long long)arg1 forDimensions:(struct CGSize { double x1; double x2; })arg2;
- (void)applyDistortionModelToPixels:(unsigned long long)arg1 inPixels:(const struct CGPoint { double x1; double x2; }*)arg2 intrinsicsMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 distort:(bool)arg4 outPixels:(struct CGPoint { double x1; double x2; }*)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDimensions:(struct CGSize { double x1; double x2; })arg2;
- (id)dictionaryRepresentation:(bool)arg1;
- (void)distortPixels:(unsigned long long)arg1 undistortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outDistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;
- (struct CGPoint { double x1; double x2; })distortionCenter;
- (id)distortionCoefficients;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 XThetaType:(unsigned long long)arg2;
- (id)initWithDistortionCenter:(struct CGPoint { double x1; double x2; })arg1 XThetaType:(unsigned long long)arg2 distortionCoefficients:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)scale:(float)arg1;
- (void)setDistortionCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDistortionCoefficients:(id)arg1;
- (void)undistortPixels:(unsigned long long)arg1 distortedPixels:(const struct CGPoint { double x1; double x2; }*)arg2 withCameraCalibration:(id)arg3 outUndistortedPixels:(struct CGPoint { double x1; double x2; }*)arg4;

@end
