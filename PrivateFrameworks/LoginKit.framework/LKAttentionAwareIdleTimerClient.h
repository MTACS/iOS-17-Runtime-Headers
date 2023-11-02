
@interface LKAttentionAwareIdleTimerClient : NSObject {
    <LKAttentionAwareIdleTimerDelegate> * _clientDelegate;
    unsigned long long  _handle;
    unsigned long long  _idleTimerIndex;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
}

@property (nonatomic) <LKAttentionAwareIdleTimerDelegate> *clientDelegate;
@property (nonatomic) unsigned long long handle;
@property (nonatomic) unsigned long long idleTimerIndex;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)_wakeupDeviceAfterInterval:(double)arg1;
- (id)clientDelegate;
- (void)dealloc;
- (unsigned long long)handle;
- (unsigned long long)idleTimerIndex;
- (id)initWithClientDelegate:(id)arg1 timeout:(double)arg2 queue:(id)arg3;
- (void)pause;
- (id)queue;
- (void)resume;
- (void)setClientDelegate:(id)arg1;
- (void)setHandle:(unsigned long long)arg1;
- (void)setIdleTimerIndex:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
