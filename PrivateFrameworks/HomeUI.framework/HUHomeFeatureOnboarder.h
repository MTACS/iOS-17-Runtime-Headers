
@interface HUHomeFeatureOnboarder : HUFeatureOnboarder {
    NSSet * _devices;
    HMHome * _home;
}

@property (nonatomic, retain) NSSet *devices;
@property (nonatomic, retain) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg1 usageOptions:(id)arg2;
- (id)devices;
- (id)getPostProcessingFlowsForResults:(id)arg1;
- (id)home;
- (id)initWithFeatures:(id)arg1 home:(id)arg2 devices:(id)arg3 usageOptions:(id)arg4;
- (id)initWithFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3;
- (id)initWithGroupedFeatures:(id)arg1 home:(id)arg2 usageOptions:(id)arg3;
- (void)setDevices:(id)arg1;
- (void)setHome:(id)arg1;

@end
