
@interface FMSong : NSObject {
    NSObject<FlexSongProtocol> * _backend;
}

@property (nonatomic, readonly) NSNumber *arousal;
@property (nonatomic, readonly) NSString *audioEncoderPresetName;
@property (readonly) NSObject<FlexSongProtocol> *backend;
@property (nonatomic, readonly) bool canPlay;
@property (nonatomic, readonly) long long metadataVersion;
@property (nonatomic, readonly) bool recalled;
@property (nonatomic, readonly) long long sampleRate;
@property (nonatomic, readonly) NSString *songFormat;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) NSNumber *valence;
@property (nonatomic, readonly) NSDictionary *weightedKeywords;

// Image: /System/Library/PrivateFrameworks/FlexMusicKit.framework/FlexMusicKit

+ (id)availableTagIDs;
+ (bool)hasValidTagIDs:(id)arg1;
+ (id)loadSongBundleAtPath:(id)arg1;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)arg1;
+ (id)localizedNameForTagWithID:(id)arg1;
+ (long long)versionFromArtworkFilename:(id)arg1;

- (void).cxx_destruct;
- (id)_impl;
- (bool)_loadFlexSong;
- (void)_loadIfNeeded;
- (void)_notifySongAssetsChanged;
- (id)artistName;
- (id)assetWithID:(id)arg1;
- (id)audioEncoderPresetName;
- (id)backend;
- (bool)canPlay;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)arg1;
- (id)customOptions;
- (id)description;
- (id)existingAssetWithID:(id)arg1;
- (bool)hidden;
- (id)idealDurations;
- (id)initWithBackend:(id)arg1;
- (id)initWithUID:(id)arg1 assets:(id)arg2 metadata:(id)arg3;
- (bool)isLoaded;
- (id)keywords;
- (long long)metadataVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (bool)recalled;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;
- (long long)sampleRate;
- (id)songFormat;
- (id)songName;
- (id)tagIDs;
- (id)uid;
- (id)uid_photos_only;
- (void)updateAsset:(id)arg1 downloadProgress:(double)arg2 error:(id)arg3;
- (void)updateAssets:(id)arg1;
- (void)updateBackend:(id)arg1;
- (id)weightedKeywords;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (id)arousal;
- (id)valence;
- (id)valueForTagPrefix:(id)arg1;

@end
