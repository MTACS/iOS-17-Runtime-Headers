
@interface STKUserEventMonitor : NSObject {
    AWAttentionAwarenessClient * _attentionAwarenessClient;
    <STKUserEventMonitorDelegate> * _delegate;
    bool  _enabled;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _queue;
    AWAttentionAwarenessConfiguration * _queue_configuration;
}

@property (nonatomic, retain) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (nonatomic) <STKUserEventMonitorDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (id)_initWithAttentionAwarenessClient:(id)arg1;
- (id)_queue;
- (void)_queue_handleAttentionAwarenessEvent:(id)arg1;
- (void)_resume;
- (void)_suspend;
- (id)attentionAwarenessClient;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (bool)isEnabled;
- (void)setAttentionAwarenessClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
