
@interface UIImageAsset : NSObject <NSSecureCoding> {
    struct { 
        unsigned int hasRegisteredImages : 1; 
        unsigned int supportsBlockGeneration : 1; 
    }  _assetFlags;
    _UIAssetManager * _assetManager;
    NSString * _assetName;
    NSBundle * _containingBundle;
    id /* block */  _creationBlock;
    UITraitCollection * _defaultTraitCollection;
    CUINamedLayerStack * _layerStack;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _rebuildStackImage;
    id  _unpinObserver;
}

@property _UIAssetManager *_assetManager;
@property (nonatomic, readonly) UITraitCollection *_defaultTraitCollection;
@property (setter=_setLayerStack:, nonatomic, retain) CUINamedLayerStack *_layerStack;
@property (setter=_setRebuildStackImage:, nonatomic, copy) id /* block */ _rebuildStackImage;
@property (setter=_setUnpinObserver:, nonatomic) id _unpinObserver;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, copy) id /* block */ creationBlock;

+ (id)_dynamicAssetNamed:(id)arg1 generator:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_assetManager;
- (void)_cacheRendition:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 tintColor:(id)arg3 traitCollection:(id)arg4 bold:(bool)arg5 letterpress:(bool)arg6 drawMode:(unsigned int)arg7;
- (id)_cachedRenditionWithSize:(struct CGSize { double x1; double x2; })arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(bool)arg4 letterpress:(bool)arg5 drawMode:(unsigned int)arg6;
- (void)_clearResolvedImageResources;
- (bool)_containsImagesInPath:(id)arg1;
- (id)_defaultTraitCollection;
- (void)_disconnectFromAssetManager;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_layerStack;
- (id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
- (id /* block */)_rebuildStackImage;
- (void)_registerImage:(id)arg1 withConfiguration:(id)arg2;
- (id)_renditionCache:(bool)arg1;
- (void)_setLayerStack:(id)arg1;
- (void)_setRebuildStackImage:(id /* block */)arg1;
- (void)_setUnpinObserver:(id)arg1;
- (id)_symbolConfiguration;
- (id)_unpinObserver;
- (void)_unregisterImageWithDescription:(id)arg1;
- (id)_unsafe_mutableCatalog;
- (void)_unsafe_registerImage:(id)arg1 withConfiguration:(id)arg2;
- (id)_withLock_imageWithConfiguration:(id)arg1;
- (id)_withLock_lookUpRegisteredObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(id /* block */)arg2;
- (id)_withLock_mutableCatalog;
- (void)_withLock_registerImage:(id)arg1 withConfiguration:(id)arg2;
- (id)_withLock_registeredAppearanceNames;
- (void)_withLock_unregisterImageWithDescription:(id)arg1;
- (id)_withLock_updateAssetFromBlockGenerationWithConfiguration:(id)arg1 resolvedCatalogImage:(id)arg2;
- (id)assetName;
- (id /* block */)creationBlock;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageWithConfiguration:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)registerImage:(id)arg1 withConfiguration:(id)arg2;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)setAssetName:(id)arg1;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)set_assetManager:(id)arg1;
- (void)unregisterImageWithConfiguration:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;

@end
