
@interface SUDownloadOptions : SUOptionsBase <NSCopying, NSSecureCoding> {
    int  _activeDownloadPolicyType;
    bool  _allowUnrestrictedCellularDownload;
    bool  _autoDownload;
    NSString * _clientName;
    SUDescriptor * _descriptor;
    SUDescriptor * _downloadDescriptor;
    int  _downloadFeeAgreementStatus;
    bool  _downloadOnly;
    NSObject<OS_dispatch_queue> * _stateQueue;
    int  _termsAndConditionsAgreementStatus;
}

@property (nonatomic, retain) <SUDownloadPolicy> *activeDownloadPolicy;
@property (nonatomic) int activeDownloadPolicyType;
@property (nonatomic) bool allowUnrestrictedCellularDownload;
@property (getter=isAppOffloadEnabled, nonatomic, readonly) bool appOffloadEnabled;
@property (getter=isAutoDownload, nonatomic) bool autoDownload;
@property (getter=isCacheDeleteSpecialCaseEnabled, nonatomic, readonly) bool cacheDeleteSpecialCaseEnabled;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, readonly, retain) SUDescriptor *descriptor;
@property (nonatomic, retain) SUDescriptor *downloadDescriptor;
@property (nonatomic) int downloadFeeAgreementStatus;
@property (getter=isDownloadOnly, nonatomic) bool downloadOnly;
@property (getter=isEnabledForCellular, nonatomic, readonly) bool enabledForCellular;
@property (getter=isEnabledForCellularRoaming, nonatomic, readonly) bool enabledForCellularRoaming;
@property (getter=isEnabledForExpensiveNetwork, nonatomic, readonly) bool enabledForExpensiveNetwork;
@property (getter=isEnabledForWifi, nonatomic, readonly) bool enabledForWifi;
@property (getter=isEnabledOnBatteryPower, nonatomic, readonly) bool enabledOnBatteryPower;
@property (nonatomic) int termsAndConditionsAgreementStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDownloadPolicy;
- (int)activeDownloadPolicyType;
- (bool)allowCellular;
- (bool)allowExpensiveNetwork;
- (bool)allowUnrestrictedCellularDownload;
- (bool)allowsUnrestrictedCellularDownload;
- (id)clientName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (id)downloadDescriptor;
- (int)downloadFeeAgreementStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithMetadata:(id)arg1 andDescriptor:(id)arg2;
- (bool)isAppOffloadEnabled;
- (bool)isAutoDownload;
- (bool)isCacheDeleteSpecialCaseEnabled;
- (bool)isDownloadOnly;
- (bool)isEnabledForCellular;
- (bool)isEnabledForCellularRoaming;
- (bool)isEnabledForExpensiveNetwork;
- (bool)isEnabledForWifi;
- (bool)isEnabledOnBatteryPower;
- (bool)isEqual:(id)arg1;
- (void)setActiveDownloadPolicy:(id)arg1;
- (void)setActiveDownloadPolicyType:(int)arg1;
- (void)setAllowUnrestrictedCellularDownload:(bool)arg1;
- (void)setAutoDownload:(bool)arg1;
- (void)setClientName:(id)arg1;
- (void)setDownloadDescriptor:(id)arg1;
- (void)setDownloadFeeAgreementStatus:(int)arg1;
- (void)setDownloadOnly:(bool)arg1;
- (void)setTermsAndConditionsAgreementStatus:(int)arg1;
- (int)termsAndConditionsAgreementStatus;

@end
