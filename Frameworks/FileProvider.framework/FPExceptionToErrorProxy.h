
@interface FPExceptionToErrorProxy : NSObject {
    id  _target;
    id /* block */  _unhandledExceptionHandler;
}

@property (nonatomic, copy) id target;
@property (nonatomic, copy) id /* block */ unhandledExceptionHandler;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)errorFromException:(id)arg1 whileSendingToSelector:(SEL)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setUnhandledExceptionHandler:(id /* block */)arg1;
- (id)target;
- (id /* block */)unhandledExceptionHandler;

@end
