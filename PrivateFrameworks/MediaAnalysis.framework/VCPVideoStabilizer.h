
@interface VCPVideoStabilizer : VCPVideoAnalyzer {
    float  _analysisConfidence;
    void * _analysisResultRef;
    void * _correctionResultRef;
    float  _cropFraction;
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
    bool  _gyroStabilization;
    bool  _isPathConstraintsStabilization;
    NSMutableArray * _motionBlurVector;
    NSDictionary * _results;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceSize;
    bool  _stabilizationFaild;
    NSArray * _stillImageMetadata;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    bool  _validStabilization;
}

@property (nonatomic) float analysisConfidence;
@property (nonatomic) void*analysisResultRef;
@property (nonatomic) void*correctionResultRef;
@property (nonatomic) float cropFraction;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic) bool gyroStabilization;
@property (nonatomic) bool isPathConstraintsStabilization;
@property (nonatomic, retain) NSMutableArray *motionBlurVector;
@property (nonatomic, retain) NSDictionary *results;
@property (nonatomic) struct CGSize { double x1; double x2; } sourceSize;
@property (readonly) bool stabilizationFaild;
@property (nonatomic, retain) NSArray *stillImageMetadata;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic) bool validStabilization;

+ (bool)saveStabilizationRecipe;
+ (id)videoStabilizerforAnalysisType:(unsigned long long)arg1 withMetadata:(id)arg2 sourceSize:(struct CGSize { double x1; double x2; })arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

- (void).cxx_destruct;
- (float)analysisConfidence;
- (void*)analysisResultRef;
- (int)convertAnalysisResult;
- (void*)correctionResultRef;
- (float)cropFraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)gyroStabilization;
- (id)init;
- (bool)isPathConstraintsStabilization;
- (id)motionBlurVector;
- (id)results;
- (void)setAnalysisConfidence:(float)arg1;
- (void)setAnalysisResultRef:(void*)arg1;
- (void)setCorrectionResultRef:(void*)arg1;
- (void)setCropFraction:(float)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGyroStabilization:(bool)arg1;
- (void)setIsPathConstraintsStabilization:(bool)arg1;
- (void)setMotionBlurVector:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSourceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStillImageMetadata:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setValidStabilization:(bool)arg1;
- (struct CGSize { double x1; double x2; })sourceSize;
- (bool)stabilizationFaild;
- (id)stillImageMetadata;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (bool)validStabilization;

@end
