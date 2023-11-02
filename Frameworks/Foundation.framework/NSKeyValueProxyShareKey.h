
@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching> {
    NSObject * _container;
    NSString * _key;
}

+ (id)_proxyShare;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (struct { id x1; id x2; })_proxyLocator;
- (void)_proxyNonGCFinalize;

@end
