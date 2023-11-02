
@interface ATAirlock : NSObject {
    NSString * _basePath;
    NSFileManager * _fm;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2;
- (void)copyAssetToAirlock:(id)arg1;
- (void)createAirlockForDataclasses:(id)arg1;
- (void)evacuate;
- (void)evacuateDataclasses:(id)arg1;
- (id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2;
- (id)init;
- (id)lyricsPathForDataclass:(id)arg1 lyricsIdentifier:(id)arg2;
- (id)pathForAsset:(id)arg1 withDataclass:(id)arg2;
- (id)pathForDataclass:(id)arg1;
- (void)processCompletedAsset:(id)arg1;
- (void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2;

@end
