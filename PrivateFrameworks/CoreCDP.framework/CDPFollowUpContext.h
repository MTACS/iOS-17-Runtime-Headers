
@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _followUpType;
    bool  _force;
    unsigned long long  _repairType;
    bool  _shouldNotify;
    NSString * _telemetryDeviceSessionID;
    NSString * _telemetryFlowID;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *followUpType;
@property (nonatomic) bool force;
@property (nonatomic) unsigned long long repairType;
@property (nonatomic) bool shouldNotify;
@property (nonatomic, copy) NSString *telemetryDeviceSessionID;
@property (nonatomic, copy) NSString *telemetryFlowID;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

+ (id)_contextWithType:(id)arg1 cdpContext:(id)arg2;
+ (id)contextForConfirmExistingSecret;
+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyMismatchHealing;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForSOSCompatibilityMode;
+ (id)contextForSecureTerms;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForStateRepair;
+ (id)contextForWalrusCreatePasscodeWithCDPContext:(id)arg1;
+ (id)contextWithType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpType;
- (bool)force;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)repairType;
- (void)setAltDSID:(id)arg1;
- (void)setFollowUpType:(id)arg1;
- (void)setForce:(bool)arg1;
- (void)setRepairType:(unsigned long long)arg1;
- (void)setShouldNotify:(bool)arg1;
- (void)setTelemetryDeviceSessionID:(id)arg1;
- (void)setTelemetryFlowID:(id)arg1;
- (bool)shouldNotify;
- (id)telemetryDeviceSessionID;
- (id)telemetryFlowID;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (bool)isDefaultRepairOrSOSCompatibilityFollowUp;

@end
