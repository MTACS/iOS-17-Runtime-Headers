
@interface VKVenueGroup : VKPolygonGroup {
    unsigned long long  _buildingId;
    int  _layer;
    float  _maximumSectionLength;
    struct optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::VenueWall::EndCapMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::VenueWall::EndCapVbo> { 
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
    }  _venueWallEndCapMeshInfo;
    struct vector<std::shared_ptr<ggl::VenueWall::EndCapMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _venueWallEndMeshes;
    struct optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::Venue3DStroke::HorizontalDefaultVbo> { 
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
    }  _venueWallHorizontalStrokeMeshInfo;
    struct vector<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _venueWallHorizontalStrokeMeshes;
    struct optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::VenueWall::MeshMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::VenueWall::MeshMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::VenueWall::DefaultVbo> { 
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
    }  _venueWallMeshInfo;
    struct vector<std::shared_ptr<ggl::VenueWall::MeshMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::VenueWall::MeshMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _venueWallMeshes;
    struct optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::Venue3DStroke::VerticalDefaultVbo> { 
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
    }  _venueWallVerticalStrokeMeshInfo;
    struct vector<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _venueWallVerticalStrokeMeshes;
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
    }  _venueWalls;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _wallTexture;
}

@property (nonatomic, readonly) unsigned long long buildingId;
@property (nonatomic, readonly) int layer;
@property (nonatomic, readonly) float maximumSectionLength;
@property (nonatomic, readonly) const void*venueWallEndMeshes;
@property (nonatomic, readonly) const void*venueWallHorizontalStrokeMeshes;
@property (nonatomic, readonly) const void*venueWallMeshes;
@property (nonatomic, readonly) const void*venueWallVerticalStrokeMeshes;
@property (nonatomic, readonly) void*wallTexture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addStrokeForSection:(const void*)arg1 paddedCount:(unsigned int)arg2 key:(struct pair<const void *, unsigned long> { void *x1; unsigned long long x2; })arg3 attributes:(const void*)arg4 styles:(void*)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg7;
- (void)addWallStrokesForSection:(const void*)arg1 edges:(const void*)arg2 attributes:(const void*)arg3 styles:(void*)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg6;
- (void)addWallsForSection:(const void*)arg1 edges:(const void*)arg2 attributes:(const void*)arg3 styles:(void*)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg6;
- (struct StrokeBufferSizing { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })bufferSizingForStrokesOnSection:(const void*)arg1 styles:(const void*)arg2 edges:(const void*)arg3;
- (unsigned long long)buildingId;
- (void)didFinishAddingData;
- (const void*)generateEdgeListForPolygonSection:(const void*)arg1 key:(const void*)arg2;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 layer:(int)arg3 buildingId:(unsigned long long)arg4 contentScale:(float)arg5;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 layer:(int)arg3 buildingId:(unsigned long long)arg4 contentScale:(float)arg5 storage:(struct shared_ptr<md::MeshSetStorage> { struct MeshSetStorage {} *x1; struct __shared_weak_count {} *x2; })arg6;
- (int)layer;
- (float)maximumSectionLength;
- (void)prepareToGenerateWallStrokesForSection:(const void*)arg1 styles:(const void*)arg2 edges:(const void*)arg3;
- (void)prepareToGenerateWallsForSection:(const void*)arg1 styles:(void*)arg2 edges:(const void*)arg3;
- (void)prepareToStrokeSection:(const void*)arg1 key:(const void*)arg2 styles:(void*)arg3 paddedCount:(unsigned int)arg4;
- (void)updateTextures:(unsigned char)arg1 textureManager:(void*)arg2;
- (const void*)venueWallEndMeshes;
- (const void*)venueWallHorizontalStrokeMeshes;
- (const void*)venueWallMeshes;
- (const void*)venueWallVerticalStrokeMeshes;
- (unsigned long long)verticalStrokeCountForSection:(const void*)arg1 styles:(const void*)arg2 edges:(const void*)arg3;
- (void*)wallTexture;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end
