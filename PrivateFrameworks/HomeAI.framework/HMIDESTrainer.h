
@interface HMIDESTrainer : HMFObject <HMFLogging> {
    HMIDESDataset * _data;
    NSURL * _networkPath;
}

@property (readonly) HMIDESDataset *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSURL *networkPath;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)data;
- (id)getParametersFromLayers:(id)arg1 fromTask:(id)arg2 error:(id*)arg3;
- (id)inferenceInputs:(id)arg1 inferenceOutputs:(id)arg2 trainingInputs:(id)arg3 trainingOutputs:(id)arg4 learningRate:(id)arg5 error:(id*)arg6;
- (id)initWithTrainingNetworkPath:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)networkPath;
- (float)preTrainingInferenceOutputDictionary:(id)arg1 preTrainingtrainingLossKeyName:(id)arg2 error:(id*)arg3;
- (id)trainLayers:(id)arg1 epochs:(unsigned long long)arg2 fromTask:(id)arg3 shouldCalculatePreTrainingLoss:(bool)arg4 error:(id*)arg5;

@end
