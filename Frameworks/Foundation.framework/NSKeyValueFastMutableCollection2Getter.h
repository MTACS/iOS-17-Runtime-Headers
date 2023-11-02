
@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {
    NSKeyValueGetter * _baseGetter;
    NSKeyValueMutatingCollectionMethodSet * _mutatingMethods;
}

- (id)baseGetter;
- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;
- (id)mutatingMethods;

@end
