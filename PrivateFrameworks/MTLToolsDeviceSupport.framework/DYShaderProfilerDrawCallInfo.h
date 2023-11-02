
@interface DYShaderProfilerDrawCallInfo : NSObject {
    NSArray * _allShaderKeys;
    unsigned int  _commandBufferIndex;
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
    unsigned int  _drawCallIndex;
    unsigned long long  _encoderFunctionIndex;
    unsigned int  _encoderIndex;
    unsigned long long  _encoderStateId;
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
    unsigned int  _functionIndex;
    unsigned long long  _pipelineStateFunctionIndex;
    unsigned long long  _pipelineStateId;
    unsigned int  _pipelineStateIndex;
    DYShaderProfilerProgramInfo * _programInfo;
    int  _subCommandIndex;
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

@property (nonatomic, retain) NSArray *allShaderKeys;
@property (nonatomic) unsigned int commandBufferIndex;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } computeTiming;
@property (nonatomic) unsigned int drawCallIndex;
@property (nonatomic) unsigned long long encoderFunctionIndex;
@property (nonatomic) unsigned int encoderIndex;
@property (nonatomic) unsigned long long encoderStateId;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } fragmentTiming;
@property (nonatomic) unsigned int functionIndex;
@property (nonatomic) unsigned long long pipelineStateFunctionIndex;
@property (nonatomic) unsigned long long pipelineStateId;
@property (nonatomic) unsigned int pipelineStateIndex;
@property (nonatomic, retain) DYShaderProfilerProgramInfo *programInfo;
@property (nonatomic) int subCommandIndex;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } timing;
@property (nonatomic, readonly) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } vertexTiming;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allShaderKeys;
- (unsigned int)commandBufferIndex;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })computeTiming;
- (unsigned int)drawCallIndex;
- (unsigned long long)encoderFunctionIndex;
- (unsigned int)encoderIndex;
- (unsigned long long)encoderStateId;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })fragmentTiming;
- (unsigned int)functionIndex;
- (id)init;
- (unsigned long long)pipelineStateFunctionIndex;
- (unsigned long long)pipelineStateId;
- (unsigned int)pipelineStateIndex;
- (id)programInfo;
- (void)setAllShaderKeys:(id)arg1;
- (void)setCommandBufferIndex:(unsigned int)arg1;
- (void)setDrawCallIndex:(unsigned int)arg1;
- (void)setEncoderFunctionIndex:(unsigned long long)arg1;
- (void)setEncoderIndex:(unsigned int)arg1;
- (void)setEncoderStateId:(unsigned long long)arg1;
- (void)setFunctionIndex:(unsigned int)arg1;
- (void)setPipelineStateFunctionIndex:(unsigned long long)arg1;
- (void)setPipelineStateId:(unsigned long long)arg1;
- (void)setPipelineStateIndex:(unsigned int)arg1;
- (void)setProgramInfo:(id)arg1;
- (void)setSubCommandIndex:(int)arg1;
- (int)subCommandIndex;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })timing;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })vertexTiming;

@end
