
@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {
    NSArray * _models;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithModels:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithWeightsArray:(id)arg1 andIntercept:(bool)arg2;
- (unsigned long long)outputDimension;
- (id)predict:(id)arg1;
- (id)serialize;
- (id)toPlistWithChunks:(id)arg1;

@end
