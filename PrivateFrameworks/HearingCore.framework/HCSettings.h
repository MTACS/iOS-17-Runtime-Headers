
@interface HCSettings : NSObject {
    NPSDomainAccessor * _domainAccessor;
    NPSDomainAccessor * _globalDomainAccessor;
    NSObject<OS_dispatch_queue> * _nanoDomainAccessorQueue;
    NSMutableSet * _registeredNotifications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syncLock;
    NSMutableSet * _synchronizePreferences;
    NSMutableDictionary * _updateBlocks;
}

@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (nonatomic, retain) NPSDomainAccessor *globalDomainAccessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nanoDomainAccessorQueue;
@property (nonatomic, retain) NSMutableSet *registeredNotifications;
@property (nonatomic, retain) NSMutableSet *synchronizePreferences;
@property (nonatomic, retain) NSMutableDictionary *updateBlocks;

- (void).cxx_destruct;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)_registerForNotification:(id)arg1;
- (bool)_switchFromRootUserIfNecessary:(id /* block */)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (bool)boolValueForPreferenceKey:(id)arg1 withDefaultValue:(bool)arg2;
- (double)cgfloatValueForPreferenceKey:(id)arg1 withDefaultValue:(double)arg2;
- (void)dealloc;
- (id)domainAccessor;
- (id)globalDomainAccessor;
- (id)init;
- (long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (id)keysToSync;
- (void)logMessage:(id)arg1;
- (id)nanoDomainAccessor;
- (id)nanoDomainAccessorQueue;
- (id)nanoPreferenceDomain;
- (id)notificationForPreferenceKey:(id)arg1;
- (id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3;
- (void)pairedWatchDidChange:(id)arg1;
- (id)preferenceDomainForPreferenceKey:(id)arg1;
- (id)preferenceKeyForSelector:(SEL)arg1;
- (void)registerUpdateBlock:(id /* block */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)registeredNotifications;
- (void)resetValueForSelector:(SEL)arg1;
- (void)setDomainAccessor:(id)arg1;
- (void)setGlobalDomainAccessor:(id)arg1;
- (void)setNanoDomainAccessorQueue:(id)arg1;
- (void)setRegisteredNotifications:(id)arg1;
- (void)setSynchronizePreferences:(id)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (bool)shouldStoreLocally;
- (id)synchronizePreferences;
- (id)updateBlocks;

@end
