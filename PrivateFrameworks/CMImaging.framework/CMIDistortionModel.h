
@interface CMIDistortionModel : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*pixelPitch; 
    }  _gdcParams;
    float  _inverseScalingLUT;
}

@property (nonatomic, readonly) struct { float x1; float x2; float x3[8]; float x4[8]; } gdcParams;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustCropRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2;
+ (int)generateInverseScalingLUT:(float*)arg1 withGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2;
+ (int)generateInverseScalingLUT:(id*)arg1 withGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg2 metalCtx:(id)arg3;
+ (int)getGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg1 cameraInfo:(id)arg2 metadata:(id)arg3;

- (struct { float x1; float x2; float x3[8]; float x4[8]; })gdcParams;
- (id)initWithGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preGDCCropRectFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)updateGDCParams:(struct { float x1; float x2; float x3[8]; float x4[8]; }*)arg1;

@end
