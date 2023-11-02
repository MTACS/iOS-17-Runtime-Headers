
@interface VKPolygonGroup : VKPolygonalItemGroup {
    unsigned char  _lastResolvedZoom;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sourceRoofTexture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sourceTexture;
    struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[184]; 
            struct MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo> { 
                struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _vertexAndIndexCounts; 
                struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } _meshes; 
                struct DataWrite<ggl::PolygonCommonStroke::DefaultVbo> { 
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
    struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _strokeMeshes;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _targetRoofTexture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _targetTexture;
}

@property (nonatomic, readonly) void*sourceRoofTexture;
@property (nonatomic, readonly) void*sourceTexture;
@property (nonatomic, readonly) void*strokeMeshes;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{FeatureAttributeSet={vector<std::pair<gss::StyleAttribute' */ struct  styleAttributes; /* unknown property attribute:  gss::Allocator>=^{Allocator}}}}} */
@property (nonatomic, readonly) void*targetRoofTexture;
@property (nonatomic, readonly) void*targetTexture;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })_textureForName:(const void*)arg1 textureManager:(void*)arg2;
- (bool)addFillForSection:(const void*)arg1 precision:(unsigned char)arg2 styleIndex:(unsigned int)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg5 triangulator:(void*)arg6;
- (void)addPolygon:(void*)arg1 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg2 triangulator:(void*)arg3 withRounder:(struct PolygonRound { float x1; float x2; float x3; float x4; float x5; }*)arg4;
- (void)addStrokeForSection:(const void*)arg1 paddedCount:(unsigned int)arg2 key:(struct pair<const void *, unsigned long> { void *x1; unsigned long long x2; })arg3 attributes:(const void*)arg4 styles:(void*)arg5 cullingMask:(unsigned int)arg6 accessor:(struct ResourceAccessor { int (**x1)(); }*)arg7;
- (unsigned int)createStrokePointStyleList:(void*)arg1 section:(unsigned long long)arg2 outPointStyles:(void*)arg3 withRounder:(struct PolygonRound { float x1; float x2; float x3; float x4; float x5; }*)arg4;
- (void)didFinishAddingData;
- (void)enclosePointsInBoundingBox:(const void*)arg1 count:(unsigned long long)arg2;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void*)arg3 contentScale:(float)arg4;
- (id)initWithStyleQuery:(void*)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const void*)arg3 contentScale:(float)arg4 storage:(struct shared_ptr<md::MeshSetStorage> { struct MeshSetStorage {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (unsigned char)initialStyleIndexForSection:(const void*)arg1 attributes:(const void*)arg2 styles:(const void*)arg3;
- (void)prepareForPolygon:(void*)arg1 withRounder:(struct PolygonRound { float x1; float x2; float x3; float x4; float x5; }*)arg2;
- (void)prepareToFillSection:(const void*)arg1;
- (void)prepareToStrokeSection:(const void*)arg1 key:(const void*)arg2 styles:(void*)arg3 paddedCount:(unsigned int)arg4;
- (void)setNeedsTextureUpdate;
- (void*)sourceRoofTexture;
- (void*)sourceTexture;
- (void*)strokeMeshes;
- (struct FeatureAttributeSet { struct vector<std::pair<gss::StyleAttribute, unsigned short>, geo::StdAllocator<std::pair<gss::StyleAttribute, unsigned short>, gss::Allocator>> { void *x_1_1_1; void *x_1_1_2; struct __compressed_pair<std::pair<gss::StyleAttribute, unsigned short> *, geo::StdAllocator<std::pair<gss::StyleAttribute, unsigned short>, gss::Allocator>> { void *x_3_2_1; struct StdAllocator<std::pair<gss::StyleAttribute, unsigned short>, gss::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; })styleAttributes;
- (unsigned char)styleIndexForAttributes:(const void*)arg1 edgePair:(const struct GeoCodecsFeatureStylePair { unsigned int x1; int x2; }*)arg2;
- (void*)targetRoofTexture;
- (void*)targetTexture;
- (void)updateTextures:(unsigned char)arg1 textureManager:(void*)arg2;
- (void)updateTexturesIfNecessary:(float)arg1 textureManager:(void*)arg2;
- (void)willAddDataWithAccessor:(struct ResourceAccessor { int (**x1)(); }*)arg1;

@end
