
@interface VCPVideoCNNQuality : VCPVideoCNNTask {
    VCPCNNModelEspresso * _modelEspresso;
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (id)results;
- (int)run:(id)arg1 withPersons:(id)arg2 andRegionCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;

@end
