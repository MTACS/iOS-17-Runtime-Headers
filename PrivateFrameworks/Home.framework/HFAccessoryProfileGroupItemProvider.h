
@interface HFAccessoryProfileGroupItemProvider : HFItemProvider <HFAccessoryProfileFiltering, HFAccessoryProfileGrouping> {
    HFAccessoryProfileFilterOptions * _filterOptions;
    HFAccessoryProfileGroupOptions * _groupOptions;
    HMHome * _home;
    NSMutableSet * _profileGroupItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFAccessoryProfileFilterOptions *filterOptions;
@property (nonatomic, retain) HFAccessoryProfileGroupOptions *groupOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *profileGroupItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_profileGroupItemForProfiles:(id)arg1 groupIdentifier:(id)arg2;
- (id)_supportedProfileClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filterOptions;
- (id)groupOptions;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)profileGroupItems;
- (id)reloadItems;
- (void)setFilterOptions:(id)arg1;
- (void)setGroupOptions:(id)arg1;
- (void)setProfileGroupItems:(id)arg1;

@end
