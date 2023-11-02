
@interface ODCurareModelSelectionPolicy : NSObject {
    NSNumber * _minimumNumberOfEvaluations;
    NSNumber * _minimumNumberOfSamples;
    NSArray * _modelSelectionParameters;
}

@property (nonatomic, retain) NSNumber *minimumNumberOfEvaluations;
@property (nonatomic, retain) NSNumber *minimumNumberOfSamples;
@property (nonatomic, retain) NSArray *modelSelectionParameters;

- (void).cxx_destruct;
- (id)description;
- (id)initWithModelSelectionParameters:(id)arg1 minimumNumberOfEvaluations:(id)arg2 minimumNumberOfSamples:(id)arg3;
- (id)minimumNumberOfEvaluations;
- (id)minimumNumberOfSamples;
- (id)modelSelectionParameters;
- (void)setMinimumNumberOfEvaluations:(id)arg1;
- (void)setMinimumNumberOfSamples:(id)arg1;
- (void)setModelSelectionParameters:(id)arg1;

@end
