
@interface CKDDeviceIDManager : NSObject {
    NSMutableDictionary * _deviceIDsByContainerIdentifierByContainerEnvironment;
    NSString * _globalDeviceID;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _useLegacyKeychain;
}

@property (nonatomic, retain) NSMutableDictionary *deviceIDsByContainerIdentifierByContainerEnvironment;
@property (nonatomic, retain) NSString *globalDeviceID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool useLegacyKeychain;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deleteDeviceIdentifierForContainer:(id)arg1;
- (id)_globalService;
- (id)_perServicelookupKeyForContainer:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContainer:(id)arg2;
- (void)_saveDeviceIdentifier:(id)arg1 forService:(id)arg2 lookupKey:(id)arg3 sysBound:(bool)arg4 success:(bool*)arg5;
- (void)_saveDeviceIdentifierToDefaults:(id)arg1 forService:(id)arg2 lookupKey:(id)arg3;
- (id)_savedDeviceIdentifierForService:(id)arg1 lookupKey:(id)arg2 success:(bool*)arg3;
- (id)_serviceForContainer:(id)arg1;
- (struct __CFDictionary { }*)createQueryForService:(id)arg1 lookupKey:(id)arg2 sysBound:(bool)arg3;
- (id)deviceIDsByContainerIdentifierByContainerEnvironment;
- (id)deviceIDsByContainerIdentifierInContainerEnvironment:(long long)arg1;
- (id)deviceIdentifierForContainer:(id)arg1;
- (id)deviceIdentifierForContainer:(id)arg1 skipInMemoryCache:(bool)arg2 createIfNecessary:(bool)arg3;
- (id)globalDeviceID;
- (id)globalDeviceIdentifier;
- (id)globalDeviceIdentifierSkipInMemoryCache:(bool)arg1 createIfNecessary:(bool)arg2;
- (id)initInternal;
- (id)queue;
- (void)setDeviceIDsByContainerIdentifierByContainerEnvironment:(id)arg1;
- (void)setGlobalDeviceID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUseLegacyKeychain:(bool)arg1;
- (bool)useLegacyKeychain;

@end
