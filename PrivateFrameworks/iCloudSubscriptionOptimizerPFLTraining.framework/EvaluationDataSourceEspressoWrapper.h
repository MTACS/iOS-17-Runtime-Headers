
@interface EvaluationDataSourceEspressoWrapper : NSObject <ETDataSource> {
    <EvaluatorDataSource> * _dataSource;
}

@property (nonatomic, retain) <EvaluatorDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataPointAtIndex:(int)arg1;
- (id)dataProcessAtIndex:(int)arg1;
- (id)dataSource;
- (id)featureProviderAtIndex:(int)arg1;
- (id)initWithEvaluatorDataSource:(id)arg1;
- (int)numberOfDataPoints;
- (void)setDataSource:(id)arg1;

@end
