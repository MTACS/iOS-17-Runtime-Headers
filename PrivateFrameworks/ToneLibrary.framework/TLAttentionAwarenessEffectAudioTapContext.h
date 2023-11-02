
@interface TLAttentionAwarenessEffectAudioTapContext : NSObject {
    TLAttentionAwarenessEffectCoordinator * _effectCoordinator;
    TLAttentionAwarenessEffectProcessor * _effectProcessor;
    NSUUID * _identifier;
}

@property (nonatomic, retain) TLAttentionAwarenessEffectCoordinator *effectCoordinator;
@property (nonatomic, retain) TLAttentionAwarenessEffectProcessor *effectProcessor;
@property (nonatomic, readonly) NSUUID *identifier;

- (void).cxx_destruct;
- (id)description;
- (id)effectCoordinator;
- (id)effectProcessor;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setEffectCoordinator:(id)arg1;
- (void)setEffectProcessor:(id)arg1;

@end
