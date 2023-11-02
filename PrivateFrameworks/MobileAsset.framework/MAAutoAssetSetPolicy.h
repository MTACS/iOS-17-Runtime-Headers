
@interface MAAutoAssetSetPolicy : NSObject <NSSecureCoding> {
    NSDictionary * _additionalPolicyControl;
    bool  _allowCheckDownloadOnBattery;
    bool  _allowCheckDownloadOverCellular;
    bool  _allowCheckDownloadOverExpensive;
    bool  _allowCheckDownloadWhenBatteryLow;
    bool  _allowCheckDownloadWhenCPUHigh;
    bool  _blockCheckDownload;
    bool  _blockCheckDownloadWhenRecentUserActivity;
    bool  _lockInhibitsEmergencyRemoval;
    bool  _preferCheckDownloadOverWiFi;
    bool  _restrictCheckDownloadToNetwork;
    bool  _userInitiated;
}

@property (nonatomic, retain) NSDictionary *additionalPolicyControl;
@property (nonatomic) bool allowCheckDownloadOnBattery;
@property (nonatomic) bool allowCheckDownloadOverCellular;
@property (nonatomic) bool allowCheckDownloadOverExpensive;
@property (nonatomic) bool allowCheckDownloadWhenBatteryLow;
@property (nonatomic) bool allowCheckDownloadWhenCPUHigh;
@property (nonatomic) bool blockCheckDownload;
@property (nonatomic) bool blockCheckDownloadWhenRecentUserActivity;
@property (nonatomic) bool lockInhibitsEmergencyRemoval;
@property (nonatomic) bool preferCheckDownloadOverWiFi;
@property (nonatomic) bool restrictCheckDownloadToNetwork;
@property (nonatomic) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalPolicyControl;
- (bool)allowCheckDownloadOnBattery;
- (bool)allowCheckDownloadOverCellular;
- (bool)allowCheckDownloadOverExpensive;
- (bool)allowCheckDownloadWhenBatteryLow;
- (bool)allowCheckDownloadWhenCPUHigh;
- (bool)blockCheckDownload;
- (bool)blockCheckDownloadWhenRecentUserActivity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)lockInhibitsEmergencyRemoval;
- (bool)preferCheckDownloadOverWiFi;
- (bool)restrictCheckDownloadToNetwork;
- (void)setAdditionalPolicyControl:(id)arg1;
- (void)setAllowCheckDownloadOnBattery:(bool)arg1;
- (void)setAllowCheckDownloadOverCellular:(bool)arg1;
- (void)setAllowCheckDownloadOverExpensive:(bool)arg1;
- (void)setAllowCheckDownloadWhenBatteryLow:(bool)arg1;
- (void)setAllowCheckDownloadWhenCPUHigh:(bool)arg1;
- (void)setBlockCheckDownload:(bool)arg1;
- (void)setBlockCheckDownloadWhenRecentUserActivity:(bool)arg1;
- (void)setLockInhibitsEmergencyRemoval:(bool)arg1;
- (void)setPreferCheckDownloadOverWiFi:(bool)arg1;
- (void)setRestrictCheckDownloadToNetwork:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (id)summary;
- (bool)userInitiated;

@end
