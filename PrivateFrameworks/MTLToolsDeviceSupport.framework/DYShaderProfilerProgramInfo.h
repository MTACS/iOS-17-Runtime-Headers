
@interface DYShaderProfilerProgramInfo : NSObject {
    NSArray * _allShaderKeys;
    NSString * _computeKernelKey;
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
    }  _computeTiming;
    NSMutableArray * _drawCallInfoList;
    NSString * _fragmentShaderKey;
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
    }  _fragmentTiming;
    unsigned long long  _pipelineStateFunctionIndex;
    unsigned long long  _pipelineStateId;
    unsigned long long  _programId;
    unsigned int  _programIndex;
    unsigned int  _programPipelineIndex;
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
    bool  _valid;
    NSString * _vertexShaderKey;
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
    }  _vertexTiming;
}

@property (nonatomic, readonly) NSArray *allShaderKeys;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } computeTiming;
@property (nonatomic, readonly) NSMutableArray *drawCallInfoList;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } fragmentTiming;
@property (nonatomic) unsigned long long pipelineStateFunctionIndex;
@property (nonatomic, readonly) unsigned long long pipelineStateId;
@property (nonatomic) unsigned long long programId;
@property (nonatomic) unsigned int programIndex;
@property (nonatomic, readonly) unsigned int programPipelineIndex;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } timing;
@property (nonatomic) bool valid;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } vertexTiming;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allShaderKeys;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })computeTiming;
- (id)drawCallInfoList;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })fragmentTiming;
- (id)init;
- (unsigned long long)pipelineStateFunctionIndex;
- (unsigned long long)pipelineStateId;
- (unsigned long long)programId;
- (unsigned int)programIndex;
- (unsigned int)programPipelineIndex;
- (void)setPipelineStateFunctionIndex:(unsigned long long)arg1;
- (void)setProgramId:(unsigned long long)arg1;
- (void)setProgramIndex:(unsigned int)arg1;
- (void)setValid:(bool)arg1;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })timing;
- (bool)valid;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })vertexTiming;

@end
