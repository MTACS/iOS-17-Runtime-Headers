
@interface TRISystemInfo : NSObject <NSSecureCoding> {
    NSString * _aneVersion;
    NSString * _carrierBundleIdentifier;
    NSString * _carrierCountryIsoCode;
    NSArray * _enabledInputModeIdentifiers;
    bool  _hasAne;
    bool  _isAutomatedTestDevice;
    bool  _isDiagnosticsAndUsageEnabled;
    bool  _isEnrolledInBetaProgram;
    bool  _logUserKeyboardEnabledInputMode;
    bool  _logUserSettingsLanguageCode;
    bool  _logUserSettingsRegionCode;
}

@property (nonatomic, retain) NSString *aneVersion;
@property (nonatomic, retain) NSString *carrierBundleIdentifier;
@property (nonatomic, retain) NSString *carrierCountryIsoCode;
@property (nonatomic, retain) NSArray *enabledInputModeIdentifiers;
@property (nonatomic) bool hasAne;
@property (nonatomic) bool isAutomatedTestDevice;
@property (nonatomic) bool isDiagnosticsAndUsageEnabled;
@property (nonatomic) bool isEnrolledInBetaProgram;
@property (nonatomic) bool logUserKeyboardEnabledInputMode;
@property (nonatomic) bool logUserSettingsLanguageCode;
@property (nonatomic) bool logUserSettingsRegionCode;

+ (id)_aneVersion;
+ (id)_carrierBundleIdentifier;
+ (id)_carrierCountryIsoCode;
+ (bool)_hasAne;
+ (bool)_isAutomatedTestDevice;
+ (bool)_isDiagnosticsAndUsageEnabled;
+ (bool)_isSeedBuild;
+ (id)_persistentSystemInfoPath;
+ (id)_sysEnabledInputModeIdentifiers;
+ (bool)_sysIsEnrolledInBetaProgram;
+ (id)createSystemInfoWithFactorProvider:(id)arg1;
+ (id)info;
+ (id)loadSystemInfo;
+ (bool)supportsSecureCoding;
+ (id)systemInfoFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)aneVersion;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (id)enabledInputModeIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAne;
- (id)initFromSystemWithFactorProvider:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutomatedTestDevice;
- (bool)isDiagnosticsAndUsageEnabled;
- (bool)isEnrolledInBetaProgram;
- (bool)logUserKeyboardEnabledInputMode;
- (bool)logUserSettingsLanguageCode;
- (bool)logUserSettingsRegionCode;
- (bool)save;
- (bool)saveToFile:(id)arg1;
- (void)setAneVersion:(id)arg1;
- (void)setCarrierBundleIdentifier:(id)arg1;
- (void)setCarrierCountryIsoCode:(id)arg1;
- (void)setEnabledInputModeIdentifiers:(id)arg1;
- (void)setHasAne:(bool)arg1;
- (void)setIsAutomatedTestDevice:(bool)arg1;
- (void)setIsDiagnosticsAndUsageEnabled:(bool)arg1;
- (void)setIsEnrolledInBetaProgram:(bool)arg1;
- (void)setLogUserKeyboardEnabledInputMode:(bool)arg1;
- (void)setLogUserSettingsLanguageCode:(bool)arg1;
- (void)setLogUserSettingsRegionCode:(bool)arg1;

@end
