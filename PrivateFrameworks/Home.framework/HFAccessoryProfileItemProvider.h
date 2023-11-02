
@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering> {
    HFAccessoryProfileFilterOptions * _filterOptions;
    HMHome * _home;
    NSMutableSet * _profileItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFAccessoryProfileFilterOptions *filterOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *profileItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_profileItemForProfile:(id)arg1;
- (id)_supportedProfileClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filterOptions;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)profileItems;
- (id)reloadItems;
- (void)setFilterOptions:(id)arg1;
- (void)setProfileItems:(id)arg1;

@end
