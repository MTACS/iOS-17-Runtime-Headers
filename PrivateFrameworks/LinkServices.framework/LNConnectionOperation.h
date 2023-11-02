
@interface LNConnectionOperation : NSObject {
    NSObject<OS_os_activity> * _activity;
    id /* block */  _activityProvider;
    LNConnection<LNConnectionOperationDelegate> * _connection;
    NSUUID * _identifier;
    long long  _priority;
    NSObject<OS_dispatch_queue> * _queue;
    LNWatchdogTimer * _requestTimer;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, retain) LNConnection<LNConnectionOperationDelegate> *connection;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) LNWatchdogTimer *requestTimer;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (id)activity;
- (void)cancelTimeout;
- (id)connection;
- (id)description;
- (void)extendTimeout;
- (void)finishWithError:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 queue:(id)arg3 activity:(id /* block */)arg4;
- (long long)priority;
- (id)queue;
- (id)requestTimer;
- (void)setConnection:(id)arg1;
- (void)setRequestTimer;
- (void)start;
- (double)timeout;

@end
