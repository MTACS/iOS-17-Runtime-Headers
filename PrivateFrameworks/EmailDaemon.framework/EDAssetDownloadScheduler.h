
@interface EDAssetDownloadScheduler : NSObject {
    long long  _backOffFactor;
    long long  _failureInterval;
    id /* block */  _handler;
    NSString * _identifier;
    NSString * _lastFailureIntervalKey;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _regularInterval;
}

@property (nonatomic) long long _backOffFactor;
@property (nonatomic) long long _failureInterval;
@property (nonatomic, copy) id /* block */ _handler;
@property (nonatomic, copy) NSString *_identifier;
@property (nonatomic, copy) NSString *_lastFailureIntervalKey;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic) long long _regularInterval;
@property (nonatomic, readonly) id /* block */ activityHandlerBlock;

- (void).cxx_destruct;
- (long long)_backOffFactor;
- (long long)_failureInterval;
- (id /* block */)_handler;
- (id)_identifier;
- (id)_lastFailureIntervalKey;
- (long long)_nextFailureInterval;
- (id)_queue;
- (long long)_regularInterval;
- (void)_rescheduleAfterFailureActivity:(id)arg1;
- (void)_rescheduleAfterSuccessActivity:(id)arg1;
- (void)_stopSchedulingActivity:(id)arg1;
- (id)_xpcCriteriaForInterval:(long long)arg1;
- (id /* block */)activityHandlerBlock;
- (id)initWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 regularInterval:(long long)arg2 failureInterval:(long long)arg3 backOffFactor:(long long)arg4 handler:(id /* block */)arg5;
- (void)set_backOffFactor:(long long)arg1;
- (void)set_failureInterval:(long long)arg1;
- (void)set_handler:(id /* block */)arg1;
- (void)set_identifier:(id)arg1;
- (void)set_lastFailureIntervalKey:(id)arg1;
- (void)set_queue:(id)arg1;
- (void)set_regularInterval:(long long)arg1;

@end
