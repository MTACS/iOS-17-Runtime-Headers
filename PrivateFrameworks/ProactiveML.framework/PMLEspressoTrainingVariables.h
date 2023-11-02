
@interface PMLEspressoTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol> {
    NSArray * _globalsToGetGradientsFor;
    bool  _initializedWithNSData;
    NSString * _initializerName;
    unsigned long long  _inputDim;
    NSString * _inputName;
    NSArray * _layerBiasesToGetGradientsFor;
    NSArray * _layerWeightsToGetGradientsFor;
    NSString * _lossValueName;
    NSString * _outputName;
    NSString * _trainingControlVariableName;
    NSURL * _trainingNetworkPath;
    NSString * _trainingOutputName;
    NSString * _trueLabelName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *globalsToGetGradientsFor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *initializerName;
@property (nonatomic, readonly) unsigned long long inputDim;
@property (nonatomic, readonly) NSString *inputName;
@property (nonatomic, readonly) NSArray *layerBiasesToGetGradientsFor;
@property (nonatomic, readonly) NSArray *layerWeightsToGetGradientsFor;
@property (nonatomic, readonly) NSString *lossValueName;
@property (nonatomic, readonly) NSString *outputName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trainingControlVariableName;
@property (nonatomic, readonly) NSURL *trainingNetworkPath;
@property (nonatomic, readonly) NSString *trainingOutputName;
@property (nonatomic, readonly) NSString *trueLabelName;

- (void).cxx_destruct;
- (id)globalsToGetGradientsFor;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTrainingNetworkPath:(id)arg1 inputName:(id)arg2 inputDim:(unsigned long long)arg3 outputName:(id)arg4 trueLabelName:(id)arg5 lossValueName:(id)arg6 trainingOutputName:(id)arg7 trainingControlVariableName:(id)arg8 initializerName:(id)arg9 globalsToGetGradientsFor:(id)arg10 layerWeightsToGetGradientsFor:(id)arg11 layerBiasesToGetGradientsFor:(id)arg12;
- (id)initializerName;
- (unsigned long long)inputDim;
- (id)inputName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEspressoTrainingVariables:(id)arg1;
- (id)layerBiasesToGetGradientsFor;
- (id)layerWeightsToGetGradientsFor;
- (id)lossValueName;
- (id)outputName;
- (id)toPlistWithChunks:(id)arg1;
- (id)trainingControlVariableName;
- (id)trainingNetworkPath;
- (id)trainingOutputName;
- (id)trueLabelName;

@end
