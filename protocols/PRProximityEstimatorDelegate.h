
@protocol PRProximityEstimatorDelegate <NSObject>

@required

- (void)estimator:(PRProximityEstimator *)arg1 didEstimateProximity:(long long)arg2 toPeer:(NSUUID *)arg3;

@end
