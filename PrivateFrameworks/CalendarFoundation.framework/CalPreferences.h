
@interface CalPreferences : NSObject {
    NSString * _domain;
    bool  _readOnly;
    NSMutableSet * _registeredNotificationsToReflect;
    <CalPreferencesStore> * _store;
}

+ (id)log;

- (void).cxx_destruct;
- (void)_preferenceChangedExternally:(id)arg1;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)_synchronizePreferences;
- (void)dealloc;
- (bool)getBooleanPreference:(id)arg1 defaultValue:(bool)arg2;
- (long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2;
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (id)initWithDomain:(id)arg1 readOnly:(bool)arg2;
- (id)initWithDomain:(id)arg1 store:(id)arg2;
- (id)initWithDomain:(id)arg1 store:(id)arg2 readOnly:(bool)arg3;
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;
- (void)removePreference:(id)arg1 notificationName:(id)arg2;
- (void)setBooleanPreference:(id)arg1 value:(bool)arg2 notificationName:(id)arg3;
- (void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3;
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;

@end
