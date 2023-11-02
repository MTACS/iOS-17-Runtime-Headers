
@interface VKBuildingGroup : VKPolygonalItemGroup {
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _extrusionFillCullingGroups;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> { 
        struct __compressed_pair<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> { 
            void *__value_; 
        } __ptr_; 
    }  _extrusionFillMeshVendor;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _extrusionStrokeCullingGroups;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { 
        struct __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { 
            void *__value_; 
        } __ptr_; 
    }  _extrusionStrokeMeshVendor;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _fillCullingGroupsForPointyRoofs;
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
    }  _fillMeshInfoForPointyRoofs;
    struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _fillMeshesForPointyRoofs;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _flatRoofStyleQueries;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _pointyRoofFillCullingGroups;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> { 
        struct __compressed_pair<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> { 
            void *__value_; 
        } __ptr_; 
    }  _pointyRoofFillMeshVendor;
    struct array<std::vector<std::vector<FeatureRange>>, 16UL> { 
        struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> { 
                void *__value_; 
            } __end_cap_; 
        } __elems_[16]; 
    }  _pointyRoofStrokeCullingGroups;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { 
        struct __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> { 
            void *__value_; 
        } __ptr_; 
    }  _pointyRoofStrokeMeshVendor;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _selectedFlatRoofStyleQueries;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _selectedStyleQueries;
    struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::BuildingFlatStroke::DefaultVbo> { 
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
    }  _strokeMeshInfo;
    struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _strokeMeshes;
    struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _styleQueries;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBuilding:(void*)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg4 triangulator:(void*)arg5 prepareExtrusion:(bool)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8;
- (void)addExtrusionForBuilding:(void*)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3;
- (bool)addPointyRoofForBuilding:(void*)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4;
- (bool)canConstructPointyRoofForPolygon:(void*)arg1 building:(void*)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;
- (const void*)commitRangesToExtrusionFillRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (const void*)commitRangesToExtrusionStrokeRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (const void*)commitRangesToPointyRoofFillRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (const void*)commitRangesToPointyRoofStrokeRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (const void*)commitRangesToPointyRoofTopRenderItemBatcher:(void*)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(struct function<bool (unsigned long long)>={__value_func<bool (unsigned long long)>={type=[24C] {})arg4;
- (void)didFinishAddingData;
- (const void*)extrusionFillMeshVendor;
- (const void*)extrusionStrokeMeshVendor;
- (void*)fillMeshesForPointyRoofs;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void*)arg3 contentScale:(float)arg4;
- (unsigned char)maxAttributeSetsPerGroup;
- (const void*)pointyRoofFillMeshVendor;
- (const void*)pointyRoofStrokeMeshVendor;
- (void)prepareForBuilding:(void*)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3;
- (void*)strokeMeshes;
- (void*)styleQueriesForPointyRoofs:(bool)arg1 selected:(bool)arg2;
- (void)updateWithStyleManager:(const void*)arg1;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end
