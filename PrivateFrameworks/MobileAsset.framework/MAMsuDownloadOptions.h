
@interface MAMsuDownloadOptions : MADownloadOptions {
    bool  _allowSameVersion;
    long long  _delayPeriod;
    NSString * _liveAssetAudienceUUID;
    NSString * _prerequisiteBuildVersion;
    NSString * _prerequisiteProductVersion;
    NSString * _prerequisiteReleaseType;
    bool  _prerequisiteReleaseTypeIsOverridden;
    NSString * _purpose;
    NSString * _requestedProductVersion;
    bool  _supervised;
}

@property (nonatomic) bool allowSameVersion;
@property (nonatomic) long long delayPeriod;
@property (nonatomic, retain) NSString *liveAssetAudienceUUID;
@property (nonatomic, retain) NSString *prerequisiteBuildVersion;
@property (nonatomic, retain) NSString *prerequisiteProductVersion;
@property (nonatomic, retain) NSString *prerequisiteReleaseType;
@property (nonatomic) bool prerequisiteReleaseTypeIsOverridden;
@property (nonatomic, retain) NSString *purpose;
@property (nonatomic, retain) NSString *requestedProductVersion;
@property (nonatomic) bool supervised;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowSameVersion;
- (long long)delayPeriod;
- (id)description;
- (id)encodeAsPlist;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)liveAssetAudienceUUID;
- (id)prerequisiteBuildVersion;
- (id)prerequisiteProductVersion;
- (id)prerequisiteReleaseType;
- (bool)prerequisiteReleaseTypeIsOverridden;
- (id)purpose;
- (id)requestedProductVersion;
- (void)setAllowSameVersion:(bool)arg1;
- (void)setDelayPeriod:(long long)arg1;
- (void)setLiveAssetAudienceUUID:(id)arg1;
- (void)setPrerequisiteBuildVersion:(id)arg1;
- (void)setPrerequisiteProductVersion:(id)arg1;
- (void)setPrerequisiteReleaseType:(id)arg1;
- (void)setPrerequisiteReleaseTypeIsOverridden:(bool)arg1;
- (void)setPurpose:(id)arg1;
- (void)setRequestedProductVersion:(id)arg1;
- (void)setSupervised:(bool)arg1;
- (bool)supervised;

@end
