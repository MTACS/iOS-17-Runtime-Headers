
@interface BRZombie : NSProxy

+ (void)turnObjectIntoZombie:(id)arg1;

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
