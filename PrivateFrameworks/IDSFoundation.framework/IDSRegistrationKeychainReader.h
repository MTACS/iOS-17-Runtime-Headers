
@interface IDSRegistrationKeychainReader : NSObject {
    id /* block */  _purgeCancelBlock;
    id /* block */  _purgeEnqueueBlock;
    IMDispatchTimer * _purgeTimer;
    NSMutableArray * _registrationData;
}

+ (id)keychainAccessGroupForVersion:(unsigned long long)arg1;
+ (id)keychainAccountForVersion:(unsigned long long)arg1;
+ (id)keychainServiceForVersion:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_flush;
- (void)_reloadFromDictionaryLocked:(id)arg1;
- (void)_reloadFromKeychainLocked;
- (void)_setPurgeTimer;
- (void)dealloc;
- (void)flushCache;
- (id)init;
- (id)registrationData;
- (id)registrationWithServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(bool)arg3 value:(id)arg4;

@end
