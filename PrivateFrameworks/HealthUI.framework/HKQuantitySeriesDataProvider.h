
@interface HKQuantitySeriesDataProvider : NSObject <UITableViewDataSource, UITableViewDelegate> {
    <HKQuantitySeriesDataProviderDelegate> * _delegate;
    HKDisplayTypeController * _displayTypeController;
    HKQuantitySeriesSampleEditor * _editor;
    bool  _hasSubsamplesToRemove;
    HKHealthStore * _healthStore;
    HKQuantitySample * _parentSample;
    NSMutableArray * _quantities;
    HKUnitPreferenceController * _unitController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <HKQuantitySeriesDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) HKQuantitySeriesSampleEditor *editor;
@property (nonatomic) bool hasSubsamplesToRemove;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKQuantitySample *parentSample;
@property (nonatomic, retain) NSMutableArray *quantities;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (void)commitDeletionsIfNeeded;
- (id)delegate;
- (void)deleteQuantity:(id)arg1;
- (id)displayTypeController;
- (id)editor;
- (bool)hasSubsamplesToRemove;
- (id)healthStore;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)parentSample;
- (id)quantities;
- (void)queryForSubsamples:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayTypeController:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setHasSubsamplesToRemove:(bool)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setParentSample:(id)arg1;
- (void)setQuantities:(id)arg1;
- (void)setUnitController:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)textForQuantity:(id)arg1;
- (id)unitController;

@end
