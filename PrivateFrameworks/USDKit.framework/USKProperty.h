
@interface USKProperty : USKObject {
    USKNode * _nodeOwner;
    struct UsdProperty { 
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
    }  _property;
    USKScene * _sceneOwner;
}

@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) USKToken *roleName;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) USKToken *typeName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)arraySize;
- (unsigned long long)arraySizeAtTime:(double)arg1;
- (bool)boolValue;
- (void)clearConnections;
- (void)clearMetadata;
- (void)clearValue;
- (id)connectedPropertyPath;
- (id)connectedPropertyPaths;
- (id)customMetadataWithKey:(id)arg1;
- (id)data;
- (id)dataAtTime:(double)arg1;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (unsigned long long)double2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)double2Value;
- (void)double2ValueAtTime:(double)arg1;
- (unsigned long long)double3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)double3Value;
- (void)double3ValueAtTime:(double)arg1;
- (unsigned long long)double4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)double4Value;
- (void)double4ValueAtTime:(double)arg1;
- (unsigned long long)double4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })double4x4Value;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })double4x4ValueAtTime:(double)arg1;
- (unsigned long long)doubleArray:(double*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)doubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (double)doubleValue;
- (double)doubleValueAtTime:(double)arg1;
- (unsigned long long)float2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)float2Value;
- (void)float2ValueAtTime:(double)arg1;
- (unsigned long long)float3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)float3Value;
- (void)float3ValueAtTime:(double)arg1;
- (unsigned long long)float4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)float4Value;
- (void)float4ValueAtTime:(double)arg1;
- (unsigned long long)float4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)floatArray:(float*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)floatArray:(float*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (float)floatValue;
- (float)floatValueAtTime:(double)arg1;
- (unsigned long long)hash;
- (id)initWithUsdProperty:(struct UsdProperty { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })arg1;
- (id)initWithUsdProperty:(struct UsdProperty { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })arg1 withNodeOwner:(id)arg2;
- (id)initWithUsdProperty:(struct UsdProperty { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })arg1 withSceneOwner:(id)arg2;
- (unsigned long long)intArray:(int*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)intArray:(int*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (int)intValue;
- (bool)isAnimated;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)metadataWithKey:(id)arg1;
- (id)name;
- (id)objectPath;
- (id)objectPathArray;
- (id)parentNode;
- (id)path;
- (unsigned long long)quatfArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)quatfArray:(struct { }*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (struct { })quatfValue;
- (struct { })quatfValueAtTime:(double)arg1;
- (id)resourcePath;
- (id)resourcePathArray;
- (id)role;
- (id)roleName;
- (void)setBoolValue:(bool)arg1;
- (bool)setConnectionWithTargetPaths:(id)arg1;
- (bool)setCustomMetadata:(id)arg1 value:(id)arg2;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 atTime:(double)arg2;
- (bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (void)setDouble2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)setDouble2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDouble2Value;
- (void)setDouble2Value:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setDouble3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)setDouble3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDouble3Value;
- (void)setDouble3Value:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setDouble4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)setDouble4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDouble4Value;
- (void)setDouble4Value:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setDouble4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2;
- (void)setDouble4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDouble4x4Value:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDouble4x4Value:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 atTime:(double)arg2;
- (void)setDoubleArray:(double*)arg1 count:(unsigned long long)arg2;
- (void)setDoubleArray:(double*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDoubleValue:(double)arg1;
- (void)setDoubleValue:(double)arg1 atTime:(double)arg2;
- (void)setFloat2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)setFloat2Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloat2Value;
- (void)setFloat2Value:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setFloat3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)setFloat3Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloat3Value;
- (void)setFloat3Value:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setFloat4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (void)setFloat4Array:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloat4Value;
- (void)setFloat4Value:(void *)arg1 atTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)setFloat4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2;
- (void)setFloat4x4Array:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloatArray:(float*)arg1 count:(unsigned long long)arg2;
- (void)setFloatArray:(float*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloatValue:(float)arg1;
- (void)setFloatValue:(float)arg1 atTime:(double)arg2;
- (void)setIntArray:(int*)arg1 count:(unsigned long long)arg2;
- (void)setIntArray:(int*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setIntValue:(int)arg1;
- (bool)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (void)setObjectPath:(id)arg1;
- (void)setObjectPathArray:(id)arg1;
- (void)setQuatfArray:(struct { }*)arg1 count:(unsigned long long)arg2;
- (void)setQuatfArray:(struct { }*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setQuatfValue:(struct { })arg1;
- (void)setQuatfValue:(struct { })arg1 atTime:(double)arg2;
- (void)setResourcePath:(id)arg1;
- (void)setResourcePathArray:(id)arg1;
- (void)setStringArray:(id)arg1;
- (void)setStringArray:(id)arg1 atTime:(double)arg2;
- (void)setStringValue:(id)arg1;
- (void)setTimeCodeValue:(id)arg1;
- (void)setTokenArray:(id)arg1;
- (void)setTokenArray:(id)arg1 atTime:(double)arg2;
- (void)setTokenValue:(id)arg1;
- (void)setUIntArray:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setUIntArray:(unsigned int*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setUIntValue:(unsigned int)arg1;
- (void)setUIntValue:(unsigned int)arg1 atTime:(double)arg2;
- (void)setURL:(id)arg1;
- (id)stringArray;
- (id)stringArrayAtTime:(double)arg1;
- (id)stringValue;
- (id)targetObject;
- (id)timeCodeValue;
- (id)timeSamples;
- (id)tokenArray;
- (id)tokenArrayAtTime:(double)arg1;
- (id)tokenValue;
- (id)type;
- (id)typeName;
- (unsigned long long)uintArray:(unsigned int*)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)uintArray:(unsigned int*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned int)uintValue;
- (unsigned int)uintValueAtTime:(double)arg1;
- (id)urlValue;
- (struct UsdProperty { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_22__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_22__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; })usdProperty;

@end
