
@interface STTelephonyStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STTelephonyStatusDomainSIMInfo * _SIMOneInfo;
    STTelephonyStatusDomainSIMInfo * _SIMTwoInfo;
    bool  _cellularRadioCapabilityEnabled;
    bool  _dualSIMEnabled;
    bool  _inactiveSOSEnabled;
    bool  _radioModuleDead;
    bool  _usingStewieForSOS;
}

@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (getter=isCellularRadioCapabilityEnabled, nonatomic, readonly) bool cellularRadioCapabilityEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDualSIMEnabled, nonatomic, readonly) bool dualSIMEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isInactiveSOSEnabled, nonatomic, readonly) bool inactiveSOSEnabled;
@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
@property (getter=isRadioModuleDead, nonatomic, readonly) bool radioModuleDead;
@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property (readonly) Class superclass;
@property (getter=isUsingStewieForSOS, nonatomic, readonly) bool usingStewieForSOS;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SIMOneInfo;
- (id)SIMTwoInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCellularRadioCapabilityEnabled;
- (bool)isDualSIMEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isInactiveSOSEnabled;
- (bool)isRadioModuleDead;
- (bool)isUsingStewieForSOS;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primarySIMInfo;
- (id)secondarySIMInfo;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
