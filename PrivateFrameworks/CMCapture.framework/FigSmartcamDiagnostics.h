
@interface FigSmartcamDiagnostics : NSObject {
    NSMutableDictionary * _metadata;
}

- (void).cxx_destruct;
- (bool)addClassifierVersionMajor:(unsigned short)arg1 minor:(unsigned short)arg2 patch:(unsigned short)arg3;
- (bool)addMotionStats:(struct { float x1[2]; int x2[2]; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; bool x6; bool x7; })arg1;
- (void)addPAMDecisionPreliminary:(id)arg1;
- (void)addSceneConfidences:(id)arg1;
- (id)init;
- (id)metadata;

@end
