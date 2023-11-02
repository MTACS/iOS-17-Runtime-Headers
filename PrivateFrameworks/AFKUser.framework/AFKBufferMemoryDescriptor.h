
@interface AFKBufferMemoryDescriptor : AFKMemoryDescriptor

+ (id)withManager:(id)arg1 capacity:(unsigned long long)arg2;
+ (id)withManager:(id)arg1 capacity:(unsigned long long)arg2 token:(unsigned long long)arg3;

- (int)appendBytes:(const void*)arg1 withSize:(unsigned long long)arg2;
- (int)assumeControlWithOffset:(unsigned long long)arg1 andSize:(unsigned long long)arg2;
- (void*)getBytesNoCopy:(unsigned long long)arg1 withSize:(unsigned long long)arg2;
- (id)initWithManager:(id)arg1 capacity:(unsigned long long)arg2 buffer:(bool)arg3;
- (id)initWithManager:(id)arg1 capacity:(unsigned long long)arg2 token:(unsigned long long)arg3;
- (int)releaseControl:(bool)arg1 withOffset:(unsigned long long)arg2 andSize:(unsigned long long)arg3;

@end
