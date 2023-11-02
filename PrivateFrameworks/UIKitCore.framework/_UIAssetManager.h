
@interface _UIAssetManager : NSObject {
    struct { 
        unsigned int isStarkAssetManager : 1; 
        unsigned int isStandaloneAssetManager : 1; 
        unsigned int isUIKitAssetsManager : 1; 
        unsigned int isCoreGlyphsManager : 1; 
        unsigned int isPrivateCoreGlyphsManager : 1; 
    }  _assetManagerFlags;
    NSString * _assetManagerName;
    NSMapTable * _assetMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assetMapLock;
    NSBundle * _bundle;
    CUICatalog * _catalog;
    _UICache * _imageCache;
    _UIAssetManager * _nextAssetManager;
    long long  _preferredGamut;
    long long  _preferredIdiom;
    unsigned long long  _preferredIdiomSubtype;
    long long  _preferredLayoutDirectionTrait;
    double  _preferredScale;
    UITraitCollection * _preferredTraitCollection;
    CUIMutableCatalog * _runtimeCatalog;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _runtimeCatalogCreationLock;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *carFileName;
@property (getter=_managingCoreGlyphs, nonatomic, readonly) bool managingCoreGlyphs;
@property (getter=_managingUIKitAssets, nonatomic, readonly) bool managingUIKitAssets;
@property (nonatomic, retain) _UIAssetManager *nextAssetManager;
@property (nonatomic) double preferredScale;
@property (nonatomic, retain) UITraitCollection *preferredTraitCollection;
@property (nonatomic, readonly) CUIMutableCatalog *runtimeCatalog;

+ (id)_assetManagerCache;
+ (void)_clearAllCachedImagesAndAssets;
+ (void)_dropResourceReferencesForURL:(id)arg1;
+ (void)_executeUnitTestWithAssetManagerCache:(id /* block */)arg1;
+ (void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(bool)arg3;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2;
+ (id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2;
+ (long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)arg1;
+ (double)_watchScreenScale;
+ (id)assetManagerForBundle:(id)arg1;
+ (void)clearSharedRuntimeAssetMapForUnitTests;
+ (id)newAssetNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)sharedRuntimeAssetMap;
+ (id)sharedRuntimeCatalog;

- (id)_allImageNames;
- (id)_appearanceNames;
- (id)_assetForName:(id)arg1;
- (id)_assetFromMapForName:(id)arg1;
- (id)_assetFromMapForName:(id)arg1 lock:(bool)arg2;
- (id)_catalog;
- (void)_clearCachedResources;
- (void)_clearCachedResources:(id)arg1;
- (id)_defaultAppearanceNames;
- (void)_disconnectImageAssets;
- (bool)_hasMultipleAppearances;
- (bool)_imageBelongsToCoreGlyphs:(id)arg1;
- (bool)_imageBelongsToUIKit:(id)arg1;
- (bool)_imageIsSystemImage:(id)arg1;
- (id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 lock:(bool)arg4 allowMissingCatalog:(bool)arg5;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2;
- (id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(bool)arg3;
- (bool)_isSystemAssetManager;
- (id)_lookUpObjectForTraitCollection:(id)arg1 objectAccessor:(id /* block */)arg2;
- (bool)_managingCoreGlyphs;
- (bool)_managingUIKitAssets;
- (void)_performBlockWithAssetLock:(id /* block */)arg1;
- (id)_performLookUpObjectForTraitCollection:(id)arg1 outNamedLookup:(id*)arg2 objectAccessor:(id /* block */)arg3;
- (id)_starkAssetManager;
- (id)_translateAppearanceNameToNative:(id)arg1;
- (id)bundle;
- (id)carFileName;
- (id)colorNamed:(id)arg1 withTraitCollection:(id)arg2;
- (id)dataNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)disableCacheFlushing;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 configuration:(id)arg2;
- (id)imageNamed:(id)arg1 configuration:(id)arg2 cachingOptions:(unsigned long long)arg3 attachCatalogImage:(bool)arg4;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2;
- (id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3;
- (id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4;
- (id)imageNamed:(id)arg1 withTrait:(id)arg2;
- (id)initManagerWithoutCatalogWithName:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3;
- (id)initWithURL:(id)arg1 idiom:(long long)arg2 error:(id*)arg3;
- (id)nextAssetManager;
- (double)preferredScale;
- (id)preferredTraitCollection;
- (id)resolvedColorNamed:(id)arg1 withTraitCollection:(id)arg2;
- (id)runtimeCatalog;
- (void)setNextAssetManager:(id)arg1;
- (void)setPreferredScale:(double)arg1;
- (void)setPreferredTraitCollection:(id)arg1;

@end
