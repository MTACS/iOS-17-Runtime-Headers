
@interface WDWorkoutAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate, WDAddDataManualEntrySpinnerDataSource> {
    WDAddDataManualEntryItem * _activeEnergyEntryItem;
    WDAddDataManualEntrySpinner * _activityTypeEntryItem;
    WDAddDataManualEntryItem * _dateRangeEntryItem;
    WDAddDataManualEntryItem * _distanceEntryItem;
    HKQuantityType * _distanceType;
    NSArray * _sectionsWithDistance;
    NSArray * _sectionsWithoutDistance;
    NSArray * _workoutActivityTypePairs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeEnergyDisplayName;
- (id)_activityTypeDescriptionForIndex:(long long)arg1;
- (unsigned long long)_activityTypeForIndex:(long long)arg1;
- (void)_createEntryItems;
- (id)_displayTypeForDistanceType:(id)arg1;
- (id)_displayTypeForIdentifier:(long long)arg1;
- (id)_distanceDisplayName;
- (id)_generateSortedActivityTypes;
- (long long)_indexOfActivityType:(unsigned long long)arg1;
- (bool)_isExcludedActivityType:(unsigned long long)arg1;
- (id)_quantityFromEntryItem:(id)arg1 unit:(id)arg2;
- (id)_sectionsForDistanceType:(id)arg1;
- (unsigned long long)_selectedActivityType;
- (id)_totalDistance;
- (id)_totalEnergyBurned;
- (id)_unitForDistanceType:(id)arg1;
- (void)_updateCurrentDistanceTypeWithActivityType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (id)manualEntryItemsForSection:(long long)arg1;
- (id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2;
- (long long)numberOfRowsInManualEntrySpinner:(id)arg1;
- (long long)numberOfSections;
- (void)saveHKObjectWithCompletion:(id /* block */)arg1;
- (void)unitPreferencesDidChange:(id)arg1;
- (void)validateDataWithCompletion:(id /* block */)arg1;

@end
