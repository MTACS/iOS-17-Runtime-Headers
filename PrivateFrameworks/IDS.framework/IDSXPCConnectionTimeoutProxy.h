
@interface IDSXPCConnectionTimeoutProxy : NSObject {
    IDSXPCConnection * _connection;
    id /* block */  _errorHandler;
    id  _target;
    double  _timeout;
}

@property (nonatomic, retain) IDSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) id target;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (bool)_invocationHasBlock:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id /* block */)errorHandler;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(id /* block */)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setConnection:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setTarget:(id)arg1;
- (void)setTimeout:(double)arg1;
- (id)target;
- (double)timeout;

@end
