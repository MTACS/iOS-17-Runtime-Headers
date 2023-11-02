
@interface ECIntToTwoIntKeyCache : NSObject {
    NSMutableDictionary * mCache;
}

+ (id)keyForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)init;
- (bool)integerIsPresentForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2 outValue:(unsigned long long*)arg3;
- (void)setObject:(unsigned long long)arg1 forKey1:(unsigned long long)arg2 key2:(unsigned long long)arg3;

@end
