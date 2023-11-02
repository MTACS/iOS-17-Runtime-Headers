
@interface AFBDictionaryEnumerator : NSEnumerator {
    AFBDictionary * _dict;
    unsigned long long  _index;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)nextObject;

@end
