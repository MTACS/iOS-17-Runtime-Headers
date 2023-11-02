
@interface MPModelTVEpisode : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSDate *downloadedDate;
@property (nonatomic) double duration;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long episodeType;
@property (nonatomic, copy) NSString *episodeTypeDisplayName;
@property (nonatomic) long long explicitRating;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) unsigned long long keepLocalConstraints;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic) unsigned long long keepLocalManagedStatusReason;
@property (nonatomic, readonly, copy) NSDate *lastDevicePlaybackDate;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (getter=isMusicShow, nonatomic) bool musicShow;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyTVEpisodeArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeDownloadedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeDuration__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeExplicitRating__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeHasCloudSyncSource__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeKeepLocalConstraints__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeKeepLocalEnableState__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeKeepLocalManagedStatusReason__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeKeepLocalManagedStatus__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeLastDevicePlaybackDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeLibraryAddEligible__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeMusicShow__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeNumber__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeReleaseDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeTitle__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeTypeDisplayName__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVEpisodeType__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVEpisodeLocalFileAsset__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVEpisodePlaybackPosition__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVEpisodeSeason__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVEpisodeShow__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVEpisodeStoreAsset__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeTypeDisplayName_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitRating_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__keepLocalConstraints_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatusReason_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__musicShow_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__releaseDate_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__storeAsset_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (id)artworkCatalog;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;

@end
