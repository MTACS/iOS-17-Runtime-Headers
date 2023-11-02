
@interface MPModelGenericObject : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, retain) MPModelComposer *composer;
@property (nonatomic, retain) MPModelCreditsArtist *creditsArtist;
@property (nonatomic, retain) MPModelCurator *curator;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic, retain) MPModelGroup *group;
@property (nonatomic, readonly) MPModelObject *innermostModelObject;
@property (nonatomic, retain) MPModelMediaClip *mediaClip;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelPlaylistEntry *playlistEntry;
@property (nonatomic, retain) MPModelPodcast *podcast;
@property (nonatomic, retain) MPModelPodcastEpisode *podcastEpisode;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, readonly) MPModelRadioStationEvent *radioStationEvent;
@property (nonatomic, retain) MPModelRecordLabel *recordLabel;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelSocialPerson *socialPerson;
@property (nonatomic, retain) MPModelSong *song;
@property (nonatomic, retain) MPModelTVEpisode *tvEpisode;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelRelationshipGenericAlbum__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericArtist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericComposer__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericCreditsArtist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericCurator__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericGenre__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericGroup__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericMediaClip__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericMovie__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericPlaylistEntry__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericPodcastEpisode__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericPodcast__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericRadioStationEvent__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericRadioStation__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericRecordLabel__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericSocialPerson__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericSong__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericTVEpisode__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericTVSeason__MAPPING_MISSING__;
+ (void)__MPModelRelationshipGenericTVShow__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__composer_KEY;
+ (id)__creditsArtist_KEY;
+ (id)__curator_KEY;
+ (id)__genre_KEY;
+ (id)__group_KEY;
+ (id)__mediaClip_KEY;
+ (id)__movie_KEY;
+ (id)__playlistEntry_KEY;
+ (id)__playlist_KEY;
+ (id)__podcastEpisode_KEY;
+ (id)__podcast_KEY;
+ (id)__radioStationEvent_KEY;
+ (id)__radioStation_KEY;
+ (id)__recordLabel_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__socialPerson_KEY;
+ (id)__song_KEY;
+ (id)__tvEpisode_KEY;
+ (id)genericObjectWithModelObject:(id)arg1;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (id)relationshipKeyForGenericObjectType:(long long)arg1;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)anyObject;
- (id)artworkCatalog;
- (id)copyWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (id)copyWithIdentifiers:(id)arg1 propertySet:(id)arg2;
- (id)flattenedGenericObject;
- (id)humanDescription;
- (id)identifiers;
- (id)mediaItemPropertyValues;
- (id)mergeWithObject:(id)arg1;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;
+ (id)mqf_requiredSectionPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mpc_radioContentReference;
- (id)msp_shortDescription;

// Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI

- (id)innermostModelObject;

@end
