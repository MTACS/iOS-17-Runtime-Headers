
@interface ModelHyperparameters : NSObject {
    long long  _adaptationStrategy;
    NSNumber * _learningRate;
    NSNumber * _minChildWeight;
    NSNumber * _numTrees;
}

@property (nonatomic) long long adaptationStrategy;
@property (nonatomic, retain) NSNumber *learningRate;
@property (nonatomic, retain) NSNumber *minChildWeight;
@property (nonatomic, retain) NSNumber *numTrees;

- (void).cxx_destruct;
- (long long)adaptationStrategy;
- (id)initWithNumTrees:(id)arg1 learningRate:(id)arg2 minChildWeight:(id)arg3 adaptationStrategy:(id)arg4;
- (id)learningRate;
- (id)minChildWeight;
- (id)numTrees;
- (void)setAdaptationStrategy:(long long)arg1;
- (void)setLearningRate:(id)arg1;
- (void)setMinChildWeight:(id)arg1;
- (void)setNumTrees:(id)arg1;

@end
