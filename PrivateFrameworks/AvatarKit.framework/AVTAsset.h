
@interface AVTAsset : NSObject {
    NSString * _ambientOcclusion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    id  _cachedResource;
    long long  _componentType;
    unsigned long long  _editableColorCount;
    bool  _forceHighTessellation;
    NSDictionary * _highlights;
    NSDictionary * _imageVariantDependencies;
    NSDictionary * _layers;
    NSDictionary * _materialVariantDependencies;
    NSDictionary * _morphVariantDependencies;
    NSDictionary * _perAssetMain;
    unsigned long long  _refCount;
    NSString * _resourcePath;
    unsigned char  _resourceType;
    NSDictionary * _specializationSettings;
    NSString * _uid;
    struct { 
        bool mirroringEnabled; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
        } transform; 
    }  _uvRemappingInfo;
    NSString * _wrapDeformerDriverName;
}

@property (readonly) NSString *ambientOcclusion;
@property (readonly) long long componentType;
@property (readonly) unsigned long long editableColorCount;
@property (readonly) bool is2DAsset;
@property (readonly) bool is3DAsset;
@property (readonly) NSDictionary *layers;
@property (readonly) NSDictionary *specializationSettings;
@property (readonly) NSString *uid;
@property (readonly) struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; } uvRemappingInfo;

- (void).cxx_destruct;
- (id)ambientOcclusion;
- (id)assetImageForAsset:(id)arg1;
- (long long)componentType;
- (void)decrUseCount;
- (id)description;
- (unsigned long long)editableColorCount;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)freeCache;
- (void)incrUseCount;
- (id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3;
- (id)instantiateResource;
- (bool)is2DAsset;
- (bool)is3DAsset;
- (id)layers;
- (id)resourceByCachingIfNeeded:(bool)arg1;
- (id)specializationSettings;
- (id)uid;
- (struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })uvRemappingInfo;

@end
