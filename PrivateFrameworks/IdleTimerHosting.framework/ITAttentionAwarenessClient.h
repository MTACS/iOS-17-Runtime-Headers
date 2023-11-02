
@interface ITAttentionAwarenessClient : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    AWAttentionAwarenessClient * _access_attentionAwarenessClient;
    bool  _access_enabled;
    <ITAttentionAwarenessClientDelegate> * _delegate;
}

@property (nonatomic, retain) AWAttentionAwarenessClient *_access_attentionAwarenessClient;
@property (nonatomic, retain) AWAttentionAwarenessConfiguration *configuration;
@property (nonatomic) <ITAttentionAwarenessClientDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void).cxx_destruct;
- (id)_access_attentionAwarenessClient;
- (void)_access_resume;
- (void)_access_suspend;
- (void)_handleAttentionAwarenessEvent:(id)arg1;
- (id)_initWithCalloutQueue:(id)arg1 attentionAwarenessClient:(id)arg2;
- (id)configuration;
- (id)delegate;
- (id)init;
- (id)initWithCalloutQueue:(id)arg1;
- (bool)isEnabled;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 shouldReset:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)set_access_attentionAwarenessClient:(id)arg1;

@end
