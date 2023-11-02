
@interface ADAdaptiveCorrectionDualCameraCalibrationModel : NSObject {
    float  _focalLengthPixAux;
    float  _focalLengthPixRef;
    struct CGPoint { 
        double x; 
        double y; 
    }  _opticalCenterAux;
    struct CGPoint { 
        double x; 
        double y; 
    }  _opticalCenterRef;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _refToAuxExtrinsic;
}

@property (nonatomic) float focalLengthPixAux;
@property (nonatomic) float focalLengthPixRef;
@property (nonatomic) struct CGPoint { double x1; double x2; } opticalCenterAux;
@property (nonatomic) struct CGPoint { double x1; double x2; } opticalCenterRef;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } refToAuxExtrinsic;

- (long long)computeStereoRectificationHomographiesMappingRectTeleToTele:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 rectTeleToWide:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg2 teleToRectTele:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg3;
- (float)focalLengthPixAux;
- (float)focalLengthPixRef;
- (struct CGPoint { double x1; double x2; })opticalCenterAux;
- (struct CGPoint { double x1; double x2; })opticalCenterRef;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })refToAuxExtrinsic;
- (void)setFocalLengthPixAux:(float)arg1;
- (void)setFocalLengthPixRef:(float)arg1;
- (void)setOpticalCenterAux:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOpticalCenterRef:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRefToAuxExtrinsic:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
