
@interface __NSConstantDictionaryEnumerator : NSEnumerator {
    unsigned long long  _currentIndex;
    bool  _isForKeys;
    NSConstantDictionary * _underlyingDictionary;
}

- (id)initWithConstantDictionary:(id)arg1 enumerateKeys:(bool)arg2;
- (id)nextObject;

@end
