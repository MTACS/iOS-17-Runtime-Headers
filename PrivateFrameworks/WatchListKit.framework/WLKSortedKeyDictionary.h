
@interface WLKSortedKeyDictionary : NSDictionary {
    NSDictionary * _underlyingDictionary;
}

@property (nonatomic, copy) NSDictionary *underlyingDictionary;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)setUnderlyingDictionary:(id)arg1;
- (id)underlyingDictionary;

@end
