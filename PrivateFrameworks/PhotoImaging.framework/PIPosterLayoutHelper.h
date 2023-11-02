
@interface PIPosterLayoutHelper : PFParallaxLayoutHelper {
    CIContext * _context;
    CIImage * _matte;
}

- (void).cxx_destruct;
- (id)initWithCIContext:(id)arg1 matte:(id)arg2 posterClassification:(unsigned long long)arg3 initialRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 imageSize:(struct CGSize { double x1; double x2; })arg5 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 effectivePreferredRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 validBoundsNormalized:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 headroomFeasible:(bool)arg9 layoutType:(unsigned long long)arg10 layoutConfiguration:(id)arg11;
- (id)initWithPosterClassification:(unsigned long long)arg1 initialRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 effectivePreferredRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 validBoundsNormalized:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 headroomFeasible:(bool)arg7 layoutType:(unsigned long long)arg8 layoutConfiguration:(id)arg9;
- (id)intermediateWithInactiveStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)intermediateWithOverlapStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)intermediateWithZoomStrategy:(unsigned long long)arg1 intermediate:(id)arg2;
- (id)pixelBasedIntermediateWithOverlapStrategy:(unsigned long long)arg1 intermediate:(id)arg2 translationY:(double)arg3;
- (id)scoreIntermediate:(id)arg1;

@end
