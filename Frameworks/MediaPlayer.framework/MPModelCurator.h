
@interface MPModelCurator : MPModelPerson

@property (nonatomic, copy) id /* block */ brandLogoArtworkCatalogBlock;
@property (nonatomic) long long curatorKind;
@property (nonatomic) long long curatorSubKind;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSString *shortName;

+ (void)__MPModelPropertyCuratorBrandLogoArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorHandle__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorKind__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorShortEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorShortName__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorSubKind__MAPPING_MISSING__;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__curatorKind_KEY;
+ (id)__curatorSubKind_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__handle_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortName_KEY;
+ (long long)genericObjectType;

- (id)brandLogoArtworkCatalog;
- (id)editorialArtworkCatalog;

@end
