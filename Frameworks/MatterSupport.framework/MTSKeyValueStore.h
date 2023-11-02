
@interface MTSKeyValueStore : NSObject <HMFLogging> {
    MTSKeychainStore * _keychainStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MTSKeychainStore *keychainStore;
@property (readonly, copy) NSDictionary *storedValuesByKey;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKeychainStore:(id)arg1;
- (id)keychainStore;
- (bool)removeAllStoredValuesWithError:(id*)arg1;
- (bool)removeStoredValueForKey:(id)arg1 error:(id*)arg2;
- (bool)setStoredValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)storedValueForKey:(id)arg1;
- (id)storedValuesByKey;

@end
