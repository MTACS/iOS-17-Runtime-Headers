
@interface TDThemeSchema : NSObject {
    CoreThemeDocument * _doc;
}

+ (bool)loadThemeConstantsForEntity:(id)arg1 inContext:(id)arg2;

- (void)_addSchemaPartDefinitionsForStandardElement:(const struct { char *x1; char *x2; bool x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[8]; }*)arg1 withElement:(id)arg2;
- (void)_loadConstantForEntity:(id)arg1 withDescriptor:(const struct _themeconstant { long long x1; char *x2; char *x3; }*)arg2;
- (bool)_renditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isEqualToKeyIgnoringLook:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (void)_sanityCheckColorNamesAndUpdateIfNecessary;
- (void)_sanityCheckEffectRenditionsAndUpdateIfNecessary;
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;
- (void)_sanityCheckMicaRenditionsAndUpdateIfNecessary;
- (void)_sanityCheckObjectsWithEntityName:(id)arg1 globalDescriptor:(void*)arg2 matchIdentifierOnly:(bool)arg3;
- (void)_sanityCheckSchemaAssets;
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const struct { char *x1; char *x2; bool x3; long long x4; struct { char *x_5_1_1; char *x_5_1_2; struct _renditionkeytoken { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_5_1_3[5]; long long x_5_1_4; long long x_5_1_5; struct { char *x_6_2_1; char *x_6_2_2; long long x_6_2_3; unsigned long long x_6_2_4; } x_5_1_6[12]; } x5[8]; }*)arg1 withElement:(id)arg2;
- (void)dealloc;
- (id)initWithThemeDocument:(id)arg1;
- (void)loadBasicThemePart;
- (void)loadColorNames;
- (void)loadColorStatuses;
- (void)loadEffectConstants;
- (void)loadGlyphSizeConstants;
- (void)loadGlyphWeightConstants;
- (void)loadIterationTypes;
- (void)loadMetafontSelectors;
- (void)loadMetafontSizes;
- (void)loadRenditionSubtypes;
- (void)loadRenditionTypes;
- (void)loadSchemaCategories;
- (void)loadSchemaDefinitions;
- (void)loadStandardEffectDefinitions;
- (void)loadTemplateRenderingModeConstants;
- (void)loadTexturePixelFormats;
- (void)loadThemeCompressionTypes;
- (void)loadThemeDeploymentTargets;
- (void)loadThemeDirections;
- (void)loadThemeDisplayGamuts;
- (void)loadThemeDrawingLayers;
- (void)loadThemeElements;
- (void)loadThemeGraphicsFeatureSetClasses;
- (void)loadThemeIdioms;
- (void)loadThemeParts;
- (void)loadThemePresentationStates;
- (void)loadThemeSizes;
- (void)loadThemeStates;
- (void)loadThemeTextureFaces;
- (void)loadThemeTextureInterpretations;
- (void)loadThemeUISizeClasses;
- (void)loadThemeValues;
- (void)loadVectorGlyphRenderingModeConstants;
- (void)resetThemeConstants;
- (void)sanityCheckAndUpdateDocumentIfNecessary;

@end
