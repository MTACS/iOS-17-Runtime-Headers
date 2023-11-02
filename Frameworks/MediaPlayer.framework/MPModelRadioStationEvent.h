
@interface MPModelRadioStationEvent : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSDate *endTime;
@property (nonatomic, copy) id /* block */ heroArtworkCatalogBlock;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic, copy) NSString *title;

+ (void)__MPModelPropertyRadioStationEventArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventEndTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventHeroArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventStartTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventTitle__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__endTime_KEY;
+ (id)__heroArtworkCatalogBlock_KEY;
+ (id)__startTime_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;
- (id)heroArtworkCatalog;

@end
