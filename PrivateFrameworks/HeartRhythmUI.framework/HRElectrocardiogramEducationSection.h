
@interface HRElectrocardiogramEducationSection : HKDataMetadataSection <HKOnboardingPageViewControllerDelegate> {
    NSNumber * _activeAlgorithmVersion;
    bool  _firstTimeOnboarding;
    bool  _forSinglePlayer;
    HKHealthStore * _store;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) NSNumber *activeAlgorithmVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool firstTimeOnboarding;
@property (nonatomic, readonly) bool forSinglePlayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *store;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)_cellTitleForEducationRow:(unsigned long long)arg1;
- (bool)_hasOnboardedBefore;
- (id)_viewControllerForEducationRow:(unsigned long long)arg1;
- (id)activeAlgorithmVersion;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)dateCache;
- (id)fetchActiveECGAlgorithmVersion;
- (bool)firstTimeOnboarding;
- (bool)forSinglePlayer;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 forSinglePlayer:(bool)arg2 activeAlgorithmVersion:(id)arg3;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setActiveAlgorithmVersion:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)stepForward;
- (id)store;
- (id)userInfo;
- (void)willDisplayCell:(id)arg1 forIndex:(unsigned long long)arg2 tableView:(id)arg3;

@end
