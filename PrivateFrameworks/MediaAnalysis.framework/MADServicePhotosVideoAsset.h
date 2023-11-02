
@interface MADServicePhotosVideoAsset : MADServiceVideoAsset {
    PHAsset * _photosAsset;
    NSArray * _resources;
}

- (void).cxx_destruct;
- (id)animatedStickerScore;
- (unsigned long long)assetType;
- (id)identifier;
- (id)initWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;
- (id)isSensitive;
- (id)resources;
- (id)scoresForLabels;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimTimeRange;
- (id)url;

@end
