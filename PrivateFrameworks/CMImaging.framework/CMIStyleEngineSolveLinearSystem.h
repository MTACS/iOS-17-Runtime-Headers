
@interface CMIStyleEngineSolveLinearSystem : NSObject <CMIStyleEngineProcessingStage> {
    <MTLComputePipelineState> * _checkStatusComputePipelineState;
    <MTLDevice> * _device;
    NSArray * _inputLHS;
    NSArray * _inputRHS;
    NSArray * _inputSolution;
    NSArray * _inputStatus;
    unsigned int  _lhsSize;
    <MTLBuffer> * _outputCoefficients;
    <MTLBuffer> * _outputStatus;
    unsigned int  _rhsSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inputLHS;
@property (nonatomic, retain) NSArray *inputRHS;
@property (nonatomic, retain) NSArray *inputSolution;
@property (nonatomic, retain) NSArray *inputStatus;
@property (nonatomic, readonly) unsigned int lhsSize;
@property (nonatomic, retain) <MTLBuffer> *outputCoefficients;
@property (nonatomic, retain) <MTLBuffer> *outputStatus;
@property (nonatomic, readonly) unsigned int rhsSize;
@property (readonly) Class superclass;

+ (id)createWithMetalContext:(id)arg1 lhsSize:(unsigned int)arg2 rhsSize:(unsigned int)arg3 solverType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (id)device;
- (int)enqueueToCommandBuffer:(id)arg1;
- (id)initWithMetalContext:(id)arg1 lhsSize:(unsigned int)arg2 rhsSize:(unsigned int)arg3;
- (id)inputLHS;
- (id)inputRHS;
- (id)inputSolution;
- (id)inputStatus;
- (unsigned int)lhsSize;
- (id)outputCoefficients;
- (id)outputStatus;
- (unsigned int)rhsSize;
- (void)setInputLHS:(id)arg1;
- (void)setInputRHS:(id)arg1;
- (void)setInputSolution:(id)arg1;
- (void)setInputStatus:(id)arg1;
- (void)setOutputCoefficients:(id)arg1;
- (void)setOutputStatus:(id)arg1;
- (int)solveLinearSystem:(id)arg1;

@end
