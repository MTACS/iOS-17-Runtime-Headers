
@interface SBAttentionAwarenessClient : NSObject <BSInvalidatable> {
    AWAttentionAwarenessClient * _attentionAwarenessClient;
    <SBAttentionAwarenessClientDelegate> * _delegate;
    bool  _enabled;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
    AWAttentionAwarenessConfiguration * _queue_configuration;
}

@property (nonatomic, retain) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBAttentionAwarenessClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAttentionAwarenessEvent:(id)arg1;
- (void)_resetAttentionLostTimeout;
- (void)_resume;
- (void)_suspend;
- (id)configuration;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (bool)isEnabled;
- (void)resetAttentionLostTimeout;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 shouldReset:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
