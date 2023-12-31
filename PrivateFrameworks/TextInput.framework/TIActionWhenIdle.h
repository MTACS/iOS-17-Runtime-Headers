
@interface TIActionWhenIdle : NSObject {
    NSInvocation * _invocation;
}

@property (nonatomic, retain) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void).cxx_destruct;
- (void)addObserverToRunLoop;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invalidate;
- (id)invocation;
- (void)invoke;
- (bool)isValid;
- (void)setInvocation:(id)arg1;

@end
