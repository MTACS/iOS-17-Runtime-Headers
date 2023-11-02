
@interface FCPersistentAssetKeyCache : NSObject <FCAppActivityObserving, FCAssetKeyCacheType, FCCacheFlushing> {
    NSMutableDictionary * _cacheEntries;
    NFUnfairLock * _cacheEntriesLock;
    NSString * _cachePath;
    bool  _flushingEnabled;
    NFUnfairLock * _interestLock;
    NSCountedSet * _interestedKeys;
    bool  _needsSave;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityObservingApplicationDidEnterBackground;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)interestTokenForWrappingKeyIDs:(id)arg1;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2;
- (id)wrappingKeyForWrappingKeyID:(id)arg1;

@end
