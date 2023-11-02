
@interface _NSKeyValueDebuggingDeallocSentinel : NSObject {
    id /* block */  _callbackBlock;
    _Atomic bool  _isInvalid;
    unsigned long long  _objectPointer;
}

+ (void)_invalidateSentinelWithKey:(void*)arg1 fromObject:(id)arg2;

- (void)dealloc;
- (id)initWithObjectPointer:(unsigned long long)arg1 callbackBlock:(id /* block */)arg2;
- (void)invalidate;

@end
