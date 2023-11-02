
@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {
    NSKeyValueMutatingCollectionMethodSet * _mutatingMethods;
    NSKeyValueNonmutatingCollectionMethodSet * _nonmutatingMethods;
}

- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;
- (id)mutatingMethods;
- (id)nonmutatingMethods;

@end
