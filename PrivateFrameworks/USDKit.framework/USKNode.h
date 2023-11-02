
@interface USKNode : USKObject {
    USKScene * _owner;
    struct UsdPrim { 
        int _type; 
        struct Usd_PrimDataHandle { 
            struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { 
                struct Usd_PrimData {} *px; 
            } _p; 
        } _prim; 
        struct SdfPath { 
            struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _primPart; 
            struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _propPart; 
        } _proxyPrimPath; 
        struct TfToken { 
            struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { 
                struct _Rep {} *_ptrAndBits; 
            } _rep; 
        } _propName; 
    }  _prim;
}

@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSArray *schemaTypes;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) USKToken *typeName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 offset:(id)arg3;
- (void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2;
- (void)addVariant:(id)arg1 variantSet:(id)arg2;
- (void)addVariantSet:(id)arg1;
- (void)applyType:(id)arg1;
- (id)childIterator;
- (void)clearReferences;
- (bool)clearVariantSelectionForVariantSet:(id)arg1;
- (id)createUniqueGeomSubset:(id)arg1 elementType:(id)arg2 indices:(id)arg3 familyName:(id)arg4 familyType:(id)arg5;
- (id)customMetadataWithKey:(id)arg1;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (bool)editVariant:(id)arg1 variantSet:(id)arg2 block:(id /* block */)arg3;
- (id)getAllGeomSubsets;
- (id)getGeomSubsetElementTypeAttr;
- (id)getGeomSubsetFamilyName;
- (id)getGeomSubsetIndicesAttr;
- (id)getGeomSubsets:(id)arg1 familyName:(id)arg2;
- (bool)hasSchemaType:(id)arg1;
- (bool)hasVariantSet:(id)arg1;
- (bool)hasVariantSets;
- (unsigned long long)hash;
- (id)inheritedMaterialBinding;
- (id)inheritedProperty:(id)arg1;
- (id)inheritedSkeletonAnimationBinding;
- (id)inheritedSkeletonBinding;
- (id)initWithUsdPrim:(struct UsdPrim { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })arg1;
- (id)initWithUsdPrim:(struct UsdPrim { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })arg1 withSceneOwner:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInstanceNode;
- (id)loadedChildIterator;
- (id)loadedSubtreeIterator;
- (id)masterNode;
- (id)metadata;
- (id)metadataWithKey:(id)arg1;
- (id)name;
- (id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(bool)arg4;
- (id)parent;
- (id)path;
- (id)properties;
- (id)property:(id)arg1;
- (id)propertyList;
- (bool)removeProperty:(id)arg1;
- (id)schemaTypes;
- (bool)selectVariant:(id)arg1 variantSet:(id)arg2;
- (bool)setCustomMetadata:(id)arg1 value:(id)arg2;
- (bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (bool)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)subtreeIterator;
- (id)type;
- (id)typeName;
- (struct UsdPrim { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })usdPrim;
- (id)variantSets;
- (id)variantsWithVariantSet:(id)arg1;

@end
