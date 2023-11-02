
@interface IOSurfaceMemoryPool : NSObject {
    unsigned long long  _poolId;
    unsigned int  _poolPort;
}

@property (readonly) unsigned long long poolId;

- (id)copyDebugInfo;
- (void)dealloc;
- (int)ensureMemory:(id)arg1;
- (int)flush:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (unsigned long long)poolId;

@end
