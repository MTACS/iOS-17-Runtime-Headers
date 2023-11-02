
@interface HMProxyObject : NSProxy

- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (bool)respondsToSelector:(SEL)arg1;
- (id)self;
- (Class)superclass;

@end
