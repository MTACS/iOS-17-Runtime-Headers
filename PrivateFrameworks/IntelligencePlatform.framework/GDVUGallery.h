
@interface GDVUGallery : NSObject {
    void inner;
}

@property (nonatomic, readonly) long long animalprintRevision;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) long long faceprintRevision;
@property (nonatomic, readonly) bool ready;
@property (nonatomic, readonly) long long torsoprintRevision;
@property (nonatomic, readonly) NSSet *unassignedObservations;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (long long)animalprintRevision;
- (id)assets;
- (id)clustersFor:(id)arg1;
- (long long)faceprintRevision;
- (id)init;
- (id)keyObservationsFor:(long long)arg1 limit:(long long)arg2 offset:(long long)arg3;
- (bool)mutateAndReturnError:(id*)arg1 handler:(id /* block */)arg2;
- (bool)ready;
- (bool)resetAndReturnError:(id*)arg1;
- (long long)torsoprintRevision;
- (id)unassignedObservations;
- (bool)updateAndReturnError:(id*)arg1 progressHandler:(id /* block */)arg2;
- (void)updateInferredDeviceOwner;
- (void)updateSocialGroupsWithSocialGroups:(id)arg1;
- (long long)version;

@end
