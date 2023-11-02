
@interface SHBagContract : NSObject {
    AMSBag * _bag;
    NSString * _baseDictionaryKey;
    NSMutableDictionary * _mutableDefaultValues;
    NSNumberFormatter * _numberFormatter;
    bool  _throwOnError;
}

@property (nonatomic, readonly) AMSBag *bag;
@property (nonatomic, readonly, copy) NSString *baseDictionaryKey;
@property (nonatomic, readonly) NSDictionary *defaultValues;
@property (nonatomic, readonly) NSMutableDictionary *mutableDefaultValues;
@property (nonatomic, readonly) NSNumberFormatter *numberFormatter;
@property (nonatomic) bool throwOnError;

- (void).cxx_destruct;
- (void)addBagKey:(id)arg1 defaultValue:(id)arg2;
- (id)bag;
- (id)baseDictionaryKey;
- (bool)booleanBackedByStringForKey:(id)arg1;
- (bool)booleanForKey:(id)arg1;
- (id)defaultValueForKey:(id)arg1;
- (id)defaultValues;
- (double)doubleBackedByStringForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)fullyQualifiedKey:(id)arg1;
- (id)initWithBaseDictionaryKey:(id)arg1 bag:(id)arg2;
- (id)initWithBaseDictionaryKey:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;
- (long long)integerBackedByStringForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (void)loadBaseDictionary:(id /* block */)arg1;
- (id)mutableDefaultValues;
- (id)numberFormatter;
- (id)numberFromString:(id)arg1 forKey:(id)arg2;
- (void)setThrowOnError:(bool)arg1;
- (id)stringForKey:(id)arg1;
- (bool)throwOnError;
- (id)valueForKey:(id)arg1 bagValue:(id)arg2;

@end
