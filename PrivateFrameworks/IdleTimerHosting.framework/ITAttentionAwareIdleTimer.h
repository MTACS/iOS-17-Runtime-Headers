
@interface ITAttentionAwareIdleTimer : NSObject <ITAttentionAwarenessClientDelegate> {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _accessLock;
    ITAttentionAwarenessClient * _access_client;
    ITAttentionAwarenessContext * _access_context;
    ITIdleTimerDescriptor * _access_descriptor;
    NSString * _configurationIdentifier;
    <ITIdleTimerDelegate> * _delegate;
}

@property (nonatomic, readonly) ITAttentionAwarenessContext *_context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <ITIdleTimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) ITIdleTimerDescriptor *descriptor;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_configurationWithIdentifier:(id)arg1 descriptor:(id)arg2 context:(id)arg3;
+ (id)_timeoutDictionaryForTimeouts:(id)arg1;

- (void).cxx_destruct;
- (id)_access_generateConfiguration;
- (void)_access_reconfigureAttentionClientAndReset:(bool)arg1;
- (id)_context;
- (id)_initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 calloutQueue:(id)arg3 client:(id)arg4;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(id)arg2 forContext:(id)arg3;
- (void)clientDidReset:(id)arg1 forUserAttentionEvent:(id)arg2 withContext:(id)arg3;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptor;
- (id)init;
- (id)initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2;
- (id)initWithConfigurationIdentifier:(id)arg1 delegate:(id)arg2 calloutQueue:(id)arg3;
- (bool)isEnabled;
- (void)reset;
- (void)setDescriptor:(id)arg1 resettingTimer:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
