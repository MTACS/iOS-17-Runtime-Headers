
@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject {
    MPCPlaybackIntent * _underlyingPlaybackIntent;
}

@property (setter=setPlayActivityFeatureName:, nonatomic, copy) NSString *playActivityFeatureName;
@property (setter=setPlayActivityRecommendationData:, nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic, readonly) id rawPlaybackIntent;
@property (setter=setRepeatMode:, nonatomic) long long repeatMode;
@property (setter=setShuffleMode:, nonatomic) long long shuffleMode;

+ (id)emptyPlaybackIntent;

- (void).cxx_destruct;
- (id)_underlyingPlaybackIntent;
- (id)init;
- (id)initWithLegacyLibraryRequest:(id)arg1 allowedIdentifiers:(id)arg2 startIdentifierSet:(id)arg3 onlyLibraryContent:(bool)arg4;
- (id)initWithLegacyModelStationSeeding:(id)arg1;
- (id)initWithStationSeedingIdentifierSet:(id)arg1;
- (id)initWithStoreIDs:(id)arg1 startIdentifierSet:(id)arg2;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (id)rawPlaybackIntent;
- (long long)repeatMode;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (long long)shuffleMode;

@end
