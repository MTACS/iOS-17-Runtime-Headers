
@interface BLSHUserIdleProvider : NSObject <BLSHUserIdleProviding> {
    AWAttentionAwarenessClient * _attentionAwarenessClient;
    AWAttentionAwarenessConfiguration * _attentionAwarenessConfiguration;
    NSMutableDictionary * _attentionLostTimeoutDictionary;
    <BLSHUserIdleProvidingDelegate> * _delegate;
    double  _idleTimeout;
    bool  _shouldNotifyOfUnidle;
    bool  _shouldNotifyOfUnidleChanged;
}

@property (nonatomic, retain) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (nonatomic, retain) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration;
@property (nonatomic, retain) NSMutableDictionary *attentionLostTimeoutDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLSHUserIdleProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double idleTimeout;
@property (nonatomic) bool shouldNotifyOfUnidle;
@property (nonatomic) bool shouldNotifyOfUnidleChanged;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_pause;
- (void)_reset;
- (void)_resume;
- (void)_setIdleTimeout:(double)arg1 shouldReset:(bool)arg2;
- (void)_setShouldNotifyOfUnidle:(bool)arg1;
- (id)attentionAwarenessClient;
- (id)attentionAwarenessConfiguration;
- (id)attentionLostTimeoutDictionary;
- (id)delegate;
- (double)idleTimeout;
- (id)init;
- (void)invalidate;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)setAttentionAwarenessClient:(id)arg1;
- (void)setAttentionAwarenessConfiguration:(id)arg1;
- (void)setAttentionLostTimeoutDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimeout:(double)arg1 shouldReset:(bool)arg2;
- (void)setShouldNotifyOfUnidle:(bool)arg1;
- (void)setShouldNotifyOfUnidleChanged:(bool)arg1;
- (bool)shouldNotifyOfUnidle;
- (bool)shouldNotifyOfUnidleChanged;

@end
