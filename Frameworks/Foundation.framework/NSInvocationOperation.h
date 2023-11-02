
@interface NSInvocationOperation : NSOperation {
    NSException * _exception;
    NSInvocation * _inv;
}

@property (readonly, retain) NSInvocation *invocation;
@property (readonly, retain) id result;

- (void)dealloc;
- (id)init;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)invocation;
- (void)main;
- (id)result;

@end
