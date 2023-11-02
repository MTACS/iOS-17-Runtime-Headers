
@interface HMDHomeManagerObjectLookup : HMDObjectLookup {
    HMDHomeManager * _homeManager;
}

@property HMDHomeManager *homeManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_scanAccounts;
- (void)_scanCloudZones;
- (void)_scanHomes;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (void)scanObjects;
- (void)setHomeManager:(id)arg1;

@end
