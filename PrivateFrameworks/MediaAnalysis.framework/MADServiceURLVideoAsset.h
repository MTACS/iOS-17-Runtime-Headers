
@interface MADServiceURLVideoAsset : MADServiceVideoAsset {
    NSString * _identifier;
    NSURL * _url;
}

- (void).cxx_destruct;
- (unsigned long long)assetType;
- (id)identifier;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTime;
- (id)url;

@end
