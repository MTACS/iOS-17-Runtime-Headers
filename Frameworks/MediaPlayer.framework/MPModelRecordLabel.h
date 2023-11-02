
@interface MPModelRecordLabel : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *shortDescriptionText;

+ (void)__MPModelPropertyRecordLabelArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelName__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelShortDescriptionText__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__name_KEY;
+ (id)__shortDescriptionText_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
