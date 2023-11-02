
@interface _UITargetedProxy : NSProxy {
    id  __target;
}

@property (setter=_setTarget:, nonatomic, retain) id _target;

+ (id)proxyWithTarget:(id)arg1;

- (void).cxx_destruct;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
