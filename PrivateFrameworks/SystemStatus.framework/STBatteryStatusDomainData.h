
@interface STBatteryStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    bool  _batterySaverModeActive;
    NSString * _chargingDescription;
    unsigned long long  _chargingDescriptionType;
    unsigned long long  _chargingState;
    unsigned long long  _percentCharge;
}

@property (getter=isBatterySaverModeActive, nonatomic, readonly) bool batterySaverModeActive;
@property (nonatomic, readonly, copy) NSString *chargingDescription;
@property (nonatomic, readonly) unsigned long long chargingDescriptionType;
@property (nonatomic, readonly) unsigned long long chargingState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long percentCharge;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chargingDescription;
- (unsigned long long)chargingDescriptionType;
- (unsigned long long)chargingState;
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
- (bool)isBatterySaverModeActive;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)percentCharge;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
