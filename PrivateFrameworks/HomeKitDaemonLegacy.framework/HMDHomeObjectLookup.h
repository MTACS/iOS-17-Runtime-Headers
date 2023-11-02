
@interface HMDHomeObjectLookup : HMDObjectLookup {
    HMDHome * _home;
}

@property HMDHome *home;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_scanAccessoriesAndServices;
- (void)_scanActionSets;
- (void)_scanMediaSystems;
- (void)_scanResidentDevices;
- (void)_scanRooms;
- (void)_scanServiceGroups;
- (void)_scanSettings:(id)arg1;
- (void)_scanTriggers;
- (void)_scanUsers;
- (void)_scanZones;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (void)scanObjects;
- (void)setHome:(id)arg1;

@end
