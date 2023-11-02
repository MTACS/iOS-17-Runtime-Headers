
@interface HKUnitPreferenceController : NSObject {
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _unitPreferencesByObjectType;
    NSMutableDictionary * _unitStrings;
}

@property (nonatomic, retain) HKHealthStore *healthStore;

+ (id)_displayNameKey:(id)arg1 withNumber:(bool)arg2;
+ (id)_displayNameKeyForUnit:(id)arg1 nameContext:(long long)arg2;
+ (id)_localizedHealthUIStringForDisplayType:(id)arg1 unit:(id)arg2 key:(id)arg3 value:(id)arg4;
+ (id)localizedUnitStringForObjectType:(id)arg1 unit:(id)arg2 value:(id)arg3 wheelchairUse:(long long)arg4;

- (void).cxx_destruct;
- (id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2;
- (id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(bool)arg2;
- (id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(bool)arg2 nameContext:(long long)arg3;
- (void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1;
- (id)_generateDefaultHKUnitPreferences;
- (void)_initHKUnitPreferences;
- (void)_localeDidChange:(id)arg1;
- (id)_lock_unitForDisplayType:(id)arg1;
- (void)_lock_updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2;
- (id)_lock_updatePreferredUnits:(id)arg1;
- (id)_longDisplayNameForUnit:(id)arg1;
- (id)_longDisplayNameOverrideForDisplayType:(id)arg1;
- (void)_postNotificationWithChangedKeys:(id)arg1;
- (void)_refreshHKUnitPreferencesWithCompletion:(id /* block */)arg1;
- (id)_unitDisplayNameKeyForDisplayType:(id)arg1 nameContext:(long long)arg2;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)dealloc;
- (id)displayRangeForDisplayType:(id)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)localizedDisplayNameForDisplayType:(id)arg1;
- (id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2;
- (id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 nameContext:(long long)arg3;
- (id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2;
- (id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 nameContext:(long long)arg3;
- (id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)localizedLongDisplayNameForDisplayType:(id)arg1;
- (double)scaleFactorForYAxisLabeling:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (id)unitForChartingDisplayType:(id)arg1;
- (id)unitForDisplayType:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2;

@end
