
@interface AltTileFetcher : NSObject {
    struct _retain_ptr<GEOApplicationAuditToken *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        GEOApplicationAuditToken *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _auditToken;
    GEOTileLoader * _geoTileLoader;
    struct unordered_map<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::allocator<std::pair<const _GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> { 
        struct __hash_table<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc>, std::allocator<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _keyToJobMap;
    struct Mutex { 
        void *mMutex; 
    }  _mutex;
    unsigned int  _numDownloads;
    NSString * _tileLoaderClientIdentifier;
    struct _retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        GEOVectorTileDecoder *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _vectorTileDecoder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelJob:(void*)arg1;
- (void)cancelRequests;
- (void)fetchDataForJob:(void*)arg1;
- (struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; })getJobForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (id)initWithToken:(id)arg1;
- (void)purgeExpired:(double)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1;
- (void)updateJobPriority:(void*)arg1;

@end
