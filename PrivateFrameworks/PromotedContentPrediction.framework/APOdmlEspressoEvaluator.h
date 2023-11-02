
@interface APOdmlEspressoEvaluator : NSObject {
    APOdmlTrainingSetBuilder * _builder;
    NSURL * _netURL;
    APOdmlRecipe * _recipe;
    unsigned long long  _trainingSetSize;
}

@property (nonatomic, readonly) APOdmlTrainingSetBuilder *builder;
@property (nonatomic, readonly) NSURL *netURL;
@property (nonatomic, readonly) APOdmlRecipe *recipe;
@property (nonatomic) unsigned long long trainingSetSize;

- (void).cxx_destruct;
- (id)_computeModelDeltas:(id)arg1 weightsAfter:(id)arg2 error:(id*)arg3;
- (id)_evaluate:(id)arg1 error:(id*)arg2;
- (id)_generateMetrics:(id)arg1 postTrainingMetrics:(id)arg2 tapAndImpressionMetrics:(id)arg3 deltaPttrMetrics:(id)arg4;
- (bool)_setError:(id*)arg1 errorCode:(long long)arg2;
- (id)builder;
- (id)evaluate:(id*)arg1;
- (id)initWithTrainingRowBuilder:(id)arg1 recipe:(id)arg2 netURL:(id)arg3;
- (id)netURL;
- (id)recipe;
- (void)setTrainingSetSize:(unsigned long long)arg1;
- (unsigned long long)trainingSetSize;

@end
