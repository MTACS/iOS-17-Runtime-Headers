
@interface CNWrappedDictionary : NSDictionary {
    NSDictionary * _underlyingDictionary;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)initWithDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
