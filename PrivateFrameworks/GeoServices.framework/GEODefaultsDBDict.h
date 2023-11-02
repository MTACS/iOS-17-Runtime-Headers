
@interface GEODefaultsDBDict : GEODefaultsDBCollection

+ (id)dbValue:(id)arg1;

- (unsigned long long)count;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
