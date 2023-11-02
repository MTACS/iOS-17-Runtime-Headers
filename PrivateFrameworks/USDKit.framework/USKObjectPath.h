
@interface USKObjectPath : NSObject {
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
    }  _path;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSdfPath:(struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_2_1; } x_1_1_1; } x1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_2_1; } x_2_1_1; } x2; })arg1;
- (id)initWithString:(id)arg1;
- (id)initWithToken:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNodePath;
- (bool)isPropertyPath;
- (id)nodePath;
- (struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_2_1; } x_1_1_1; } x1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal_v0_22__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x_1_2_1; } x_2_1_1; } x2; })path;
- (id)pathByAppendingPropertyComponent:(id)arg1;
- (id)propertyName;
- (id)stringValue;
- (id)tokenValue;

@end
