
@interface MPModelTVSeason : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSDate *downloadedDate;
@property (nonatomic) long long episodesCount;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long number;
@property (nonatomic, retain) MPModelTVEpisode *representativeEpisode;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic) long long sortType;
@property (nonatomic) long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyTVSeasonArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonDownloadedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonEpisodesCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonHasCleanContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonHasExplicitContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAddEligible__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonNumber__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonSortType__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonYear__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVSeasonRepresentativeEpisode__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVSeasonShow__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__episodesCount_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__number_KEY;
+ (id)__representativeEpisode_KEY;
+ (id)__show_KEY;
+ (id)__sortType_KEY;
+ (id)__year_KEY;
+ (long long)genericObjectType;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsLibraryAddStatusObservation;

- (id)artworkCatalog;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;

@end
