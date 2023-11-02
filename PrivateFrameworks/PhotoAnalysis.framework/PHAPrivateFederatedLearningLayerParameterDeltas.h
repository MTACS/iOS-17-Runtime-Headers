
@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject {
    MAFloatVector * _biasDeltas;
    MAFloatVector * _weightDeltas;
}

@property (nonatomic, retain) MAFloatVector *biasDeltas;
@property (nonatomic, retain) MAFloatVector *weightDeltas;

+ (id)deltasFromLayerParameters:(id)arg1 toLayerParameters:(id)arg2;

- (void).cxx_destruct;
- (id)biasDeltas;
- (id)initWithWeightDeltas:(id)arg1 biasDeltas:(id)arg2;
- (void)setBiasDeltas:(id)arg1;
- (void)setWeightDeltas:(id)arg1;
- (id)weightDeltas;

@end
