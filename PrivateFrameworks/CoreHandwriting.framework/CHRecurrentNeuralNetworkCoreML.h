
@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork {
    NSDictionary * _classCounts;
    NSDictionary * _featureCounts;
    NSArray * _inputNames;
    CHSingletonMLModel * _model;
    NSArray * _outputNames;
    NSString * _resourcePath;
}

@property (nonatomic, readonly) NSDictionary *classCounts;
@property (nonatomic, readonly) NSDictionary *featureCounts;
@property (nonatomic, readonly) NSArray *inputNames;
@property (nonatomic, readonly) CHSingletonMLModel *model;
@property (nonatomic, readonly) NSArray *outputNames;
@property (nonatomic, readonly) NSString *resourcePath;

- (void).cxx_destruct;
- (id)classCounts;
- (void)dealloc;
- (id)featureCounts;
- (id)initWithModelName:(id)arg1;
- (id)inputNames;
- (id)model;
- (id)outputNames;
- (id)resourcePath;

@end
