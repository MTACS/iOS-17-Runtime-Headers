
@interface _PASLPArrayContext : NSObject {
    unsigned long long  _count;
    const unsigned int * _storage;
}

- (id)init;
- (id)initWithStorage:(const unsigned int*)arg1 count:(unsigned long long)arg2;

@end
