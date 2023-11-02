
@interface MPModelForYouRecommendationItem : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (getter=isBackedByStoreItemMetadata, nonatomic) bool backedByStoreItemMetadata;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) MPModelForYouRecommendationGroup *parentGroup;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, readonly) MPModelForYouRecommendationGroup *subgroup;
@property (nonatomic) long long subgroupIndex;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *utterance;

+ (void)__MPModelForYouRecommendationItemPropertyBackedByStoreItemMetadata__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemPropertyItemType__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemPropertyParentGroup__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemPropertyReason__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemPropertySubgroupIndex__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemPropertyURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemPropertyUtterance__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemRelationshipAlbum__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemRelationshipPlaylist__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationItemRelationshipRadioStation__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (id)__backedByStoreItemMetadata_KEY;
+ (id)__itemType_KEY;
+ (id)__parentGroup_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;
+ (id)__reason_KEY;
+ (id)__subgroupIndex_KEY;
+ (id)__url_KEY;
+ (id)__utterance_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)subgroup;

@end
