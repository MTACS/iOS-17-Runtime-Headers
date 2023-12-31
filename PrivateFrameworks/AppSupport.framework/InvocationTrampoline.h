
@interface InvocationTrampoline : NSObject {
    id  _target;
}

@property (retain) id target;

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)performInvocation:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
