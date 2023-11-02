
@interface AXBaseSettings : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _domainNamesToSynchronizeLock;
    NSMutableDictionary * _preferenceKeysByDomainNameToSynchronize;
    NSMutableSet * _registeredPreferenceKeys;
    NSMutableDictionary * _updateBlocks;
}

@property (nonatomic, retain) NSMutableDictionary *preferenceKeysByDomainNameToSynchronize;
@property (nonatomic, retain) NSMutableSet *registeredPreferenceKeys;
@property (nonatomic, retain) NSMutableDictionary *updateBlocks;

- (void).cxx_destruct;
- (void)_handlePreferenceChangedWithNotificationName:(id)arg1;
- (void)_registerForNotification:(id)arg1;
- (bool)_switchFromRootUserIfNecessary:(id /* block */)arg1;
- (void)_synchronizeIfNecessaryForPreferenceKey:(id)arg1 domainName:(id)arg2;
- (id)_userDefaultsStoreForDomainName:(id)arg1;
- (id)allDomainNamesForPreferenceKey:(id)arg1;
- (bool)boolValueForPreferenceKey:(id)arg1 defaultValue:(bool)arg2;
- (void)clearExistingValueForPreferenceWithSelector:(SEL)arg1;
- (void)dealloc;
- (id)domainNameForPreferenceKey:(id)arg1;
- (double)doubleValueForPreferenceKey:(id)arg1 defaultValue:(double)arg2;
- (bool)hasExistingValueForPreferenceWithSelector:(SEL)arg1;
- (id)init;
- (long long)integerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2;
- (id)notificationNameForPreferenceKey:(id)arg1;
- (id)objectValueForPreferenceKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)postNotificationForPreferenceKey:(id)arg1;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (id)preferenceKeysByDomainNameToSynchronize;
- (void)registerUpdateBlock:(id /* block */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)registeredPreferenceKeys;
- (void)setPreferenceKeysByDomainNameToSynchronize:(id)arg1;
- (void)setRegisteredPreferenceKeys:(id)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)unregisterUpdateBlockForRetrieveSelector:(SEL)arg1 withListenerID:(id)arg2;
- (id)updateBlocks;
- (id)valueForPreferenceKey:(id)arg1;
- (void)willPerformUpdateBlocksForPreferenceKey:(id)arg1;
- (void)willPostNotificationForPreferenceKey:(id)arg1 value:(id)arg2;

@end
