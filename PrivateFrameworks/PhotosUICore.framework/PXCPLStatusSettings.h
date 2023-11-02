
@interface PXCPLStatusSettings : PXSettings {
    bool  _cloudQuotaOfferIncludeAssetCounts;
    long long  _cloudQuotaOfferLevel;
    NSNumber * _resumeOverrideHours;
    NSNumber * _shouldHideMockStatusWarning;
}

@property (nonatomic) bool cloudQuotaOfferIncludeAssetCounts;
@property (nonatomic) long long cloudQuotaOfferLevel;
@property (nonatomic, retain) NSNumber *resumeOverrideHours;
@property (nonatomic, retain) NSNumber *shouldHideMockStatusWarning;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)cloudQuotaOfferIncludeAssetCounts;
- (long long)cloudQuotaOfferLevel;
- (id)parentSettings;
- (id)resumeOverrideHours;
- (void)setCloudQuotaOfferIncludeAssetCounts:(bool)arg1;
- (void)setCloudQuotaOfferLevel:(long long)arg1;
- (void)setDefaultValues;
- (void)setResumeOverrideHours:(id)arg1;
- (void)setShouldHideMockStatusWarning:(id)arg1;
- (id)shouldHideMockStatusWarning;

@end
