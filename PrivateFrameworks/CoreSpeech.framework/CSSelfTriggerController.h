
@interface CSSelfTriggerController : NSObject {
    CSPolicy * _enabledPolicyWithAVVCAudioSource;
    CSPolicy * _enabledPolicyWithTapAudioSource;
    NSMutableArray * _enabledStates;
    NSObject<OS_dispatch_queue> * _queue;
    CSSelfTriggerDetector * _selfTriggerWithAVVCAudioSource;
    CSSelfTriggerDetector * _selfTriggerWithTapAudioSource;
}

@property (nonatomic, retain) CSPolicy *enabledPolicyWithAVVCAudioSource;
@property (nonatomic, retain) CSPolicy *enabledPolicyWithTapAudioSource;
@property (nonatomic, retain) NSMutableArray *enabledStates;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSelfTriggerDetector *selfTriggerWithAVVCAudioSource;
@property (nonatomic, retain) CSSelfTriggerDetector *selfTriggerWithTapAudioSource;

- (void).cxx_destruct;
- (void)_handleEnabledPolicyEventForAudioSourceType:(unsigned long long)arg1 enabled:(bool)arg2;
- (void)_handleEnabledStatesUpdate:(id)arg1;
- (id)enabledPolicyWithAVVCAudioSource;
- (id)enabledPolicyWithTapAudioSource;
- (id)enabledStates;
- (id)initWithTargetQueue:(id)arg1 audioTapProvider:(id)arg2 avvcRefChannelAvailable:(bool)arg3;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (id)selfTriggerWithAVVCAudioSource;
- (id)selfTriggerWithTapAudioSource;
- (void)setAsset:(id)arg1;
- (void)setEnabledPolicyWithAVVCAudioSource:(id)arg1;
- (void)setEnabledPolicyWithTapAudioSource:(id)arg1;
- (void)setEnabledStates:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSelfTriggerWithAVVCAudioSource:(id)arg1;
- (void)setSelfTriggerWithTapAudioSource:(id)arg1;
- (void)start;
- (void)unregisterObserver:(id)arg1;

@end
