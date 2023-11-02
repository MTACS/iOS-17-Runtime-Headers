
@interface VKSharedResources : NSObject {
    struct unique_ptr<ggl::AlphaAtlas, std::default_delete<ggl::AlphaAtlas>> { 
        struct __compressed_pair<ggl::AlphaAtlas *, std::default_delete<ggl::AlphaAtlas>> { 
            struct AlphaAtlas {} *__value_; 
        } __ptr_; 
    }  _alphaAtlas;
    struct shared_ptr<md::DataOverrideManager> { 
        struct DataOverrideManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataOverrideManager;
    struct CMPhotoDecompressionSession { } * _defaultDecompressionSession;
    struct unique_ptr<md::Device, std::default_delete<md::Device>> { 
        struct __compressed_pair<md::Device *, std::default_delete<md::Device>> { 
            struct Device {} *__value_; 
        } __ptr_; 
    }  _device;
    struct unique_ptr<ggl::DistanceAtlas, std::default_delete<ggl::DistanceAtlas>> { 
        struct __compressed_pair<ggl::DistanceAtlas *, std::default_delete<ggl::DistanceAtlas>> { 
            struct DistanceAtlas {} *__value_; 
        } __ptr_; 
    }  _distanceAtlas;
    struct read_write_lock { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } _lock; 
    }  _figCreationLock;
    struct atomic<unsigned long> { 
        struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { 
            _Atomic unsigned long long __a_value; 
        } __a_; 
    }  _globalFrameStamp;
    struct shared_ptr<grl::FontManager> { 
        struct FontManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _grlFontManager;
    struct shared_ptr<grl::IconManager> { 
        struct IconManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _grlIconManager;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> { 
        struct __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>> { 
            struct IsoAlphaAtlas {} *__value_; 
        } __ptr_; 
    }  _highInflationAlphaAtlas;
    struct _retain_ptr<VKInternalIconManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKInternalIconManager *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _iconManager;
    struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> { 
        struct __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>> { 
            struct IsoAlphaAtlas {} *__value_; 
        } __ptr_; 
    }  _isoAlphaAtlas;
    struct shared_ptr<md::MaterialTextureManager> { 
        struct MaterialTextureManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _materialTextureManager;
    struct shared_ptr<md::RealisticCommandBufferSelector> { 
        struct RealisticCommandBufferSelector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _realisticCommandBufferSelector;
    unsigned int  _referenceCount;
    struct _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKResourceManager *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _resourceManager;
    struct shared_ptr<md::GeoResourceProvider> { 
        struct GeoResourceProvider {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _resourceProvider;
    struct shared_ptr<ggl::StandardLibrary> { 
        struct StandardLibrary {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _shaderLibrary;
    struct unique_ptr<md::SharedResourcesManager, std::default_delete<md::SharedResourcesManager>> { 
        struct __compressed_pair<md::SharedResourcesManager *, std::default_delete<md::SharedResourcesManager>> { 
            struct SharedResourcesManager {} *__value_; 
        } __ptr_; 
    }  _sharedResourceManager;
    bool  _snapshotterIsInService;
    struct shared_ptr<md::StandardCommandBufferSelector> { 
        struct StandardCommandBufferSelector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _standardCommandBufferSelector;
    struct shared_ptr<md::StylesheetVendor> { 
        struct StylesheetVendor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stylesheetVendor;
    struct shared_ptr<md::TextureManager> { 
        struct TextureManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _textureManager;
}

@property (nonatomic, readonly) void*alphaAtlas;
@property (nonatomic, readonly) struct CMPhotoDecompressionSession { }*defaultDecompressionSession;
@property (nonatomic, readonly) void*device;
@property (nonatomic, readonly) void*distanceAtlas;
@property (nonatomic, readonly) void*gglDevice;
@property (nonatomic, readonly) unsigned long long globalFrameStamp;
@property (nonatomic, readonly) struct shared_ptr<grl::FontManager> { struct FontManager {} *x1; struct __shared_weak_count {} *x2; } grlFontManager;
@property (nonatomic, readonly) void*grlIconManager;
@property (nonatomic, readonly) void*highInflationAlphaAtlas;
@property (nonatomic, readonly) VKInternalIconManager *iconManager;
@property (nonatomic, readonly) void*isoAlphaAtlas;
@property (nonatomic, readonly) struct shared_ptr<md::MaterialTextureManager> { struct MaterialTextureManager {} *x1; struct __shared_weak_count {} *x2; } materialTextureManager;
@property (nonatomic, readonly) struct shared_ptr<md::RealisticCommandBufferSelector> { struct RealisticCommandBufferSelector {} *x1; struct __shared_weak_count {} *x2; } realisticCommandBufferSelector;
@property (nonatomic, readonly) VKResourceManager *resourceManager;
@property (nonatomic, readonly) const void*shaderLibrary;
@property (nonatomic) bool snapshotterIsInService;
@property (nonatomic, readonly) struct shared_ptr<md::StandardCommandBufferSelector> { struct StandardCommandBufferSelector {} *x1; struct __shared_weak_count {} *x2; } standardCommandBufferSelector;
@property (nonatomic, readonly) struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; } stylesheetVendor;
@property (nonatomic, readonly) struct shared_ptr<md::TextureManager> { struct TextureManager {} *x1; struct __shared_weak_count {} *x2; } textureManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addResourceUser;
- (bool)_hasResourceUsers;
- (id)_initWithDevice:(void*)arg1 standardLibrary:(const void*)arg2;
- (void)_removeResourceUser;
- (void*)alphaAtlas;
- (const void*)dataOverrideManager;
- (void)dealloc;
- (struct CMPhotoDecompressionSession { }*)defaultDecompressionSession;
- (void*)device;
- (void*)distanceAtlas;
- (void)frameDidComplete:(unsigned long long)arg1;
- (void*)gglDevice;
- (unsigned long long)globalFrameStamp;
- (void*)grlFontManager;
- (void*)grlIconManager;
- (void*)highInflationAlphaAtlas;
- (id)iconManager;
- (void*)isoAlphaAtlas;
- (struct shared_ptr<md::MaterialTextureManager> { struct MaterialTextureManager {} *x1; struct __shared_weak_count {} *x2; })materialTextureManager;
- (void)prune:(unsigned char)arg1;
- (void)purgeDecompressSessionCachedBuffers;
- (struct shared_ptr<md::RealisticCommandBufferSelector> { struct RealisticCommandBufferSelector {} *x1; struct __shared_weak_count {} *x2; })realisticCommandBufferSelector;
- (id)resourceManager;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setSnapshotterIsInService:(bool)arg1;
- (const void*)shaderLibrary;
- (bool)snapshotterIsInService;
- (struct shared_ptr<md::StandardCommandBufferSelector> { struct StandardCommandBufferSelector {} *x1; struct __shared_weak_count {} *x2; })standardCommandBufferSelector;
- (void)startDecompressionSession;
- (struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; })stylesheetVendor;
- (struct shared_ptr<md::TextureManager> { struct TextureManager {} *x1; struct __shared_weak_count {} *x2; })textureManager;

@end
