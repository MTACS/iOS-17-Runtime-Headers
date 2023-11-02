
@interface MPCPlaybackIntent : NSObject {
    long long  _actionAfterQueueLoad;
    NSDictionary * _endTimeModifications;
    NSString * _playActivityFeatureName;
    NSData * _playActivityRecommendationData;
    bool  _prefersEnqueuingUsingAirPlay;
    NSNumber * _privateListeningOverride;
    NSString * _queueGroupingID;
    long long  _repeatMode;
    <MPCPlaybackIntentDataSource> * _resolvedTracklistDataSource;
    long long  _shuffleMode;
    NSString * _siriAssetInfo;
    NSString * _siriReferenceIdentifier;
    NSDictionary * _startTimeModifications;
    long long  _tracklistSource;
    <NSSecureCoding> * _tracklistToken;
}

@property (nonatomic) long long actionAfterQueueLoad;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic) bool prefersEnqueuingUsingAirPlay;
@property (nonatomic, copy) NSNumber *privateListeningOverride;
@property (nonatomic, copy) NSString *queueGroupingID;
@property (nonatomic) long long repeatMode;
@property (nonatomic, readonly) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (nonatomic) long long shuffleMode;
@property (nonatomic, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, copy) NSDictionary *startTimeModifications;
@property (nonatomic, readonly) <MPCPlaybackIntentDataSource> *tracklistDataSource;
@property (nonatomic) long long tracklistSource;
@property (nonatomic, retain) <NSSecureCoding> *tracklistToken;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (void)buildSharedSessionIntentWithIntent:(id)arg1 identity:(id)arg2 extendedStatusCompletion:(id /* block */)arg3;
+ (id)continueListeningRadioPlaybackIntent;
+ (id)intentFromModelRequest:(id)arg1;
+ (id)intentFromQueueDescriptor:(id)arg1;
+ (id)radioPlaybackIntentFromAlbum:(id)arg1;
+ (id)radioPlaybackIntentFromArtist:(id)arg1;
+ (id)radioPlaybackIntentFromReference:(id)arg1;
+ (id)radioPlaybackIntentFromSong:(id)arg1;
+ (id)radioPlaybackIntentWithStation:(id)arg1;
+ (id)radioPlaybackIntentWithStationStringID:(id)arg1;
+ (id)radioPlaybackIntentWithStationURL:(id)arg1;
+ (id)sharedSessionIntentWithProperties:(id)arg1 identity:(id)arg2;
+ (id)tracklistDataSourceForSource:(long long)arg1;

- (void).cxx_destruct;
- (long long)actionAfterQueueLoad;
- (id)description;
- (id)endTimeModifications;
- (void)getArchiveWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)getRemotePlaybackQueueDataWithCompletion:(id /* block */)arg1;
- (void)getRemotePlaybackQueueWithDestination:(long long)arg1 completion:(id /* block */)arg2;
- (void)getRepresentativeObjectWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (bool)prefersEnqueuingUsingAirPlay;
- (id)privateListeningOverride;
- (id)queueGroupingID;
- (long long)repeatMode;
- (void)setActionAfterQueueLoad:(long long)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setPrefersEnqueuingUsingAirPlay:(bool)arg1;
- (void)setPrivateListeningOverride:(id)arg1;
- (void)setQueueGroupingID:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setSiriAssetInfo:(id)arg1;
- (void)setSiriReferenceIdentifier:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (void)setTracklistSource:(long long)arg1;
- (void)setTracklistToken:(id)arg1;
- (id)sharedListeningProperties;
- (long long)shuffleMode;
- (id)siriAssetInfo;
- (id)siriReferenceIdentifier;
- (id)startTimeModifications;
- (id)tracklistDataSource;
- (long long)tracklistSource;
- (id)tracklistToken;

// Image: /System/Library/PrivateFrameworks/_MusicKitInternal_MediaPlaybackCore.framework/_MusicKitInternal_MediaPlaybackCore

- (id)initWithPlaybackIntent:(id)arg1;

@end
