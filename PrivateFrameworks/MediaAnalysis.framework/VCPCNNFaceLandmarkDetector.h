
@interface VCPCNNFaceLandmarkDetector : NSObject {
    NSMutableArray * _landmarks;
}

+ (id)detector;

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)computeLandmarks:(float*)arg1;
- (float*)getInputBuffer;
- (id)landmarks;

@end
