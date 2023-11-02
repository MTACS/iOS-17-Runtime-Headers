
@interface LKAttentionAwareIdleTimer : NSObject {
    NSObject<OS_dispatch_queue> * _attentionAwarenessClientQueue;
    AWAttentionAwarenessClient * _client;
    AWAttentionAwarenessConfiguration * _config;
    <LKAttentionAwareIdleTimerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _timeoutDelegateMap;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *attentionAwarenessClientQueue;
@property (nonatomic, retain) AWAttentionAwarenessClient *client;
@property (nonatomic, retain) AWAttentionAwarenessConfiguration *config;
@property (nonatomic) <LKAttentionAwareIdleTimerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *timeoutDelegateMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)attentionAwarenessClientQueue;
- (id)client;
- (id)config;
- (id)delegate;
- (id)init;
- (id)queue;
- (void)setAttentionAwarenessClientQueue:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimeoutDelegateMap:(id)arg1;
- (void)startMonitoringAttentionAwareIdleWithDelegate:(id)arg1 timeout:(double)arg2;
- (void)stopMonitoringAttentionAwareIdleWithDelegate:(id)arg1 timeout:(double)arg2;
- (id)timeoutDelegateMap;

@end
