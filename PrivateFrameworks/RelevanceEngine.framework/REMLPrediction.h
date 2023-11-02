
@interface REMLPrediction : NSObject <NSCopying> {
    float  _bias;
    NSMutableSet * _explanations;
    float  _mean;
    float  _pessimistic;
    float  _probability;
    float  _variance;
}

@property (nonatomic) float bias;
@property (nonatomic, readonly) NSSet *explanations;
@property (nonatomic, readonly) float mean;
@property (nonatomic, readonly) float pessimistic;
@property (nonatomic, readonly) float probability;
@property (nonatomic, readonly) float variance;

+ (id)predictionWithProbability:(float)arg1 mean:(float)arg2 variance:(float)arg3 pessimistic:(float)arg4;

- (void).cxx_destruct;
- (void)addExplanation:(id)arg1;
- (float)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)explanationDescription;
- (id)explanations;
- (float)mean;
- (float)pessimistic;
- (float)probability;
- (void)setBias:(float)arg1;
- (float)variance;

@end
