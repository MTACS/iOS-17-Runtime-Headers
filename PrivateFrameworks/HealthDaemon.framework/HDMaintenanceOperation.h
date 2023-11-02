
@interface HDMaintenanceOperation : NSObject {
    <HDMaintenanceOperationDelegate> * _delegate;
    double  _enqueuedTime;
    bool  _faultOnTimeout;
    bool  _hasFinished;
    bool  _hasStarted;
    bool  _isImmediateRequest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    double  _startedTime;
    double  _timeout;
    double  _timeoutTime;
}

@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic) double enqueuedTime;
@property (nonatomic) bool faultOnTimeout;
@property (nonatomic, readonly) bool isImmediateRequest;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) double timeout;
@property (nonatomic, readonly) double timeoutTime;

+ (id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(id /* block */)arg2;
+ (id)maintenanceOperationWithName:(id)arg1 database:(id)arg2 asynchronousBlock:(id /* block */)arg3;
+ (id)maintenanceOperationWithName:(id)arg1 queue:(id)arg2 synchronousBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)description;
- (double)elapsedTime;
- (double)enqueuedTime;
- (bool)faultOnTimeout;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isImmediateRequest;
- (void)main;
- (id)name;
- (void)setEnqueuedTime:(double)arg1;
- (void)setFaultOnTimeout:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)startWithCompletionDelegate:(id)arg1 fromImmediateRequest:(bool)arg2;
- (double)timeout;
- (double)timeoutTime;

@end
