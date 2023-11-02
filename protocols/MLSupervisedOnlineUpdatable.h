
@protocol MLSupervisedOnlineUpdatable

@required

- (bool)updateModelFromFeatures:(id <MLFeatureProvider>)arg1 toTarget:(id <MLFeatureProvider>)arg2 options:(MLSupervisedOnlineUpdateOptions *)arg3 error:(id*)arg4;

@end
