
@protocol NSKeyValueProxyCaching

@required

+ (NSHashTable *)_proxyShare;

- (id)_proxyInitWithContainer:(NSObject *)arg1 getter:(id)arg2;
- (struct { id x1; id x2; })_proxyLocator;
- (void)_proxyNonGCFinalize;

@end
