
@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueNonmutatingCollectionMethodSet * _methods;
}

- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 methods:(id)arg3 proxyClass:(Class)arg4;
- (id)methods;

@end
