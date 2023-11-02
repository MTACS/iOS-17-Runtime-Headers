
@interface JDDynamicDistortionCameraCalibrationData : JDMutableCameraCalibrationData {
    bool  _adjustToBinning;
    struct JDGDCPolynomials { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _gdcBase;
    struct JDGDCPolynomials { 
        float forwardOrders[8]; 
        float inverseOrders[8]; 
    }  _gdcDynamic;
    float  _rawSensorPixelSize;
}

@property bool adjustToBinning;

- (bool)adjustToBinning;
- (id)initWithPixelSize:(float)arg1 gdcModel:(id)arg2 cameraToPlatformTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (bool)pointFromMetadataField:(id)arg1 key:(id)arg2 point:(struct CGPoint { double x1; double x2; }*)arg3;
- (bool)rectFromMetadataField:(id)arg1 key:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)setAdjustToBinning:(bool)arg1;
- (bool)updateForFrameWithDimensions:(struct CGSize { double x1; double x2; })arg1 metadataDictionary:(id)arg2;

@end
