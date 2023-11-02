
@interface ASDCellularSettings : NSObject {
    NSString * _defaultsKey;
}

@property (nonatomic) bool allowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;

+ (id)settingsForIdentity:(id)arg1;

- (void).cxx_destruct;
- (bool)allowAutomaticDownloads;
- (long long)cellularDataPrompt;
- (id)initWithDefaultsKey:(id)arg1;
- (void)setAllowAutomaticDownloads:(bool)arg1;
- (void)setCellularDataPrompt:(long long)arg1;

@end
