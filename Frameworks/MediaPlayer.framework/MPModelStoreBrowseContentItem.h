
@interface MPModelStoreBrowseContentItem : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSString *artistUploadedContentType;
@property (nonatomic, retain) MPModelCreditsArtist *creditsArtist;
@property (nonatomic, retain) MPModelCurator *curator;
@property (nonatomic) long long detailedItemType;
@property (nonatomic, retain) MPModelTVEpisode *episode;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, retain) MPModelMediaClip *mediaClip;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, retain) MPModelRecordLabel *recordLabel;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelTVShowCreator *showCreator;
@property (nonatomic, retain) MPModelSocialPerson *socialPerson;
@property (nonatomic, retain) MPModelSong *song;

+ (void)__MPModelStoreBrowseContentItemPropertyArtistUploadedContentType__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemPropertyDetailedItemType__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemPropertyItemType__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipAlbum__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipArtist__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipCreditsArtist__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipCurator__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipMediaClip__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipMovie__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipPlaylist__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipRadioStation__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipRecordLabel__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipSocialPerson__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipSong__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVEpisode__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVSeason__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVShowCreator__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVShow__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (id)__artistUploadedContentType_KEY;
+ (id)__artist_KEY;
+ (id)__creditsArtist_KEY;
+ (id)__curator_KEY;
+ (id)__detailedItemType_KEY;
+ (id)__episode_KEY;
+ (id)__itemType_KEY;
+ (id)__mediaClip_KEY;
+ (id)__movie_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;
+ (id)__recordLabel_KEY;
+ (id)__season_KEY;
+ (id)__showCreator_KEY;
+ (id)__show_KEY;
+ (id)__socialPerson_KEY;
+ (id)__song_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)innerObject;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
