
@interface FMWeakForwardingContainer : NSObject {
    NSObject * _target;
}

@property (nonatomic, readonly) NSObject *target;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)target;

@end
