
@interface _TtGCs26_SwiftDeferredNSDictionarySSSS_$ : Swift.__SwiftNativeNSDictionary <Swift._NSDictionaryCore> {
    void _bridgedKeys_DoNotUse;
    void _bridgedValues_DoNotUse;
    void native;
}

@property (nonatomic, readonly) long long count;

- (id)copyWithZone:(void*)arg1;
- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (void)enumerateKeysAndObjectsWithOptions:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(void*)arg2 count:(long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
