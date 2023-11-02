
@interface USKNodeSiblingIterator : NSObject <USKIterator> {
    struct UsdPrimSiblingIterator { 
        struct Usd_PrimData {} *m_iterator; 
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
        struct Usd_PrimFlagsPredicate { 
            struct bitset<14UL> { 
                unsigned long long __first_; 
            } _mask; 
            struct bitset<14UL> { 
                unsigned long long __first_; 
            } _values; 
            bool _negate; 
        } _predicate; 
    }  _it;
    struct iterator_range<pxrInternal_v0_22__aapl__pxrReserved__::UsdPrimSiblingIterator> { 
        struct UsdPrimSiblingIterator { 
            struct Usd_PrimData {} *m_iterator; 
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
            struct Usd_PrimFlagsPredicate { 
                struct bitset<14UL> { 
                    unsigned long long __first_; 
                } _mask; 
                struct bitset<14UL> { 
                    unsigned long long __first_; 
                } _values; 
                bool _negate; 
            } _predicate; 
        } m_Begin; 
        struct UsdPrimSiblingIterator { 
            struct Usd_PrimData {} *m_iterator; 
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
            struct Usd_PrimFlagsPredicate { 
                struct bitset<14UL> { 
                    unsigned long long __first_; 
                } _mask; 
                struct bitset<14UL> { 
                    unsigned long long __first_; 
                } _values; 
                bool _negate; 
            } _predicate; 
        } m_End; 
    }  _range;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPrim:(const void*)arg1;
- (id)initWithPrim:(const void*)arg1 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<14UL> { unsigned long long x_1_1_1; } x1; struct bitset<14UL> { unsigned long long x_2_1_1; } x2; bool x3; })arg2;
- (id)initWithSiblingRange:(const void*)arg1;
- (id)nextObject;

@end
