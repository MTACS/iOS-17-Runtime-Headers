
@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy {
    NSString * _language;
}

@property (nonatomic, retain) NSString *language;

+ (id)characterVoiceAssetPolicyWithLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)assetType;
- (id)assetsToPurgeFromInstalledAssets:(id)arg1;
- (id)downloadOptionsForOperation:(unsigned long long)arg1 userInitiated:(bool)arg2;
- (id)init;
- (id)language;
- (void)setLanguage:(id)arg1;
- (bool)shouldDownloadAsset:(id)arg1 withInstalledAssets:(id)arg2;

@end
