
@interface CRCTLD : NSObject {
    double  _angleThresholdForRotationCorrection;
    <CRCTLDDelegate> * _delegate;
}

@property double angleThresholdForRotationCorrection;
@property (readonly) <CRCTLDDelegate> *delegate;

- (void).cxx_destruct;
- (struct CTLDRegion { int x1; id x2; float x3; float x4; float x5; float x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; struct CGPoint { double x_10_1_1; double x_10_1_2; } x10; float x11; struct vector<CRTextRecognition::CRCTLD::CTLDRegion, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> { struct CTLDRegion {} *x_12_1_1; struct CTLDRegion {} *x_12_1_2; struct __compressed_pair<CRTextRecognition::CRCTLD::CTLDRegion *, std::allocator<CRTextRecognition::CRCTLD::CTLDRegion>> { struct CTLDRegion {} *x_3_2_1; } x_12_1_3; } x12; })CTLDRegionFromCRRegion:(id)arg1 index:(int)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 rotationAngle:(float)arg4 mainDirection:(unsigned long long)arg5;
- (double)angleThresholdForRotationCorrection;
- (id)delegate;
- (void)enforceQuadrilateralOrder:(struct CGPoint { double x1; double x2; }*)arg1;
- (float)getBaselineAngle:(id)arg1;
- (float)getFeaturesGlobalAngle:(id)arg1;
- (unsigned long long)getFeaturesMainLayoutDirection:(id)arg1;
- (float)getQuadrantOrientation:(id)arg1;
- (id)groupAndOrderRegions:(id)arg1 config:(id)arg2;
- (id)groupAndOrderRegions:(id)arg1 config:(id)arg2 delegate:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)mirrorAxisX:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)setAngleThresholdForRotationCorrection:(double)arg1;
- (id)singleCTLDGroupingPass:(struct CRConstrainedTextLineDetectionImpl { float x1; int x2; int x3; float x4; float x5; float x6; float x7; float x8; int x9; int x10; float x11; float x12; bool x13; }*)arg1 textRegions:(id)arg2;

@end
