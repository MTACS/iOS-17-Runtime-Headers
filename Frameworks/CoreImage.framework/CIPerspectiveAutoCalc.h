
@interface CIPerspectiveAutoCalc : NSObject {
    double  confidence;
    struct { 
        double focalLength; 
        double lineSearchRangeV; 
        double lineSearchRangeH; 
        double pitchLimit; 
        double yawLimit; 
        double rollLimit; 
        CIImage *saliencyHeatmap; 
    }  config;
    CIContext * ctx;
    CIImage * debugImage;
    bool  generateDebugImage;
    CIImage * img;
    double  pitch;
    long long  pitchFailureReason;
    double  roll;
    double  yaw;
    long long  yawFailureReason;
}

@property (readonly) double confidence;
@property (readonly) CIImage *debugImage;
@property bool generateDebugImage;
@property (readonly) double pitch;
@property (readonly) long long pitchFailureReason;
@property (readonly) double roll;
@property (readonly) double yaw;
@property (readonly) long long yawFailureReason;

- (bool)compute;
- (double)confidence;
- (void)dealloc;
- (id)debugImage;
- (bool)generateDebugImage;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; id x7; }*)arg3;
- (double)pitch;
- (long long)pitchFailureReason;
- (double)roll;
- (void)setGenerateDebugImage:(bool)arg1;
- (double)yaw;
- (long long)yawFailureReason;

@end
