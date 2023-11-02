
@interface NSUbiquitousKeyValueStore : NSObject <IMSyncedSettingsRemoteStorageDelegate> {
    SYDClientToDaemonConnection * _source;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (id)defaultStore;

- (id)_initWithStoreIdentifier:(id)arg1 usingEndToEndEncryption:(bool)arg2;
- (id)_remotePreferencesSource;
- (void)_sourceDidChangePassthroughNotification:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(bool)arg3;
- (id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2;
- (long long)longLongForKey:(id)arg1;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumKeyCount;
- (unsigned long long)maximumKeyLength;
- (unsigned long long)maximumTotalDataLength;
- (id)objectForKey:(id)arg1;
- (void)registerDefaultValues:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)sb_setObject:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (void)load;

- (void)setObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TipKitCore.framework/TipKitCore

+ (id)encryptedStoreWithIdentifier:(id)arg1;
+ (id)unencryptedStoreWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

+ (id)wc_sharedInstance;

- (void)wc_synchronizeWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit

+ (void)tsk_coalescedSynchronizeForDefaultStore;

@end
