
@interface MPSGraphOperation : MPSGraphObject <NSCopying> {
    NSMutableArray * _controlDependencies;
    MPSGraph * _graph;
    NSArray * _inputTensors;
    void * _mlirOperation;
    NSString * _name;
    NSArray * _outputTensors;
    MPSGraphBlock * _parentBlock;
    bool  _pruneOp;
    MPSGraphRegion * _region;
    bool  _stopGradient;
    NSMutableDictionary * _tensorNameDict;
}

@property (nonatomic, readonly) NSArray *controlDependencies;
@property (nonatomic, readonly) MPSGraph *graph;
@property (nonatomic, readonly) NSArray *inputTensors;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *outputTensors;
@property (nonatomic) bool pruneOp;
@property (nonatomic) bool stopGradient;
@property (nonatomic, retain) NSMutableDictionary *tensorNameDict;

- (void).cxx_destruct;
- (id)controlDependencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)graph;
- (id)init;
- (id)initInternal;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 name:(id)arg4;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 region:(id)arg4 name:(id)arg5;
- (id)inputTensors;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)name;
- (id)outputTensors;
- (void)partialDerivateForCFOpWithAutodiff:(struct Autodiff { }*)arg1;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;
- (id)partialDerivativesForInputTensors:(id)arg1 incomingGradients:(id)arg2 name:(id)arg3;
- (bool)pruneOp;
- (bool)recurseFromBlock:(id)arg1 onEscaped:(id)arg2 withAutodiff:(struct Autodiff { }*)arg3;
- (bool)recurseOnBlocksFromOutput:(id)arg1 withAutodiff:(struct Autodiff { }*)arg2;
- (bool)recurseOutFromBlockInput:(id)arg1 withAutodiff:(struct Autodiff { }*)arg2;
- (void)setPruneOp:(bool)arg1;
- (void)setStopGradient:(bool)arg1;
- (void)setTensorNameDict:(id)arg1;
- (bool)stopGradient;
- (id)tensorNameDict;

@end
