
@interface PHAPrivateFederatedLearningLayerParameters : NSObject {
    MAFloatVector * _bias;
    MAFloatVector * _weights;
}

@property (nonatomic, retain) MAFloatVector *bias;
@property (nonatomic, retain) MAFloatVector *weights;

- (void).cxx_destruct;
- (id)bias;
- (id)initWithWeights:(id)arg1 bias:(id)arg2;
- (void)setBias:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)weights;

@end
