
@interface BMWeakProxy : NSProxy {
    id  _target;
}

+ (id)weakProxyToObject:(id)arg1;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
