
@interface DRSSystemProfile : NSObject {
    bool  _allowsBuildVariantOverride;
    bool  _allowsCustomerAnalyticsOverride;
    NSString * _build;
    NSString * _deviceCategory;
    unsigned long long  _deviceHash;
    NSString * _deviceModel;
    NSData * _deviceSHA256Digest;
    bool  _isCarrierVal;
    bool  _isInternalVal;
    bool  _isSeedVal;
    bool  _overridingCustomerApprovesAnalyticsValue;
    bool  _overridingIsCarrier;
    bool  _overridingIsInternal;
    bool  _overridingIsSeed;
    unsigned char  _platform;
}

@property (nonatomic) bool allowsBuildVariantOverride;
@property (nonatomic) bool allowsCustomerAnalyticsOverride;
@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) NSString *buildVariant;
@property (nonatomic, readonly) bool customerApprovesAnalytics;
@property (nonatomic, readonly) NSString *deviceCategory;
@property (nonatomic, readonly) unsigned long long deviceHash;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSData *deviceSHA256Digest;
@property (nonatomic, readonly) bool isCarrier;
@property (nonatomic, readonly) bool isCarrierVal;
@property (nonatomic, readonly) bool isInternal;
@property (nonatomic, readonly) bool isInternalVal;
@property (nonatomic, readonly) bool isLogUploadEnabled;
@property (nonatomic, readonly) bool isSeed;
@property (nonatomic, readonly) bool isSeedVal;
@property (nonatomic, readonly) bool isTaskingEnabled;
@property (nonatomic) bool overridingCustomerApprovesAnalyticsValue;
@property (nonatomic) bool overridingIsCarrier;
@property (nonatomic) bool overridingIsInternal;
@property (nonatomic) bool overridingIsSeed;
@property (nonatomic, readonly) unsigned char platform;
@property (nonatomic, readonly) NSString *platformString;
@property (nonatomic, readonly) unsigned long long uploadSessionUploadCapBytes;

+ (id)SHA256DigestForString:(id)arg1;
+ (unsigned long long)hashForSHA256Digest:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_populateBuild;
- (void)_populateBuildVariant;
- (void)_populateCarrier;
- (void)_populateDeviceCategory;
- (void)_populateDeviceHash;
- (void)_populateDeviceModel;
- (void)_populatePlatform;
- (bool)allowsBuildVariantOverride;
- (bool)allowsCustomerAnalyticsOverride;
- (id)build;
- (id)buildVariant;
- (bool)customerApprovesAnalytics;
- (id)deviceCategory;
- (unsigned long long)deviceHash;
- (id)deviceModel;
- (id)deviceSHA256Digest;
- (id)init;
- (bool)isCarrier;
- (bool)isCarrierVal;
- (bool)isInternal;
- (bool)isInternalVal;
- (bool)isLogUploadEnabled;
- (bool)isSeed;
- (bool)isSeedVal;
- (bool)isTaskingEnabled;
- (bool)overridingCustomerApprovesAnalyticsValue;
- (bool)overridingIsCarrier;
- (bool)overridingIsInternal;
- (bool)overridingIsSeed;
- (unsigned char)platform;
- (id)platformString;
- (void)setAllowsBuildVariantOverride:(bool)arg1;
- (void)setAllowsCustomerAnalyticsOverride:(bool)arg1;
- (void)setOverridingCustomerApprovesAnalyticsValue:(bool)arg1;
- (void)setOverridingIsCarrier:(bool)arg1;
- (void)setOverridingIsInternal:(bool)arg1;
- (void)setOverridingIsSeed:(bool)arg1;
- (unsigned long long)uploadSessionUploadCapBytes;

@end
