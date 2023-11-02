
@interface PLAutoBindingBlackholeProxy : NSProxy {
    id  _targetObject;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTargetObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
