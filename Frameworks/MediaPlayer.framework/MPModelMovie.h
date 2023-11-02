
@interface MPModelMovie : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSArray *clips;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSDate *downloadedDate;
@property (nonatomic) double duration;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
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
@property (nonatomic, copy) NSDictionary *movieInfoDictionary;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *tagline;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyMovieArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieDownloadedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieDuration__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieExplicitRating__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieHasCloudSyncSource__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieInfoDictionary__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalConstraints__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalEnableState__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalManagedStatusReason__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieKeepLocalManagedStatus__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLastDevicePlaybackDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLibraryAddEligible__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieReleaseDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieTagline__MAPPING_MISSING__;
+ (void)__MPModelPropertyMovieTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMovieClips__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMovieLocalFileAsset__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMoviePlaybackPosition__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMovieStoreAsset__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__clips_KEY;
+ (id)__descriptionText_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__duration_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
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
+ (id)__movieInfoDictionary_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__releaseDate_KEY;
+ (id)__storeAsset_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
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
- (id)editorialArtworkCatalog;
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
