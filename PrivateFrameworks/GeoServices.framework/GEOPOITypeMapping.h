
@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver> {
    geo_isolater * _accessLock;
    NSSet * _alwaysVisibleTypes;
    NSDictionary * _categoryToTypeMapping;
    GEOResourceManifestManager * _manifestManager;
    GEOResourceManager * _resourceManager;
    NSDictionary * _typeToCategoryMapping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMapping;

- (void).cxx_destruct;
- (void)_tearDown;
- (id)alwaysVisibleTypes;
- (id)categoryForPOIType:(int)arg1;
- (id)categoryToTypeMapping;
- (void)clearCachedValues;
- (void)dealloc;
- (id)init;
- (id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2;
- (bool)isAlwaysVisiblePOIType:(int)arg1;
- (void)loadPOICategoriesJSON;
- (bool)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(id*)arg2 POITypeToCategory:(id*)arg3;
- (void)parsePOICategoriesJSON:(id)arg1;
- (id)parseVisiblePOITypesJSON:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)typeToCategoryMapping;
- (id)typesForPOICategories:(id)arg1;

@end
