
@interface DYShaderProfilerTimingWrapper : NSObject {
    struct DYShaderProfilerTiming { 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _cycle; 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _time; 
    }  _timing;
}

@property (nonatomic) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } timing;

- (id).cxx_construct;
- (id)init;
- (void)setTiming:(struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })timing;

@end
