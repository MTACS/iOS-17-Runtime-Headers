
@interface _PSSharingContactRankerMLModel : NSObject {
    NSDictionary * _metadata;
    MLModel * _mlModel;
    double  _scoreThreshold;
}

@property (nonatomic, retain) NSDictionary *metadata;
@property (retain) MLModel *mlModel;
@property double scoreThreshold;

- (void).cxx_destruct;
- (id)giveModelDescription;
- (id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2;
- (id)initWithScoreThreshold:(double)arg1;
- (void)loadDefaultModel;
- (id)metadata;
- (id)mlModel;
- (double)scoreThreshold;
- (id)scoresOnFeatures:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMlModel:(id)arg1;
- (void)setScoreThreshold:(double)arg1;

@end
