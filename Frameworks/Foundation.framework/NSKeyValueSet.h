
@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject * _container;
    NSString * _key;
    NSKeyValueNonmutatingSetMethodSet * _methods;
}

+ (id)_proxyShare;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (struct { id x1; id x2; })_proxyLocator;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (void)dealloc;
- (id)member:(id)arg1;
- (id)objectEnumerator;

@end
