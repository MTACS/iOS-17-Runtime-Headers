
@interface VCPVideoGyroStabilizer : VCPVideoStabilizer {
    NSMutableDictionary * _analysisDict;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _cropSize;
    NSArray * _metadata;
    NSArray * _stillImageMetadata;
}

- (void).cxx_destruct;
- (int)convertAnalysisResult;
- (id)initWithMetadata:(id)arg1 sourceSize:(struct CGSize { double x1; double x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 stillImageMetadata:(id)arg4 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (void)storeAnalytics:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 isLivePhoto:(bool)arg2;

@end
