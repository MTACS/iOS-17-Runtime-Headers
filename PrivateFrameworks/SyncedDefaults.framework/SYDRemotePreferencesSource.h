
@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)arg1;

- (unsigned char)_synchronizeForced:(unsigned char)arg1;
- (struct __CFDictionary { }*)copyDictionary;
- (id)copyExternalChangesWithChangeCount:(long long*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentationWithError:(id*)arg1;
- (void)discardExternalChangesForChangeCount:(long long)arg1;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (unsigned char)hasExternalChanges;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 shared:(bool)arg2;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4 containerPath:(struct __CFString { }*)arg5;
- (id)initWithApplicationID:(struct __CFString { }*)arg1 storeID:(struct __CFString { }*)arg2 shared:(bool)arg3 additionalSource:(bool)arg4 containerPath:(struct __CFString { }*)arg5 storeType:(long long)arg6;
- (long long)maximumDataLengthPerKey;
- (long long)maximumKeyCount;
- (long long)maximumKeyLength;
- (long long)maximumTotalDataLength;
- (id)objectForKey:(id)arg1 error:(id*)arg2;
- (void)ping;
- (void)registerForSynchronizedDefaults;
- (bool)removeObjectForKey:(id)arg1 error:(id*)arg2;
- (void)scheduleRemoteSynchronization;
- (void)setDefaultsConfiguration:(id)arg1;
- (bool)setObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)synchronizationWithCompletionHandler:(id /* block */)arg1;
- (unsigned char)synchronize;
- (unsigned char)synchronizeForced:(unsigned char)arg1;
- (void)unregisterForSynchronizedDefaults;
- (void)updateConfiguration;

@end
