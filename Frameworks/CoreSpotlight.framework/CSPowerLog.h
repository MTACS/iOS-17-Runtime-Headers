
@interface CSPowerLog : NSObject {
    unsigned long long  _cachedCount;
    NSDate * _lastFlushDate;
    NSMutableDictionary * _operationsByBundleID;
    NSMutableDictionary * _reasonedOperationsByBundleID;
}

@property (nonatomic) unsigned long long cachedCount;
@property (nonatomic, retain) NSDate *lastFlushDate;
@property (nonatomic, retain) NSMutableDictionary *operationsByBundleID;
@property (nonatomic, retain) NSMutableDictionary *reasonedOperationsByBundleID;

+ (id)keyNameForOperation:(long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3;
- (void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3 reason:(id)arg4;
- (unsigned long long)cachedCount;
- (void)flushToPowerLog_locked_and_unlock;
- (id)init;
- (id)lastFlushDate;
- (void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3;
- (void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3 reason:(id)arg4;
- (id)operationsByBundleID;
- (id)reasonedOperationsByBundleID;
- (void)setCachedCount:(unsigned long long)arg1;
- (void)setLastFlushDate:(id)arg1;
- (void)setOperationsByBundleID:(id)arg1;
- (void)setReasonedOperationsByBundleID:(id)arg1;
- (void)updateDictionaryAndUnlock:(unsigned long long)arg1 cacheCount:(long long)arg2 keyName:(id)arg3 operationDictionary:(id)arg4;
- (void)updateDictionaryAndUnlock:(unsigned long long)arg1 keyName:(id)arg2 operationDictionary:(id)arg3;

@end
