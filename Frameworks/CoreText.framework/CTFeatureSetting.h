
@interface CTFeatureSetting : NSDictionary {
    NSDictionary * _dictionary;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
