
@interface _OSLogChunkStore : NSObject {
    const void * _ptr;
    unsigned long long  _sz;
}

- (void)enumerateChunksInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChunksUsingBlock:(id /* block */)arg1;
- (id)initWithBytes:(const void*)arg1 size:(unsigned long long)arg2;

@end
