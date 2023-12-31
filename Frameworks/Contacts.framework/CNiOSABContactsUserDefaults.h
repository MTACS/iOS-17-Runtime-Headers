
@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults {
    CNiOSABContactsUserDefaultsABWrapper * _abWrapper;
    NSMutableDictionary * _observerCountPerKey;
    NSCache * _valueCache;
}

@property (nonatomic, readonly) CNiOSABContactsUserDefaultsABWrapper *abWrapper;
@property (nonatomic, retain) NSMutableDictionary *observerCountPerKey;
@property (nonatomic, retain) NSCache *valueCache;

- (void).cxx_destruct;
- (void)_registerObserverForKey:(id)arg1;
- (void)_unregisterObserverForKey:(id)arg1;
- (id)abWrapper;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)countryCode;
- (void)dealloc;
- (long long)displayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (void)flushCache;
- (id)init;
- (id)initWithABWrapper:(id)arg1;
- (bool)isShortNameFormatEnabled;
- (long long)lastIgnoredNewDuplicatesCount;
- (long long)newContactDisplayNameOrder;
- (id)observerCountPerKey;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setDisplayNameOrder:(long long)arg1;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (void)setLastIgnoredNewDuplicatesCount:(long long)arg1;
- (void)setObserverCountPerKey:(id)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setShortNameFormatEnabled:(bool)arg1;
- (void)setShortNameFormatPrefersNicknames:(bool)arg1;
- (void)setValueCache:(id)arg1;
- (long long)shortNameFormat;
- (bool)shortNameFormatPrefersNicknames;
- (long long)sortOrder;
- (id)valueCache;

@end
