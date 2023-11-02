
@interface NSAutoContentAccessingProxy : NSProxy {
    id  _target;
}

+ (id)proxyWithTarget:(id)arg1;

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
