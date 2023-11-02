
@protocol SUAssetMatcher <NSObject>

@required

- (NSString *)assetType;
- (MAAsset *)findMatchFromCandidates:(NSArray *)arg1 error:(id*)arg2;
- (NSDictionary *)matcherInfo;
- (void)modifyMADownloadOptions:(MAMsuDownloadOptions *)arg1;

@end
