
@interface PHASEShape : NSObject <NSCopying> {
    NSArray * _elements;
    PHASEEngine * _engine;
    unsigned long long  _flags;
    bool  _isReal;
    struct vector<Phase::LocalizedGeometryPermutation, std::allocator<Phase::LocalizedGeometryPermutation>> { 
        struct LocalizedGeometryPermutation {} *__begin_; 
        struct LocalizedGeometryPermutation {} *__end_; 
        struct __compressed_pair<Phase::LocalizedGeometryPermutation *, std::allocator<Phase::LocalizedGeometryPermutation>> { 
            struct LocalizedGeometryPermutation {} *__value_; 
        } __end_cap_; 
    }  _localizedGeometryPermutations;
    struct MdlMeshAsset { 
        unsigned int mType; 
        struct unique_ptr<Phase::details::MdlMeshAssetImplementation, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { 
            struct __compressed_pair<Phase::details::MdlMeshAssetImplementation *, std::default_delete<Phase::details::MdlMeshAssetImplementation>> { 
                struct MdlMeshAssetImplementation {} *__value_; 
            } __ptr_; 
        } mpImplementation; 
    }  _meshAsset;
    int  _voxelDensity;
}

@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic) PHASEEngine *engine;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyOptions:(id)arg1;
- (void)buildLocalizedGeometryPermutations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dumpState;
- (id)elements;
- (id)engine;
- (id)geoShapeHandlesForEntityType:(unsigned int)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1 mesh:(id)arg2;
- (id)initWithEngine:(id)arg1 mesh:(id)arg2 materials:(id)arg3;
- (id)initWithEngine:(id)arg1 mesh:(id)arg2 materials:(id)arg3 options:(id)arg4;
- (id)initWithEngine:(id)arg1 mesh:(id)arg2 options:(id)arg3;
- (id)initWithShape:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)updateMaterialForElement:(id)arg1;
- (void)updateMaterialForShape:(struct Handle64 { unsigned long long x1; })arg1 fromElementIndex:(unsigned long long)arg2;

@end
