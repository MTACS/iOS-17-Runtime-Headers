
@protocol FlexSongProtocol

@required

- (NSString *)artistName;
- (FMSongAsset *)assetWithID:(NSString *)arg1;
- (NSArray *)assets;
- (NSString *)audioEncoderPresetName;
- (bool)canPlay;
- (NSDictionary *)customOptions;
- (FMSongAsset *)existingAssetWithID:(NSString *)arg1;
- (bool)hidden;
- (NSArray *)idealDurations;
- (bool)isLoaded;
- (NSSet *)keywords;
- (long long)metadataVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (bool)recalled;
- (FMSongRendition *)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(NSDictionary *)arg2 testingContext:(FlexTestingContext *)arg3;
- (long long)sampleRate;
- (NSString *)songFormat;
- (NSString *)songName;
- (NSSet *)tagIDs;
- (NSArray *)timedMetadataItemsWithIdentifier:(NSString *)arg1 forRendition:(FMSongRendition *)arg2;
- (NSString *)uid;
- (void)updateAssets:(NSArray *)arg1;
- (bool)verifyRendition:(FMSongRendition *)arg1 forDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 failureReason:(id*)arg3;
- (NSDictionary *)weightedKeywords;

@end
