
@protocol HFTriggerProtocol <NSObject>

@required

- (NSString *)hf_naturalLanguageNameWithHome:(HMHome *)arg1 type:(unsigned long long)arg2;
- (NSString *)hf_naturalLanguageNameWithOptions:(HFTriggerNaturalLanguageOptions *)arg1;
- (unsigned long long)hf_triggerType;

@end
