
@interface CKXStructProxyBase : CKXProxyBase {
    CKXStructProxyChildCache * _childProxyCache;
    struct { 
        unsigned long long structToken; 
        unsigned long long page; 
        unsigned long long offset; 
    }  _structInstance;
}

@property (nonatomic, readonly) CKXStructProxyChildCache *childProxyCache;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } structInstance;

- (void).cxx_destruct;
- (void)associateWithStructInstance:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)childProxyCache;
- (void)copyBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3 forToken:(unsigned long long)arg4;
- (id)dataForToken:(unsigned long long)arg1;
- (id)initInternal;
- (void)reset;
- (id)stringForToken:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })structInstance;

@end
