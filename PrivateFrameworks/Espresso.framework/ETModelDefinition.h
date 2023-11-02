
@interface ETModelDefinition : NSObject {
    NSString * _initializer;
    NSArray * _inputs;
    NSString * _isTrainingGlobalName;
    NSArray * _layerNames;
    NSURL * _modelURL;
    NSArray * _outputs;
    NSArray * _trainingInputs;
    NSArray * _trainingOutputs;
}

@property (readonly) NSString *initializer;
@property (readonly) NSArray *inputs;
@property (readonly) NSString *isTrainingGlobalName;
@property (readonly) NSArray *layerNames;
@property (readonly) NSURL *modelURL;
@property (readonly) NSArray *outputs;
@property (readonly) NSArray *trainingInputs;
@property (readonly) NSArray *trainingOutputs;

- (void).cxx_destruct;
- (id)initWithInferenceNetworkPath:(id)arg1 error:(id*)arg2;
- (id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id*)arg4;
- (id)initWithTrainingNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 trainingInputs:(id)arg4 trainingOutputs:(id)arg5 trainingControlVariableName:(id)arg6 withInitializer:(id)arg7 error:(id*)arg8;
- (id)initializer;
- (id)inputs;
- (id)isTrainingGlobalName;
- (id)layerNames;
- (id)modelURL;
- (id)outputs;
- (id)trainingInputs;
- (id)trainingOutputs;

@end
