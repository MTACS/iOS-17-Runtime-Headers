
@interface VKPolygonalItemGroup : NSObject {
    struct FeatureStyleAttributesSet { 
        struct set<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>> { 
            struct __tree<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<FeatureStyleAttributes>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, FeatureStyleAttributesSet::FeatureStyleAttributesCompare> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _set; 
        struct vector<std::shared_ptr<FeatureStyleAttributes>, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::shared_ptr<FeatureStyleAttributes> *, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>> { 
                void *__value_; 
                struct StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __end_cap_; 
        } _array; 
    }  _attributeSets;
    struct Box<float, 3> { 
        struct Matrix<float, 3, 1> { 
            float _e[3]; 
        } _minimum; 
        struct Matrix<float, 3, 1> { 
            float _e[3]; 
        } _maximum; 
    }  _boundingBox;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _centroid;
    float  _contentScale;
    unsigned int  _cullingMask;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
        struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned long long>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _featureIds;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _fillCullingGroups;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::PolygonBase::CompressedVbo> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _vertexDataWrite; 
                struct DataWrite<unsigned short> { 
                    struct BufferMemory { 
                        struct ResourceAccessor {} *_accessor; 
                        struct BufferData {} *_user; 
                        struct Range<unsigned long> { 
                            unsigned long long _min; 
                            unsigned long long _max; 
                        } _range; 
                        int _access; 
                        int _sync; 
                        char *_data; 
                    } _memory; 
                } _indexDataWrite; 
                unsigned char _meshIndex; 
                unsigned short _meshVertexOffset; 
                unsigned int _meshIndexOffset; 
                struct MeshSetStorage {} *_storage; 
                struct unique_ptr<md::MeshSetStorage, std::default_delete<md::MeshSetStorage>> { 
                    struct __compressed_pair<md::MeshSetStorage *, std::default_delete<md::MeshSetStorage>> { 
                        struct MeshSetStorage {} *__value_; 
                    } __ptr_; 
                } _internalStorage; 
                struct shared_ptr<md::MeshSetStorageClient> { 
                    struct MeshSetStorageClient {} *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } _storageClient; 
            } type; 
        } _value; 
    }  _fillMeshInfo;
    struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _fillMeshes;
    struct vector<ggl::Batcher, std::allocator<ggl::Batcher>> { 
        struct Batcher {} *__begin_; 
        struct Batcher {} *__end_; 
        struct __compressed_pair<ggl::Batcher *, std::allocator<ggl::Batcher>> { 
            struct Batcher {} *__value_; 
        } __end_cap_; 
    }  _fillRenderItemBatchers;
    bool  _hasRouteAttributes;
    bool  _isFixedSize;
    struct shared_ptr<md::MeshSetStorage> { 
        struct MeshSetStorage {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _meshStorage;
    struct unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> { 
        struct __hash_table<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>>, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>>, std::allocator<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _polygonEdges;
    struct PolygonRouteAttributes { 
        unsigned int routeSignificance; 
        unsigned char routeProximity; 
        bool hasRouteSignificance; 
    }  _routeAttributes;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _strokeCullingGroups;
    struct vector<ggl::Batcher, std::allocator<ggl::Batcher>> { 
        struct Batcher {} *__begin_; 
        struct Batcher {} *__end_; 
        struct __compressed_pair<ggl::Batcher *, std::allocator<ggl::Batcher>> { 
            struct Batcher {} *__value_; 
        } __end_cap_; 
    }  _strokeRenderItemBatchers;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    struct unordered_map<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, std::allocator<std::pair<const StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>>="__table_"{__hash_table<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>>, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash>, std::allocator<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>="__value_"Q {}  _styleQueries;
    bool  _stylesUpToDate;
    float  _tileZoom;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _venueCullingGroups;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _venueEndCapCullingGroups;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _venueWallHorizontalStrokeCullingGroups;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _venueWallVerticalStrokeCullingGroups;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  centroid; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) unsigned int cullingMask;
@property (nonatomic, readonly) const void*featureIds;
@property (nonatomic, readonly) void*fillMeshes;
@property (nonatomic, readonly) bool isFixedSize;
@property (nonatomic, readonly) const void*maxPoint;
@property (nonatomic, readonly) const void*origin;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  size; /* unknown property attribute:  1>=[3f]} */
@property (nonatomic, readonly) float tileZoom;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)attributeSets;
- (bool)canAcceptPolygon:(void*)arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })centroid;
- (void)clearRouteAttributes;
- (const void*)commitRangesToFillRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (const void*)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const void*)commitRangesToStrokeRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (const void*)commitRangesToVenueWallEndCapRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const void*)commitRangesToVenueWallRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (const void*)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (unsigned int)cullingMask;
- (void)didFinishAddingData;
- (const void*)featureIds;
- (void*)fillMeshes;
- (bool)hasFeatureId:(unsigned long long)arg1;
- (unsigned char)indexForGeoFeatureAttributes:(const void*)arg1;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void*)arg3 contentScale:(float)arg4;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void*)arg3 contentScale:(float)arg4 storage:(struct shared_ptr<md::MeshSetStorage> { struct MeshSetStorage {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (bool)isFixedSize;
- (unsigned char)maxAttributeSetsPerGroup;
- (const void*)maxPoint;
- (const void*)origin;
- (void)setRouteAttributes:(const struct PolygonRouteAttributes { unsigned int x1; unsigned char x2; bool x3; }*)arg1;
- (struct Matrix<float, 3, 1> { float x1[3]; })size;
- (void*)styleQueries:(const struct StyleQueryOverride { unsigned char x1; unsigned char x2; }*)arg1;
- (float)tileZoom;
- (void)updateCachedStyles;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end
