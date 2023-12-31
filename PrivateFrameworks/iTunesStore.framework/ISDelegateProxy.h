
@interface ISDelegateProxy : NSObject {
    id  _delegate;
    NSLock * _lock;
    bool  _shouldMessageMainThread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)sendInvocationToDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(bool)arg1;

@end
