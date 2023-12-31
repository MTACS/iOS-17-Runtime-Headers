
@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager * _manager;
    Class  _targetClass;
}

- (bool)_tryRetain;
- (void)forwardInvocation:(id)arg1;
- (id)initWithManager:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (oneway void)release;
- (id)retain;
- (void)setTargetClass:(Class)arg1;
- (void)superRelease;

@end
