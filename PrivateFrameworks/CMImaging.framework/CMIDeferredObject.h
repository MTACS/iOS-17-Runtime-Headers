
@interface CMIDeferredObject : NSProxy {
    NSObject * _actualValue;
    id /* block */  _realizeBlock;
    bool  _realized;
}

- (void).cxx_destruct;
- (void)_realize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
