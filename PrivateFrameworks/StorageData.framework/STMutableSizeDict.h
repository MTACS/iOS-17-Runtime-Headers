
@interface STMutableSizeDict : STSizeDict {
    NSMutableDictionary * _mutableDictionary;
}

- (void).cxx_destruct;
- (void)addSize:(id)arg1 toKey:(id)arg2;
- (bool)hasKey:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)plusEquals:(id)arg1;
- (void)removeSmallerThan:(long long)arg1;
- (void)setSize:(id)arg1 forKey:(id)arg2;

@end
