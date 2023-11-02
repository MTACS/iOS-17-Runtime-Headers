
@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary { }*)arg1 toDictionary:(struct __CFDictionary { }*)arg2;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString { }*)arg1 fromValue:(void*)arg2 toValue:(void*)arg3;
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString { }*)arg1 isRemote:(bool)arg2;

@end
