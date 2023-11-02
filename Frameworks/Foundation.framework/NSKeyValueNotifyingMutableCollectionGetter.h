
@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueProxyGetter * _mutableCollectionGetter;
}

- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 mutableCollectionGetter:(id)arg3 proxyClass:(Class)arg4;
- (id)mutableCollectionGetter;

@end
