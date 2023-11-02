
@interface NSKeyValueIvarMutableCollectionGetter : NSKeyValueProxyGetter {
    struct objc_ivar { } * _ivar;
}

- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 containerIsa:(Class)arg3 ivar:(struct objc_ivar { }*)arg4 proxyClass:(Class)arg5;
- (struct objc_ivar { }*)ivar;

@end
