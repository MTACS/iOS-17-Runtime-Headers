
@interface PIDisparitySampleJob : NURenderJob {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sampleRect;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleTime;
    float  _sampledDisparityValue;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sampleRect;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sampleTime;
@property (nonatomic) float sampledDisparityValue;

- (bool)render:(out id*)arg1;
- (id)result;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sampleRect;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleTime;
- (float)sampledDisparityValue;
- (id)scalePolicy;
- (void)setSampleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampledDisparityValue:(float)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputVideo;
- (bool)wantsRenderStage;

@end
