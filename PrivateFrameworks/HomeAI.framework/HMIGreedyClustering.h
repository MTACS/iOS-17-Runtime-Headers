
@interface HMIGreedyClustering : HMFObject <HMFLogging> {
    struct shared_ptr<homeai::clustering::GreedyClusterer> { 
        struct GreedyClusterer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _greedyClusterer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(void*)arg2 error:(id*)arg3;
+ (id)centermostFaceprintInCluster:(id)arg1 faceObservations:(id)arg2;
+ (float)faceDistanceFromDescriptor:(id)arg1 toDescriptor:(id)arg2;
+ (id)logCategory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)convertToClusters:(void*)arg1;
- (id)getClustersWithFaces:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (id)initWithFaceThreshold:(id)arg1 singleLinkThreshold:(id)arg2 percentConnectionsThreshold:(id)arg3 error:(id*)arg4;

@end
