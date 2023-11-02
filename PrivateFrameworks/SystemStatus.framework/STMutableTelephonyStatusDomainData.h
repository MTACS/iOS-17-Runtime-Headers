
@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic, copy) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (nonatomic, copy) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (getter=isCellularRadioCapabilityEnabled, nonatomic) bool cellularRadioCapabilityEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDualSIMEnabled, nonatomic) bool dualSIMEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isInactiveSOSEnabled, nonatomic) bool inactiveSOSEnabled;
@property (getter=isRadioModuleDead, nonatomic) bool radioModuleDead;
@property (readonly) Class superclass;
@property (getter=isUsingStewieForSOS, nonatomic) bool usingStewieForSOS;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCellularRadioCapabilityEnabled:(bool)arg1;
- (void)setDualSIMEnabled:(bool)arg1;
- (void)setInactiveSOSEnabled:(bool)arg1;
- (void)setRadioModuleDead:(bool)arg1;
- (void)setSIMOneInfo:(id)arg1;
- (void)setSIMTwoInfo:(id)arg1;
- (void)setUsingStewieForSOS:(bool)arg1;
- (void)updateSIMOneInfoWithBlock:(id /* block */)arg1;
- (void)updateSIMTwoInfoWithBlock:(id /* block */)arg1;

@end
