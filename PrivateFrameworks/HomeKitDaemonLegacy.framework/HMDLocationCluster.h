
@interface HMDLocationCluster : HMFObject <HMFLogging> {
    NSArray * _locations;
}

@property (readonly, copy) CLLocation *bestLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *locations;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)bestLocation;
- (void)clusterWithGroups:(id)arg1;
- (id)generateNewGroupsFromGroups:(id)arg1;
- (id)initWithLocations:(id)arg1;
- (id)kMeansClusteredGroups;
- (id)locationFromKMeansClusteredGroups:(id)arg1;
- (id)locations;

@end
