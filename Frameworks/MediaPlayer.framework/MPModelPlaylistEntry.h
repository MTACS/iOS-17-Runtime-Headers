
@interface MPModelPlaylistEntry : MPModelObject

@property (nonatomic, retain) MPArtworkCatalog *_artworkCatalog;
@property (nonatomic, readonly) MPModelObject *innermostModelObject;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (nonatomic, readonly) NSString *positionUniversalIdentifier;
@property (nonatomic, retain) MPModelSocialPerson *socialContributor;
@property (nonatomic, retain) MPModelSong *song;
@property (nonatomic, retain) MPModelTVEpisode *tvEpisode;
@property (nonatomic, retain) NSString *universalIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyPlaylistEntryPositionUniversalIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistEntryPosition__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaylistEntryUniversalIdentifier__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryMovie__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntrySocialContributor__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntrySong__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlaylistEntryTVEpisode__MAPPING_MISSING__;
+ (void)___MPModelPropertyPlaylistEntryArtwork__MAPPING_MISSING__;
+ (id)___artworkCatalog_KEY;
+ (id)__movie_KEY;
+ (id)__playlist_KEY;
+ (id)__positionUniversalIdentifier_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)__song_KEY;
+ (id)__tvEpisode_KEY;
+ (id)__universalIdentifier_KEY;
+ (long long)genericObjectType;
+ (id)kindWithKinds:(id)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (id)anyObject;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)msp_shortDescription;

// Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI

- (id)innermostModelObject;

@end
