
@interface MTLIOCompressor : NSObject {
    void * context;
}

- (void)appendData:(id)arg1;
- (long long)close;
- (void)dealloc;
- (id)initWithType:(long long)arg1 dst:(id)arg2 chunkSize:(unsigned long long)arg3;

@end
