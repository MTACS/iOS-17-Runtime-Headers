
@interface TIGaussianErrorGenerator : TIErrorGenerator {
    struct CGPoint { 
        double x; 
        double y; 
    }  _globalBias;
    float  _globalStdevX;
    float  _globalStdevY;
    float  _perTouchStdevX;
    float  _perTouchStdevY;
}

- (struct CGPoint { double x1; double x2; })globalBias;
- (id)initWithAttributes:(id)arg1;
- (struct CGPoint { double x1; double x2; })randomErrorForKeyString:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })randomPointInDistribution;
- (struct CGPoint { double x1; double x2; })randomPointWithStandardDeviationX:(float)arg1 Y:(float)arg2;
- (struct CGPoint { double x1; double x2; })randomTargetForSpaceBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reset;
- (void)updateGlobalBias;

@end
