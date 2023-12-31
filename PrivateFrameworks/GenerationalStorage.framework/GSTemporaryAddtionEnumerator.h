
@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating> {
    NSArray * _array;
    NSDirectoryEnumerator * _enumerator;
    NSError * _error;
    NSString * _nameSpace;
    unsigned long long  _pos;
    GSTemporaryStorage * _storage;
    unsigned long long  _withOptions;
    unsigned long long  _withoutOption;
}

@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id)_nextURL;
- (id)error;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (id)nextObject;

@end
