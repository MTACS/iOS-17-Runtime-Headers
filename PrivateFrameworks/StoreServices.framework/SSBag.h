
@interface SSBag : NSObject {
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic, readonly) SSBagProfileConfig *profileConfig;
@property (nonatomic, retain) NSString *profileVersion;

+ (unsigned long long)_AMSBagValueTypeFromSSBagValueType:(unsigned long long)arg1;
+ (id)bagWithProfileConfig:(id)arg1;
+ (id)cache;
+ (void)removeAllDebugBackingDictionaries;
+ (void)setDebugBackingDictionary:(id)arg1 forProfileConfig:(id)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1 error:(id*)arg2;
- (void)URLForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)URLIsTrusted:(id)arg1;
- (id)URLPromiseForKey:(id)arg1;
- (id)_AMSBag;
- (void)_bagChanged:(id)arg1;
- (id)_initWithProfile:(id)arg1 profileVersion:(id)arg2;
- (id)arrayForKey:(id)arg1 error:(id*)arg2;
- (void)arrayForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)arrayPromiseForKey:(id)arg1;
- (id)boolForKey:(id)arg1 error:(id*)arg2;
- (void)boolForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)boolPromiseForKey:(id)arg1;
- (bool)canHandleTrustedDomains;
- (void)dealloc;
- (id)description;
- (id)dictionaryForKey:(id)arg1 error:(id*)arg2;
- (void)dictionaryForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)dictionaryPromiseForKey:(id)arg1;
- (id)doubleForKey:(id)arg1 error:(id*)arg2;
- (void)doubleForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)doublePromiseForKey:(id)arg1;
- (id)expirationDate;
- (id)integerForKey:(id)arg1 error:(id*)arg2;
- (void)integerForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)integerPromiseForKey:(id)arg1;
- (bool)isExpired;
- (id)profile;
- (id)profileConfig;
- (id)profileVersion;
- (id)resetCaches;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (void)stringForKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)stringPromiseForKey:(id)arg1;

@end
