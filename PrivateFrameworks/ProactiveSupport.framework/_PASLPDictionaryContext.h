
@interface _PASLPDictionaryContext : NSObject {
    unsigned long long  _count;
    NSCache * _enumerationCache;
    const unsigned int * _storage;
}

@property (nonatomic) NSCache *enumerationCache;

- (void).cxx_destruct;
- (id)enumerationCache;
- (id)init;
- (id)initWithStorage:(const unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setEnumerationCache:(id)arg1;

@end
