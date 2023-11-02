
@interface MusicKit_SoftLinking_MPModelRequest : NSObject {
    MPModelRequest * _underlyingRequest;
}

@property (nonatomic, readonly) MPModelRequest *_underlyingRequest;

+ (id)_albumSupportedProperties;
+ (id)_albumSupportedPropertiesForPlayback;
+ (id)_artistSupportedProperties;
+ (id)_composerSupportedProperties;
+ (id)_genreSupportedProperties;
+ (id)_localFileAssetSupportedProperties;
+ (id)_movieSupportedProperties;
+ (id)_movieSupportedPropertiesForPlayback;
+ (id)_playbackItemSupportedProperties;
+ (id)_playbackPositionSupportedProperties;
+ (id)_playbackSectionSupportedProperties;
+ (id)_playlistEntrySupportedProperties;
+ (id)_playlistEntrySupportedPropertiesForPlayback;
+ (id)_playlistSupportedProperties;
+ (id)_playlistSupportedPropertiesForPlayback;
+ (id)_propertySetForRawProperties:(id)arg1 relationships:(id)arg2;
+ (id)_radioStationSupportedPropertiesForPlayback;
+ (id)_recentlyAddedObjectSupportedProperties;
+ (id)_socialPersonSupportedProperties;
+ (id)_songSupportedProperties;
+ (id)_songSupportedPropertiesForPlayback;
+ (id)_storeAssetSupportedProperties;
+ (id)_supportedPropertiesForModelObjectType:(long long)arg1;
+ (id)_tvEpisodeSupportedProperties;
+ (id)_tvEpisodeSupportedPropertiesForPlayback;
+ (id)_tvSeasonSupportedProperties;
+ (id)_tvSeasonSupportedPropertiesForPlayback;
+ (id)_tvShowSupportedProperties;
+ (id)defaultUnpersonalizedRequest;

- (void).cxx_destruct;
- (id)_initWithUnderlyingRequest:(id)arg1;
- (id)_underlyingRequest;

@end
