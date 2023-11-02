
@interface VKInternalIconManager : NSObject {
    struct shared_ptr<grl::FontManager> { 
        struct FontManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fontManager;
    struct shared_ptr<grl::IconManager> { 
        struct IconManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _iconManager;
    bool  _isSharedIconManager;
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKManifestTileGroupObserverProxy *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _manifestTileGroupObserverProxy;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> { 
        struct __tree<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison>, geo::StdAllocator<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
                struct StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _nameToStyleManager;
    struct read_write_lock { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } _lock; 
    }  _nameToStyleManagerLock;
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
    struct shared_ptr<md::StylesheetVendor> { 
        struct StylesheetVendor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stylesheetVendor;
}

+ (long long)convertGrlSizeGroup:(unsigned char)arg1;
+ (unsigned char)convertSizeGroup:(long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_purgeStyleManagers;
- (void)_startTileGroupObserver;
- (unsigned int)darkVariant;
- (void)dealloc;
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForIconID:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForImageSourceKey:(id)arg1;
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForStyleAttributes:(id)arg1 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x1; struct __shared_weak_count {} *x2; })arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)init;
- (id)init:(struct shared_ptr<grl::IconManager> { struct IconManager {} *x1; struct __shared_weak_count {} *x2; })arg1 stylesheetVendor:(struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (bool)isCachingAtlases;
- (void)purge;
- (void)purgeNonsharedResources;
- (void)setIsCachingAtlases:(bool)arg1;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)trafficIncidentTypeKey;

@end
