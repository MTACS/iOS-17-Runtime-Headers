
@interface BUCellularSettings : NSObject {
    NSString * _defaultsKey;
}

@property (nonatomic) bool allowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;
@property (nonatomic, readonly) bool legacyAllowAutomaticDownloads;

+ (id)_copyValueForCarrierBundleKey:(id)arg1;
+ (id)settingsForIdentity:(id)arg1;
+ (bool)shouldShowCellularAutomaticDownloadsSwitch;

- (void).cxx_destruct;
- (id)_cellularSettings;
- (bool)allowAutomaticDownloads;
- (long long)cellularDataPrompt;
- (id)initWithDefaultsKey:(id)arg1;
- (bool)legacyAllowAutomaticDownloads;
- (void)setAllowAutomaticDownloads:(bool)arg1;
- (void)setCellularDataPrompt:(long long)arg1;

@end
