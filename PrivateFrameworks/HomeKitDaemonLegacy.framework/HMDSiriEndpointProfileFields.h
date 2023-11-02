
@interface HMDSiriEndpointProfileFields : HMFObject {
    NSString * _isSiriEnableField;
    NSString * _isSiriListeningField;
    NSString * _needsOnboardingField;
    NSString * _siriLightOnUseField;
    NSString * _siriSoundOnUseField;
    NSString * _siriTouchToUseField;
    NSString * _supportsOnboardingField;
}

@property (readonly, copy) NSString *isSiriEnableField;
@property (readonly, copy) NSString *isSiriListeningField;
@property (readonly, copy) NSString *needsOnboardingField;
@property (readonly, copy) NSString *siriLightOnUseField;
@property (readonly, copy) NSString *siriSoundOnUseField;
@property (readonly, copy) NSString *siriTouchToUseField;
@property (readonly, copy) NSString *supportsOnboardingField;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithNeedsOnboardingField:(id)arg1 supportsOnboardingField:(id)arg2 siriEnableField:(id)arg3 siriListeningField:(id)arg4 siriTouchToUseField:(id)arg5 siriLightOnUseField:(id)arg6 siriSoundOnUseField:(id)arg7;
- (id)isSiriEnableField;
- (id)isSiriListeningField;
- (id)needsOnboardingField;
- (id)serializeFields;
- (id)siriLightOnUseField;
- (id)siriSoundOnUseField;
- (id)siriTouchToUseField;
- (id)supportsOnboardingField;

@end
